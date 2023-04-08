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
       // void restart_game(std::string first_player);
        std::string get_winner() const;
        std::string get_player() const;
    
    private:
        void set_next_player();
        bool check_board_full() const;
        void clear_board();
        bool check_column_win() const;
        bool check_row_win() const;
        bool check_diagonal_win() const;
        void set_winner();
        std::string player;
        std::string winner;
        std::vector<std::string> pegs{9, " "};

};

#endif
