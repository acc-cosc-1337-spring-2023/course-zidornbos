//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::string;

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(int i = 0; i < 9; i += 3)
    {
        std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
    }
}

bool TicTacToe::game_over()
{
    return check_column_win() || check_row_win() || check_diagonal_win() ||  check_board_full();
}

string TicTacToe::get_winner() const
{
    return winner;
}

bool TicTacToe::check_column_win() const
{
    for(int i=0; i < 3; ++i)
    {
        if(pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win() const
{
    for(int i = 0; i < 9; i +=3)
    {
        if(pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win() const
{
    if((pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ") || (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " "))
    {
        return true;
    }
    return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    } else 
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for (auto peg : pegs)
    {
        if (peg == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (auto& peg : pegs)
    {
        peg = " ";
    }
}

/*void TicTacToe::restart_game(std::string first_player)
{
    clear_board();
    start_game(first_player);
}*/
