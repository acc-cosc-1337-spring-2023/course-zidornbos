//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
  update_winner_count(game->get_winner());
  games.push_back(std::move(game));   
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = o_wins;
    w = x_wins;
    t = ties;

}

void TicTacToeManager::update_winner_count(std::string winner) 
{
   
    if(winner == "o")
    {
        o_wins++;
    }
    else if (winner == "x")
    {
        x_wins++;
    }
    else
    {
        ties++;
    }
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
   for (const auto& game : manager.games)
   {
        out << *game << "\n";
   } 
    std::cout << "O Wins: " << manager.o_wins << "\n";
	std::cout << "X Wins: " << manager.x_wins << "\n";
	std::cout << "Ties: " << manager.ties << "\n";
   
   return out;
}

