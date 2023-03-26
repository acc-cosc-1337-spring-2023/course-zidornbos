#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"


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
	t.mark_board(5);
	REQUIRE(t.game_over() == false);
	t.mark_board(7);
	REQUIRE(t.game_over() == false);
	t.mark_board(6);
	REQUIRE(t.game_over() == false);
	t.mark_board(9);
	REQUIRE(t.game_over() == false);
	t.mark_board(8);
	REQUIRE(t.game_over() == true);

}
