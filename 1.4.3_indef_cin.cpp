#include<iostream>
using namespace std;

int main()
{
    cout << "***" << endl;
    int sum = 0, value = 0;
    while (cin >> value)
    {
        sum += value; // while ends when anything not int is inputted, 
                      // e.g. 0.5, EOF, Ctrl+D
    }
    cout << sum << endl;
    return 0;
}
