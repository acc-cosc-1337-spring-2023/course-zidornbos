// cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <cmath>

using std::string;

TicTacToe::TicTacToe(int size) : pegs(size * size, " ") {}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
    //set_next_player();
    /*if(!winner.empty())
    {
        set_next_player();
    }*/
}

void TicTacToe::set_next_player()
{
    if (player == "x")
    {
        player = "o";
    }
    else if (player == "o")
    {
        player = "x";
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
    }
    else if (check_board_full())
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
    return false;
}

bool TicTacToe::check_row_win() const
{
    return false;
}

bool TicTacToe::check_diagonal_win() const
{
    return false;
}

void TicTacToe::set_winner()
{
    if (player == "x")
    {
        winner = "o";
    }
    else
    {
        winner = "x";
    }
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    int board_size = game.get_board_size();
    int max_position = board_size * board_size;

    std::cout << "Player " << game.get_player() << ", enter a position (1-" << max_position << "): ";
    in >> position;

    while (position < 1 || position > max_position || game.pegs[position - 1] != " ")
    {
        std::cout << "Invalid selection. Please try again.\n";
        in >> position;
    }

    game.mark_board(position);
    //game.set_next_player();
    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    int board_size = static_cast<int>(std::sqrt(game.pegs.size()));
    for (std::vector<std::string>::size_type i = 0; i < game.pegs.size(); ++i)
    {
        out << game.pegs[i] << (i % board_size == static_cast<unsigned>(board_size - 1) ? "" : " | ");
        if ((i + 1) % board_size == 0)
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
    for (auto &peg : pegs)
    {
        peg = " ";
    }
}
