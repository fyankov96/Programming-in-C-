#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

typedef vector<unsigned int> bag;

int main()
{
    bag myBag1;
    bag myBag2;
    vector<pair<int, int>> myBag3;
    string str;
    int x;

    while (true)
    {

        // cout << "To terminate, press Ctrl+D (on Linux and Mac) or Ctrl+Z then <Return> (on Windows)" << endl;
        cin >> str;

        if (cin.fail())
        {
            // cout << "Goodbye!" << endl;

            int n = sizeof(myBag1) / sizeof(myBag1[0]);

            for (int i = 0; i < n; i++)

                myBag3.push_back(make_pair(myBag1[i], myBag2[i]));

            // Printing the vector
            for (int i = 0; i < n; i++)
            {
                
                if (myBag3[i].first != 0)
                {
                    cout << myBag3[i].first << " ";
                }

                if (myBag3[i].second != 0)
                {
                    cout << myBag3[i].second << " ";
                }
            }

            return 0;
        }

        if (str == "a")
        {
            cin >> x;
            myBag1.push_back(x);
        }

        if (str == "b")
        {
            cin >> x;
            myBag2.push_back(x);
        }
    }
}