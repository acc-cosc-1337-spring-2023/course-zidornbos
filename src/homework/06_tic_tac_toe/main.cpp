#include <iostream>
#include <string>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToeManager manager;
	std::string first_player;
	char answer;
	int game_type;
	
	do
	{
	std::cout << "Enter the first player (x or o): ";
	cin >> first_player;

	std::cout << "Choose TicTacToe 3 or 4 (enter 3 or 4): ";
	std::cin >> game_type;

	std::unique_ptr<TicTacToe> game;
	if (game_type == 3)
	{
		game = std::make_unique<TicTacToe3>();
	}
	else if (game_type == 4)
	{
		game = std::make_unique<TicTacToe4>();
	}
	else
	{
		std::cout << "Invalid game type.\n";
		return 1;
	}

	game->start_game(first_player);

		while (!game->game_over())
		{
			std::cin >> *game;
			std::cout << *game;
		}

		std::string winner = game->get_winner();
		std::cout << "Winner: " << (winner =="C" ? "Tie" : winner) << "\n";
			
		manager.save_game(game);
		int o_wins, x_wins, ties;
		manager.get_winner_total(o_wins, x_wins, ties);

		std::cout << "O Wins: " << o_wins << "\n";
		std::cout << "X Wins: " << x_wins << "\n";
		std::cout << "Ties: " << ties << "\n";
   

		std::cout << "Play again? (Y/N): ";
		std::cin >> answer;
	}while(answer == 'Y' || answer == 'y');
		return 0;
		
	
}

	

