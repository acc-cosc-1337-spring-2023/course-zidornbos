#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{
	std::unique_ptr<TicTacToe> game; 
	game = std::make_unique<TicTacToe3>();
	
	
	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test for C if game over is tie")
{
	TicTacToe3 game;
	game.start_game("x");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");

}
TEST_CASE("Test first player is set to O")
{
	TicTacToe3 game;
	game.start_game("o");
	REQUIRE(game.get_player() == "o");
}

TEST_CASE("Test first player is set to X")
{
	TicTacToe3 game;
	game.start_game("x");
	REQUIRE(game.get_player() == "x");
}

TEST_CASE("Verify the get winner total is tallying correctly")
{
	TicTacToeManager manager;
	std::unique_ptr<TicTacToe> game; 
	game = std::make_unique<TicTacToe3>();
	
	game->start_game("o");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
	manager.save_game(game);

	game = std::make_unique<TicTacToe3>();
	game->start_game("x");
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
	manager.save_game(game);

	game = std::make_unique<TicTacToe3>();
	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	manager.save_game(game);

	int o_wins, x_wins, ties;
	manager.get_winner_total(o_wins, x_wins, ties);

	REQUIRE(o_wins == 1);
	REQUIRE(x_wins == 1);
	REQUIRE(ties == 1);
	

}

TEST_CASE("Verify first player is 'x' 4")
{
	TicTacToe4 game;
	game.start_game("x");
	REQUIRE(game.get_player() == "x");
}

TEST_CASE("Verify first player is 'o' 4")
{
	TicTacToe4 game;
	game.start_game("o");
	REQUIRE(game.get_player() == "o");
}

TEST_CASE("Test for C if game over is tie 4")
{
	TicTacToe4 game;
	game.start_game("x");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//o
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//o
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//o
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//o
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//o
	REQUIRE(game.game_over() == false);
	game.mark_board(12);
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//o
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//o
	REQUIRE(game.game_over() == false);
	game.mark_board(14);
	REQUIRE(game.game_over() == false);
	game.mark_board(15);//o
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");

}