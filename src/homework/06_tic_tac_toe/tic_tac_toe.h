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
        TicTacToe(int size);
        bool game_over();
        std::string get_winner() const;
        std::string get_player() const;
        friend std::istream& operator>>(std::istream& in, TicTacToe& game);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    
    protected:
        std::vector<std::string> pegs;
        virtual int get_board_size() const = 0;
        virtual bool check_column_win() const = 0;
        virtual bool check_row_win() const = 0;
        virtual bool check_diagonal_win() const = 0;

    private:
        void set_next_player();
        bool check_board_full() const;
        void clear_board();
        void set_winner();
        std::string player;
        std::string winner;

        

};

#endif
