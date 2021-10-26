#include <iostream>
#include <string>
#include <stdlib.h> /* Library containing functions such as
                           rand (a generator of random numbers) */
using namespace std;

typedef enum
{
    wood,
    stone,
    player
} material;

struct tile
{
    int x, y;
    bool isWall;
    material type;
    int posX = 5;
    int posY = 5;
};

#define NROWS 12
#define NCOLS 16

char symbol(material m)
{
    // Switch is a sort of if-then-else, useful when there many cases.
    // Remember to always break each branch!
    switch (m)
    {
    case player:
        return 'O';
    case wood:
        return ' ';
    case stone:
        return '*';
    default:
        return '?';
    }
}

int main()
{
    tile playground[NROWS][NCOLS];

    char action;

    while (action != 'q')
    {

        for (int i = 0; i < NROWS; i++)
        {
            for (int j = 0; j < NCOLS; j++)
            {

                playground[i][j].x = j;
                playground[i][j].y = i;
                playground[i][j].isWall = (j == 0 || i == (NROWS - 1) || (i == 0 && j != 3) || j == (NCOLS - 1));

                switch (action)
                {
                case 'l':
                    if (playground[i][j].posX > 1)
                    {
                        playground[i][j].posX--;
                       // cout << "Position X: " << playground[i][j].posX << " : "
                       //      << "Position Y: " << playground[i][j].posY << endl;
                    }
                    break;
                case 'r':
                    if (playground[i][j].posX < 14)
                    {
                        playground[i][j].posX++;
                      //  cout << "Position X: " << playground[i][j].posX << " : "
                      //       << "Position Y: " << playground[i][j].posY << endl;
                    }
                    break;
                case 'u':
                    if (playground[i][j].posY > 1)
                    {
                        playground[i][j].posY--;
                       // cout << "Position X: " << playground[i][j].posX << " : "
                       //      << "Position Y: " << playground[i][j].posY << endl;
                    }
                    else if (playground[i][j].posY == 1 && playground[i][j].posX == 3)
                    {
                        playground[i][j].posY--;
                    }
                    break;
                case 'd':
                    if (playground[i][j].posY < 10)
                    {
                        playground[i][j].posY++;
                      //  cout << "Position X: " << playground[i][j].posX << " : "
                       //      << "Position Y: " << playground[i][j].posY << endl;
                    }
                    break;
                }

                if (playground[i][j].isWall)
                {
                    playground[i][j].type = stone;
                }
                else if (playground[i][j].x == playground[i][j].posX && playground[i][j].y == playground[i][j].posY && !playground[i][j].isWall)
                {
                    playground[i][j].type = player;
                }
                else
                {
                    playground[i][j].type = wood;
                }
            }
        }

        // Printing the playground
        for (int i = 0; i < NROWS; i++)
        {
            for (int j = 0; j < NCOLS; j++)
            {
                cout << symbol(playground[i][j].type);
            }
            cout << endl;
        }

        cin >> action;
    }
    return 0;
}
