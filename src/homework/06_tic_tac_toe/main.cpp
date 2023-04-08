#include <iostream>
#include <string>
#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	std::string first_player;
	bool continue_game = true;
	cout << "Enter the first player (X or O): ";
	cin >> first_player;
	game.start_game(first_player);

	while(continue_game)
	{
		TicTacToe game;
		game.start_game(first_player);
	

		while(!game.game_over() && continue_game)
		{
			int position;
			cout << "Player " << game.get_player() << ", enter a position (1-9): ";
			cin >> position;

			while(position < 1 || position > 9)
			{
				cout << "Invalid selection. Please try again.\n";
				cin >> position;
			}

		game.mark_board(position);
		game.display_board();

		}

		cout << "Game over ";
		if (game.get_winner() == "C") 
		{
			cout << "It's a tie!\n";
		}
		else
		{
			cout << "Winner: " << game.get_winner() << '\n';
		}
		std::string answer;
			cout << "Play again? (Y/N): ";
			cin >> answer;
			continue_game = (answer[0] == 'Y' || answer[0] == 'y');
				
			

	} 
	return 0;
}