#include "iostream"
using namespace std;

class Maze_game
{
public:

    void printField(){
        system("clear");

        char field [8][12] ={
            {'#','#','#','#','#','#','#','#','#','#','#','#'},
            {' ',' ',' ',' ','#',' ','#','#','#',' ',' ','#'},
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
};

int main()
{
    
    return 0;
}