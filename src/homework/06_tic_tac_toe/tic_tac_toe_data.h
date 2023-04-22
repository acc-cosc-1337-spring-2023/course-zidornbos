//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using std::string; using std::vector;
class TicTacToeData
{
    public:
    void save_game(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_game();

    private:
    const std::string file_name{"tictactoe.dat"};
};