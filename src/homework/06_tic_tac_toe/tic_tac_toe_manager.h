//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
#include<vector>
//Write class interface here

class TicTacToeManager 
{
public:
	void save_game(const TicTacToe game);
    void get_winner_total(int& o, int& x, int& t);
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToeManager & t);
private:
	std::vector<TicTacToe> games;
	void update_winner_count(std::string winner);

	int x_win{ 0 }, o_win{ 0 }, ties{ 0 };
};

#endif // !TIC_TAC_TOE_MANAGER_H