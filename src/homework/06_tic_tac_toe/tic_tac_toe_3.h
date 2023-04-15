//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe
{
    public:
        TicTacToe3();
        int get_board_size() const override { return 3;}
    
    private:
        virtual bool check_column_win() const override;
        virtual bool check_row_win() const override;
        virtual bool check_diagonal_win() const override;
};

#endif