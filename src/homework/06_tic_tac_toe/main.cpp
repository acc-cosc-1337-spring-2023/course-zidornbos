#include <iostream>
#include <string>
#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	std::string first_player;
	bool continue_game = true;
	game.start_game(first_player);

	while (continue_game)
	{
	cout << "Enter the first player (X or O): ";
	cin >> first_player;

	TicTacToe game;
	game.start_game(first_player);

		while(!game.game_over())
		{
			int position;
			game.display_board();
			cout << "Enter a position (1-9): ";
			cin >> position;

			while(!cin.good() || position < 1 || position > 9)
			{
				cout << "Invalid selection. Please try again.\n";
				cin.clear();
				cin >> position;
			}

		game.mark_board(position);
		}
		if (game.game_over())
		{
		
			cout << "Game over!\n";
			cout << "Winner: " << game.get_winner() << '\n';

			std::string answer;
			cout << "Play again? (Y/N): ";
			cin >> answer;
			if (answer == "N")
			{
				continue_game = false;
			}
			
			TicTacToe game;
			game.start_game(first_player);
		}

	

	}
	return 0;
}