#ifndef TICTAC_H
#define TICTAC_H


#include <iostream>

// Функции
void DrawBoard();		
void GetInput(int position_number);		
int CheckWinner();		

// Константы
		
const int FALSE = 0;
const int X = 1;		// Player X
const int O = 2;		// Player Y
const int DRAW = -1;	

//Карта
char board[9] = { '1','2','3','4','5','6','7','8','9' };	
int player = X;			



void DrawBoard()
{

	std::cout

        << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n"
        << "-----------\n"
        << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n"
        << "-----------\n"
        << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
}

void GetInput(int position_input)
{

    
	
	while (true)
    {

        if(position_input < 0){
            
            std::cout << "INVALID POSITION, TRY AGAIN...\n";
            break;
        }
        position_input--;			
        if (position_input > 8 || board[position_input] == 'X' || board[position_input] == 'O')
		{
            
            std::cout << "INVALID POSITION, TRY AGAIN...\n";

            break;
		}
		break;
	}
	

    if (player == X){

        board[position_input] = 'X';

    }
    else {
        board[position_input] = 'O';

    }
}


int CheckWinner()
{

	// Проверка по горизонтали //
	if (board[0] == board[1] && board[1] == board[2]) return player;
	else if (board[3] == board[4] && board[4] == board[5]) return player;
	else if (board[6] == board[7] && board[7] == board[8]) return player;

	// Проверка по вертикали //
    else if (board[0] == board[3] && board[3] == board[6]) return player;
    else if (board[1] == board[4] && board[4] == board[7]) return player;
    else if (board[2] == board[5] && board[5] == board[8]) return player;

     // Проверка по диагонали //
    else if (board[0] == board[4] && board[4] == board[8]) return player;
    else if (board[2] == board[4] && board[4] == board[6]) return player;
	  // Проверка на ничью //  
    if(board[0] != '1' && board[1] != '2' && board[2] != '3' && 
       board[3] !='4' && board[4] != '5' && board[5] != '6' && board[6] != '7' && 
       board[7] != '8' && board[8] != '9'){

        
        return DRAW;

    }

    else return FALSE;
}
#endif 
