//h
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

using std::string; using std::vector;
class TicTacToe3 : public TicTacToe
{
    public:
        TicTacToe3() : TicTacToe(3){};
        TicTacToe3(std::vector<string> p, string winner) : TicTacToe(p, winner){};
        int get_board_size() const override { return 3;}
    
    private:
        virtual bool check_column_win() const override;
        virtual bool check_row_win() const override;
        virtual bool check_diagonal_win() const override;
};

#endif