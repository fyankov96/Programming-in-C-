// We first import some useful libraries
#include <set>
#include <iostream>
#include <math.h>

using namespace std;

void printSet(multiset<int> myset)
{
 
    // Get the iterator
    multiset<int>::iterator it;
 
    // printing all the elements of the set
    for (it = myset.begin(); it != myset.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}

int main()
{

    multiset<int> c = {};

    string rule;

    string out;

    while(true)
    {

        cin >> rule;

        int addNumber = 0;

        int delNumber = 0;

        int checkNumber = 0;

        if (rule == "add")
        {

            cin >> addNumber;

            c.insert(addNumber);
        }
        else if (rule == "del")
        {

            cin >> delNumber;

            auto itr = c.find(delNumber);

            if (itr != c.end())
            {
                c.erase(itr);
            }
        }
        else if (rule == "qry")
        {

            cin >> checkNumber;

            set<int>::iterator it = c.find(checkNumber);

            if (it != c.end())
            {

                out.append("T");
            }

            else
            {

                out.append("F");
            }
        }
        else if (rule == "quit")
        {
            cout << out;
            return 0;
        }

        // printSet(c);
    }
}