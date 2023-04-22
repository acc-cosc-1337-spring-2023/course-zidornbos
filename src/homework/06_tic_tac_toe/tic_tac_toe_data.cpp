//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <fstream>

using std::vector; using std::unique_ptr; using std::ofstream; using std::string; using std::cout;

void TicTacToeData::save_game(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    ofstream file;
    file.open(file_name);
    if(file)
    {
        for (const auto& game : games)
        {
            const auto& pegs = game->get_pegs();
            for(const auto& peg : pegs)
            {
                file << peg;
            }
            file << game->get_winner() << "\n";
        }
    }
    file.close();
}

