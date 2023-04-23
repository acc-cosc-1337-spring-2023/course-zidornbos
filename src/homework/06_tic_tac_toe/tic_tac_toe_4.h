//h
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

using std::string; using std::vector;

class TicTacToe4 : public TicTacToe
{
    public:
        TicTacToe4() : TicTacToe(4){}
        TicTacToe4(std::vector<string> p, string winner) : TicTacToe(p, winner){};
        int get_board_size() const override { return 4;}

    private:
        bool check_column_win() const override;
        bool check_row_win() const override;
        bool check_diagonal_win() const override;
};

#endif