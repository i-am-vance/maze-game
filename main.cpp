#include "iostream"
#include <conio.h>
#include <unistd.h>
using namespace std;

class Maze_game
{
public:
    bool winGame = false;
    int x = 0;
    int y = 1;

    char field [8][12] ={
        {'#','#','#','#','#','#','#','#','#','#','#','#'},
        {'O',' ',' ',' ','B',' ','#','#','#',' ',' ','#'},
        {'#',' ','#',' ','#',' ',' ','#',' ',' ','#','#'},
        {'#',' ','#',' ','#','#',' ','B',' ','#','#','#'},
        {'#','B',' ',' ',' ','#',' ',' ',' ','B','#','#'},
        {'#','#',' ','#',' ','#','B',' ',' ',' ',' ','#'},
        {'#',' ',' ','B',' ',' ',' ',' ','B','#',' ',' '},
        {'#','#','#','#','#','#','#','#','#','#','#','#'}
        };

    void winCheck()
    {
        if (x == 11 && y == 6)
        {
            winGame = true;
            cout << "win!!!!!!!!";
        }
    }
    void bombCheck()
    {
        winGame = true;
        cout << "game over!";
    }
    void printField(){
        system("clear");

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                cout << field[i][j];
            }
            cout << endl;
        }
    }

    void movePlayer()
    {
        if (_kbhit())
        {
            switch (getch())
            {
                case 'a':
                    if (field[y][x] == 'O')
                    {
                        x--;
                        if (field[y][x] == ' ')
                        {
                            field[y][x] = 'O';
                            x++;
                            field[y][x] = ' ';
                            x--; 
                            winCheck();
                        }else if (field[y][x] == '#')
                        {
                            x++;
                        }else if (field[y][x] == 'B')
                        {
                            bombCheck();
                        }
                    }
                    break;
                case 'd':
                    if (field[y][x] == 'O')
                    {
                        x++;
                        if (field[y][x] == ' ')
                        {
                            field[y][x] = 'O';
                            x--;
                            field[y][x] = ' ';
                            x++;
                            winCheck();
                        }else if (field[y][x] == '#')
                        {
                            x--;
                        }else if (field[y][x] == 'B')
                        {
                            bombCheck();
                        }
                    }
                    break;
                case 'w':
                    if (field[y][x] == 'O')
                    {
                        y--;
                        if (field[y][x] == ' ')
                        {
                            field[y][x] = 'O';
                            y++;
                            field[y][x] = ' ';
                            y--;
                            winCheck();
                        }else if (field[y][x] = '#')
                        {
                            y++;
                        }else if (field[y][x] == 'B')
                        {
                            bombCheck();
                        }
                    }
                    break;
                case 's':
                    if (field[y][x] == 'O')
                    {
                        y++;
                        if (field[y][x] == ' ')
                        {
                            field[y][x] = 'O';
                            y--;
                            field[y][x] = ' ';
                            y++;
                            winCheck();
                        }else if (field[y][x] = '#')
                        {
                            y--;
                        }else if (field[y][x] == 'B')
                        {
                            bombCheck();
                        }
                    }
                    break;
            }
        }
    }
    void execute()
    {
        while(!winGame)
        {
            printField();
            movePlayer();
            sleep(1);
        }
    }
};

int main()
{   
    Maze_game maze_game;
    maze_game.execute();
    
    return 0;
}