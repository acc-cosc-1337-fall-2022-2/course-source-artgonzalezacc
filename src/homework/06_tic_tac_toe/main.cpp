#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin;

int main() 
{
	TicTacToeManager manager;
	std::string player;
	char choice;
	
	do
	{
		TicTacToe tic_tac_toe;
		player = "Z";

		while(!(player == "X" || player == "O")){
			cout<<"Enter X or O: ";
			cin>>player;
		}

		tic_tac_toe.start_game(player);

		do
		{
			cin>>tic_tac_toe;
			cout<<tic_tac_toe;

		} while (tic_tac_toe.game_over() == false);

		manager.save_game(tic_tac_toe);

		cout<<"Play again, enter Y";
		cin>>choice;

	}while(choice == 'y' || choice == 'Y');

	cout<<manager;
	int o, x, c;
	manager.get_winner_total(o, x, c);
	cout<<"X wins: "<<x<<"\n";
	cout<<"O wins: "<<o<<"\n";
	cout<<"C wins: "<<c<<"\n";

	return 0;
}

