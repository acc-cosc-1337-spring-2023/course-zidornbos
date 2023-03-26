#include <iostream>
#include <string>
#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	std::string first_player;
	cout << "Enter the first player (X or O): ";
	cin >> first_player;
	game.start_game(first_player);

	bool continue_game = true;
	while (continue_game)
	{
		int position;
		game.display_board();
		cout << "Enter a position (1-9): ";
		cin >> position;
		game.mark_board(position);
		if (game.game_over())
		{
		
			cout << "Game over!\n";
			std::string answer;
			cout << "Play again? (Y/N): ";
			cin >> answer;
			if (answer == "N")
			{
				continue_game = false;
			}
			else
			{
				std::string first_player;
				cout<<"Enter the first player (X or O): ";
				cin>> first_player;
				game.restart_game(first_player);
			}
		}

	}


	return 0;
}