#include "iostream"
#include <conio.h>

using namespace std;

class Maze_game
{
public:
    enum eDirecton {LEFT, RIGHT, UP, DOWN};
    eDirecton dir;

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
};

int main()
{
    
    return 0;
}