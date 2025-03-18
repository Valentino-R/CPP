#include <iostream>
#include <stdlib.h>
#include <ctime>

void drawBoard(char* spaces);
void palyerMove(char* spaces, char player);
void computerMove(char* spaces, char computer, char player);
bool checkWin(char* spaces, char player, char computer);
bool checkTie(char* spaces);

int main ()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        palyerMove(spaces, player);
        drawBoard(spaces);
        if (checkWin(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
        
        computerMove(spaces, computer, player);
        drawBoard(spaces);
        if (checkWin(spaces, player, computer))
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
    std::cout << " _________________" <<'\n';
    std::cout << "|    1|    2|    3|" << '\n';
    std::cout << "|  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  |" << '\n';
    std::cout << "|_____|_____|_____|" << '\n';
    std::cout << "|    4|    5|    6|" << '\n';
    std::cout << "|  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  |" << '\n';
    std::cout << "|_____|_____|_____|" << '\n';
    std::cout << "|    7|    8|    9|" << '\n';
    std::cout << "|  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  |" << '\n';
    std::cout << "|_____|_____|_____|" << '\n';
    std::cout << '\n';
}
void palyerMove(char* spaces, char player)
{
    int number{};
    do
    {
        std::cout << "Enter a spot to place a marker (1-9) : ";
        std::cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        
    } while (!number > 0 || !number < 8);
    
}
void computerMove(char* spaces, char computer, char player)
{
    int number{};
    //check 1st line
    if ((spaces[0] != ' ' && (spaces[2] != computer && spaces[2] != player)) && spaces[0] == spaces[1])
    {
        spaces[2] = computer;
    }
    else if ((spaces[2] != ' ' && (spaces[0] != computer && spaces[0] != player)) && spaces[1] == spaces[2])
    {
        spaces[0] = computer;
    }
    else if ((spaces[0] != ' ' && (spaces[1] != computer && spaces[1] != player)) && spaces[0] == spaces[2])
    {
        spaces[1] = computer;
    }
    //check 2nd line
    else if ((spaces[4] != ' ' && (spaces[5] != computer && spaces[5] != player)) && spaces[3] == spaces[4])
    {
        spaces[5] = computer;
    }
    else if ((spaces[5] != ' ' && (spaces[3] != computer && spaces[3] != player)) && spaces[4] == spaces[5])
    {
        spaces[3] = computer;
    }
    else if ((spaces[3] != ' ' && (spaces[4] != computer && spaces[4] != player)) && spaces[3] == spaces[5])
    {
        spaces[4] = computer;
    }
    //check 3rd line
    else if ((spaces[6] != ' ' && (spaces[8] != computer && spaces[8] != player)) && spaces[6] == spaces[7])
    {
        spaces[8] = computer;
    }
    else if ((spaces[8] != ' ' && (spaces[6] != computer && spaces[6] != player)) && spaces[7] == spaces[8])
    {
        spaces[6] = computer;
    }
    else if ((spaces[6] != ' ' && (spaces[7] != computer && spaces[7] != player)) && spaces[6] == spaces[8])
    {
        spaces[7] = computer;
    }
    //check 1st column
    else if ((spaces[0] != ' ' && (spaces[6] != computer && spaces[6] != player)) && spaces[0] == spaces[3])
    {
        spaces[6] = computer;
    }
    else if ((spaces[6] != ' ' && (spaces[0] != computer && spaces[0] != player)) && spaces[3] == spaces[6])
    {
        spaces[0] = computer;
    }
    else if ((spaces[0] != ' ' && (spaces[3] != computer && spaces[3] != player)) && spaces[0] == spaces[6])
    {
        spaces[3] = computer;
    }
    //check 2nd column
    else if ((spaces[1] != ' ' && (spaces[7] != computer && spaces[7] != player)) && spaces[1] == spaces[4])
    {
        spaces[7] = computer;
    }
    else if ((spaces[7] != ' ' && (spaces[1] != computer && spaces[1] != player)) && spaces[4] == spaces[7])
    {
        spaces[1] = computer;
    }
    else if ((spaces[1] != ' ' && (spaces[4] != computer && spaces[4] != player)) && spaces[1] == spaces[7])
    {
        spaces[4] = computer;
    }
    //check 3rd column
    else if ((spaces[2] != ' ' && (spaces[8] != computer && spaces[8] != player)) && spaces[2] == spaces[5])
    {
        spaces[8] = computer;
    }
    else if ((spaces[8] != ' ' && (spaces[2] != computer && spaces[2] != player)) && spaces[5] == spaces[8])
    {
        spaces[2] = computer;
    }
    else if ((spaces[2] != ' ' && (spaces[5] != computer && spaces[5] != player)) && spaces[2] == spaces[8])
    {
        spaces[5] = computer;
    }
    //check 1st diag
    else if ((spaces[0] != ' ' && (spaces[8] != computer && spaces[8] != player)) && spaces[0] == spaces[4])
    {
        spaces[8] = computer;
    }
    else if ((spaces[8] != ' ' && (spaces[0] != computer && spaces[0] != player)) && spaces[4] == spaces[8])
    {
        spaces[0] = computer;
    }
    else if ((spaces[0] != ' ' && (spaces[4] != computer && spaces[4] != player)) && spaces[0] == spaces[8])
    {
        spaces[4] = computer;
    }
    //check 2nd diag
    else if ((spaces[2] != ' ' && (spaces[6] != computer && spaces[6] != player)) && spaces[2] == spaces[4])
    {
        spaces[6] = computer;
    }
    else if ((spaces[6] != ' ' && spaces[2] != computer && spaces[2] != player) && spaces[4] == spaces[6])
    {
        spaces[2] = computer;
    }
    else if ((spaces[2] != ' ' && spaces[4] != computer && spaces[4] != player) && spaces[2] == spaces[6])
    {
        spaces[4] = computer;
    }
    else
    {
    srand(time(0));
    number = rand() % 9;
    if(spaces[number] == ' '|| spaces[number] == computer)
    {
        spaces[number] = computer;
    }
    }
}
bool checkWin(char* spaces, char player, char computer)
{
    //check row
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    //check column
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    //check diag
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
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