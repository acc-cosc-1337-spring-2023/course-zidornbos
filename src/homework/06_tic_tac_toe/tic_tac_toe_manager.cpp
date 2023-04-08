//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

void TicTacToeManager::save_game(const TicTacToe& game)
{
  games.push_back(game);
  update_winner_count(game.get_winner()[0]);   
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
   for (const auto& game : manager.games)
   {
        out << game << "\n";
   } 
   return out;
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = o_wins;
    w = x_wins;
    t = ties;
}

void TicTacToeManager::update_winner_count(char winner) 
{
    if(winner == 'O')
    {
        o_wins++;
    }
    else if (winner == 'X')
    {
        x_wins++;
    }
    else
    {
        ties++;
    }
}