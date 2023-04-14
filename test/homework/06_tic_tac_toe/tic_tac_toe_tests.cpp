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
	TicTacToe t;
	t.start_game("X");
	t.mark_board(1);
	REQUIRE(t.game_over() == false);
	t.mark_board(2);
	REQUIRE(t.game_over() == false);
	t.mark_board(3);
	REQUIRE(t.game_over() == false);
	t.mark_board(4);
	REQUIRE(t.game_over() == false);
	t.mark_board(7);
	REQUIRE(t.game_over() == false);
	t.mark_board(5);
	REQUIRE(t.game_over() == false);
	t.mark_board(6);
	REQUIRE(t.game_over() == false);
	t.mark_board(9);
	REQUIRE(t.game_over() == false);
	t.mark_board(8);
	REQUIRE(t.game_over() == true);

}

TEST_CASE("Test for C if game over is tie")
{
	TicTacToe t;
	t.start_game("X");
	t.mark_board(1);
	REQUIRE(t.game_over() == false);
	t.mark_board(2);
	REQUIRE(t.game_over() == false);
	t.mark_board(3);
	REQUIRE(t.game_over() == false);
	t.mark_board(5);
	REQUIRE(t.game_over() == false);
	t.mark_board(6);
	REQUIRE(t.game_over() == false);
	t.mark_board(4);
	REQUIRE(t.game_over() == false);
	t.mark_board(7);
	REQUIRE(t.game_over() == false);
	t.mark_board(8);
	REQUIRE(t.game_over() == false);
	t.mark_board(9);
	REQUIRE(t.game_over() == true);
	REQUIRE(t.get_winner() == "C");

}
TEST_CASE("Test first player is set to O")
{
	TicTacToe t;
	t.start_game("O");
	REQUIRE(t.get_player() == "O");
}

TEST_CASE("Test first player is set to X")
{
	TicTacToe t;
	t.start_game("X");
	REQUIRE(t.get_player() == "X");
}

TEST_CASE("Verify the get winner total is tallying correctly")
{
	TicTacToeManager manager;

	TicTacToe game;
	game.start_game("O");
	game.mark_board(3);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(9);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.game_over();
	manager.save_game(game);

	game.start_game("X");
	game.mark_board(5);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(8);
	game.game_over();
	manager.save_game(game);

	
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(8);
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(9);
	game.mark_board(7);
	game.game_over();
	manager.save_game(game);

	int o_wins, x_wins, ties;
	manager.get_winner_total(o_wins, x_wins, ties);

	REQUIRE(o_wins == 1);
	REQUIRE(x_wins == 1);
	REQUIRE(ties == 1);
	

}
