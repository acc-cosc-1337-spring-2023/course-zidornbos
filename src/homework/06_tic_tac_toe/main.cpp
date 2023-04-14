#include <iostream>
#include <string>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToeManager manager;
	std::string first_player;
	char answer;
	
	do
	{
	std::cout << "Enter the first player (x or o): ";
	cin >> first_player;

	TicTacToe game;
	game.start_game(first_player);

		while (!game.game_over())
		{
			std::cin >> game;
			std::cout << game;
		}

		std::string winner = game.get_winner();
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

	

