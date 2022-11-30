//h
//h
#include<iostream>
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void mark_board(int position);
    void start_game(std::string first_player);
    void display_board()const;
    std::string get_player()const{return player;}
private:
    void set_next_player();
    bool check_board_full()const;
    void clear_board();    
    std::string player;
    std::vector<std::string> pegs{9, " "};
};

#endif