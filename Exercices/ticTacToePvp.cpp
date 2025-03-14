#include <iostream>
#include <stdlib.h>
#include <ctime>

void drawBoard(char* spaces);
void palyer1Move(char* spaces, char player1);
void player2Move(char* spaces, char player1);
bool checkWin(char* spaces, char player1, char player2);
bool checkTie(char* spaces);

int main ()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player1 = 'X';
    char player2 = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        palyer1Move(spaces, player1);
        drawBoard(spaces);
        if (checkWin(spaces, player1, player2))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
        
        
        player2Move(spaces, player2);
        drawBoard(spaces);
        if (checkWin(spaces, player1, player2))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
    }
    std::cout << '\n';
    std::cout << "Thanks for playing !";


    return 0;
}

void drawBoard(char* spaces)
{
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}
void palyer1Move(char* spaces, char player1)
{
    int number{};
    do
    {
        std::cout << "Player 1 enter a spot to place an X (1-9) : ";
        std::cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player1;
            break;
        }
        
    } while (!number > 0 || !number < 8);
    
}
void player2Move(char* spaces, char player2)
{
    int number{};
    do
    {
        std::cout << "Player 2 enter a spot to place an O (1-9) : ";
        std::cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player2;
            break;
        }
        
    } while (!number > 0 || !number < 8);
    
}
bool checkWin(char* spaces, char player1, char player2)
{
    //check row
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player1 ? std::cout << "Player1 WIN!\n" : std::cout << "Player2 WIN!\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player1 ? std::cout << "Player1 WIN!\n" : std::cout << "Player2 WIN!\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player1 ? std::cout << "Player1 WIN!\n" : std::cout << "Player2 WIN!\n";
    }
    //check column
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player1 ? std::cout << "Player1 WIN!\n" : std::cout << "Player2 WIN!\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player1 ? std::cout << "Player1 WIN!\n" : std::cout << "Player2 WIN!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player1 ? std::cout << "Player1 WIN!\n" : std::cout << "Player2 WIN!\n";
    }
    //check diag
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player1 ? std::cout << "Player1 WIN!\n" : std::cout << "Player2 WIN!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player1 ? std::cout << "Player1 WIN!\n" : std::cout << "Player2 WIN!\n";
    }
    else
    {
        return false;
    }

    return true;
}
bool checkTie(char* spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
           return false; 
        }
        
    }
    std::cout << "IT'S A TIE!\n";
    return true;
}