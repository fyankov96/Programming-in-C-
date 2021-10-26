#include <iostream>
#include <fstream>
#include <iomanip>
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
    int size;
    int result1 = 0;
    int result2 = 0;

    while (true)
    {

        // cout << "To terminate, press Ctrl+D (on Linux and Mac) or Ctrl+Z then <Return> (on Windows)" << endl;
        cin >> str;

        if (cin.fail())
        {
            // cout << "Goodbye!" << endl;

            size = myBag1.size();

            for (int i = 0; i < size; i++)
            {
        
                result1 = myBag1[i] * myBag2[i];
                result2 = result1 + result2;
        
            }

            cout << result2;

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