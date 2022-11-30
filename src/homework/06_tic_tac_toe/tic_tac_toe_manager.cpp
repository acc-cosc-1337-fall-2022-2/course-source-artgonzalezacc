//cpp
#include "tic_tac_toe_manager.h"

//Write class function implementations here

void TicTacToeManager::save_game(const TicTacToe game)
{
	update_winner_count(game.get_winner());
	games.push_back(game);
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "C") 
	{
		ties++;
	}
	else if (winner == "X") 
	{
		x_win++;
	}
	else if (winner == "O") 
	{
		o_win++;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & t)
{
	for (auto game : t.games)
	{
		out << game <<"\n";
	}

	return out;
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}