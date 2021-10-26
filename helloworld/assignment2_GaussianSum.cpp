// We first import some useful libraries
#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    unsigned int n;

    cin >> n;

    for(int i = 0; i <= n; i++) {
        sum+=i;
    }
    cout << sum;
    return 0;
}