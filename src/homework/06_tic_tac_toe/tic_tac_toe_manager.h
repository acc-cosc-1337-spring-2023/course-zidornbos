//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <memory>

class TicTacToeManager
{
    public:
        void save_game(std::unique_ptr<TicTacToe>& game);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_total(int& o, int& w, int& t);

    private:
        std::vector<std::unique_ptr<TicTacToe>> games;
        int o_wins = 0;
        int x_wins = 0;
        int ties = 0;
        void update_winner_count(std::string winner);

};



#endif