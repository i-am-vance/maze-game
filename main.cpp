#include "iostream"
#include <conio.h>

using namespace std;

class Maze_game
{
public:
    enum eDirecton {LEFT, RIGHT, UP, DOWN};
    eDirecton dir;

    void printField(){
        system("clear");

        char field [8][12] ={
            {'#','#','#','#','#','#','#','#','#','#','#','#'},
            {'O',' ',' ',' ','#',' ','#','#','#',' ',' ','#'},
            {'#',' ','#',' ','#',' ',' ','#',' ',' ','#','#'},
            {'#',' ','#',' ','#','#',' ','#',' ','#','#','#'},
            {'#','#',' ',' ',' ','#',' ',' ',' ','#','#','#'},
            {'#','#',' ','#',' ','#','#',' ',' ',' ',' ','#'},
            {'#',' ',' ','#',' ',' ',' ',' ','#','#',' ',' '},
            {'#','#','#','#','#','#','#','#','#','#','#','#'}
        };

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                cout << field[i][j];
            }
            cout << endl;
        }
    }
    void Input()
    {
        if  (_kbhit())
        {
            switch (getch())
            {
                case 'a':
                    dir = LEFT;
                    break;
                case 'd':
                    dir = RIGHT;
                    break;
                case 'w':
                    dir = UP;
                    break;
                case 's':
                    dir = DOWN;
                    break;
            }
        }
    }
};

int main()
{
    
    return 0;
}