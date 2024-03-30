#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Initialize the state of the Tic Tac Toe board.
// Implement and return the initial state of the board.
char intial_state()
{
}

// Determine the current player's symbol.
// Implement and return the symbol of the current player ('X' or 'O').
char player()
{
}

// Generate all possible actions available on the board.
// Implement and return a set of pairs representing possible actions (1-9)
// Each pair corresponds to an empty cell on the board identified by its row and column indices.
int actions(char board)
{
}

// Get the resulting state after applying an action.
// Implement and return the resulting state of the board after applying a specific action.
// Takes the current board state and the action to apply as input parameters.
int result(char board, int action)
{
}

// Determine the winner of the game.
// Implement and return the symbol of the winner ('X', 'O', or ' ') indicating no winner.
// Takes the current board state as input.
char winner(char board[3][3])
{
  char winner = ' ';

  //rows
  for (int i = 0; i < 3; ++i)
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
    {
      winner = board[i][0];
      break;
    }
  }

  //columns
  for (int i = 0; i < 3; ++i)
  {
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
    {
      winner = board[0][i];
      break;
    }
  }

  //diagonals
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') 
  {
    winner = board[0][0];
  }
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') 
  {
    winner = board[0][2];
  }

  //winner
  if (winner == 'X')
  {
    cout << "X" wins!" << endl;
  }
  else if (winner == 'O')
  {
    cout << "O" wins!" << endl;
  }
  else if (winner == ' ')
  {
    cout << "draw!" << endl;
  }

  return winner;
}
