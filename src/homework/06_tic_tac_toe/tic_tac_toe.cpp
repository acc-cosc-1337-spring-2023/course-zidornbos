//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::string;

TicTacToe::TicTacToe(int size) : pegs(size * size, " "){}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    //set_next_player();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
    set_next_player();
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

std::string TicTacToe::get_player() const
{
    return player;
}

bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    } else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
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
    for(int i = 0; i < 9; i += 3)
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

std::istream& operator>>(std::istream& in, TicTacToe& game )
		{
			int position;
			std::cout << "Player " << game.get_player() << ", enter a position (1-9): ";
			in >> position;

			while(position < 1 || position > 9 || game.pegs[position - 1]!= " ")
			{
				std::cout << "Invalid selection. Please try again.\n";
				in >> position;
			}
       
		game.mark_board(position);
        game.set_next_player();
		return in;
        }

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for(int i = 0; i< 9; ++i)
    {
        out << game.pegs[i] << (i % 3 == 2 ? "" : " | ");
        if((i + 1) % 3 == 0)
        {
            out << "\n";
        }
    }   
    return out;
}

bool TicTacToe::check_board_full() const
{
    for (const auto &peg : pegs)
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

