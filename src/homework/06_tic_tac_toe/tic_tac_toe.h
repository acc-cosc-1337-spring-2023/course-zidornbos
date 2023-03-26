//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>



class TicTacToe 
{
    public:
        void start_game(std::string first_player);
        void mark_board(int position);
        void display_board() const;
        bool game_over();
        void restart_game(std::string first_player);
    
    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        std::string player;
        std::vector<std::string> pegs{9, " "};

};

#endif
