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
	t.mark_board(1, 2, 3, 4, 5, 7, 6, 9, 8);
	t.game_over();
	

	REQUIRE(t.game_over(true) == true);

}
