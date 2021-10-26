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
    string str;
    int x;

    while (true)
    {

        // cout << "To terminate, press Ctrl+D (on Linux and Mac) or Ctrl+Z then <Return> (on Windows)" << endl;
        cin >> str;

        if (cin.fail())
        {
           // cout << "Goodbye!" << endl;

            for (auto e : myBag1)
            {
                cout << e << " ";
            }
            for (auto e : myBag2)
            {
                cout << e << " ";
            }
            return 0;
        }

        if (str == "a")
        {
            cin >> x;
            myBag1.push_back(x);

            sort(myBag1.begin(), myBag1.end());
        }

        if (str == "b")
        {
            cin >> x;
            myBag2.push_back(x);

            sort(myBag2.begin(), myBag2.end());
        }
    }
}