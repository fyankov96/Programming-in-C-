#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.insert(vec.begin(), 25);
    vec.erase(vec.begin());

    vec[3] = 35;

    // Array-style looping
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
        ;
    }

    // Looping with itterator
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }

    // modern style looping
    for (auto e : vec)
    {
        cout << e << " ";
    }

    return 0;
}