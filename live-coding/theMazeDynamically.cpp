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
    int posX;
    int posY;
};

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

    int n, m;

    cin >> n;
    cin >> m;

    // 'playground' is a pointer to a dynamically-allocated array of pointers
    // to 'tile' structures (one per row)
    tile **playground = new tile *[n];
    for (int i = 0; i < n; i++)
    {
        // Each pointer in the 'playground' array points to a
        // dynamically-allocated array of tiles
        playground[i] = new tile[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            playground[i][j].posX = m / 2;
            playground[i][j].posY = n / 2;
        }
    }

    char action;

    while (action != 'q')
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                playground[i][j].x = j;
                playground[i][j].y = i;
                playground[i][j].isWall = (j == 0 || i == (n - 1) || (i == 0 && j != 3) || j == (m - 1));

                switch (action)
                {
                case 'l':
                    if (playground[i][j].posX > 1)
                    {
                        playground[i][j].posX--;
                     //   cout << "Position X: " << playground[i][j].posX << " : "
                     //        << "Position Y: " << playground[i][j].posY << endl;
                    }
                    break;
                case 'r':
                    if (playground[i][j].posX < n - 2)
                    {
                        playground[i][j].posX++;
                      //  cout << "Position X: " << playground[i][j].posX << " : "
                        //     << "Position Y: " << playground[i][j].posY << endl;
                    }
                    break;
                case 'u':
                    if (playground[i][j].posY > 1)
                    {
                        playground[i][j].posY--;
                      //  cout << "Position X: " << playground[i][j].posX << " : "
                      //       << "Position Y: " << playground[i][j].posY << endl;
                    }
                    else if (playground[i][j].posY == 1 && playground[i][j].posX == 3)
                    {
                        playground[i][j].posY--;
                    }
                    break;
                case 'd':
                    if (playground[i][j].posY < m - 2)
                    {
                        playground[i][j].posY++;
                     //   cout << "Position X: " << playground[i][j].posX << " : "
                     //        << "Position Y: " << playground[i][j].posY << endl;
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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << symbol(playground[i][j].type);
            }
            cout << endl;
        }

        cin >> action;
    }

    // Remember: everything that was created with 'new' must be 'delete'd!
    for (int i = 0; i < n; i++)
    {
        delete[] playground[i];
    }
    delete[] playground;
    return 0;
}
