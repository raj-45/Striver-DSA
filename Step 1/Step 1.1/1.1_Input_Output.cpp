#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    char input;
    cin >> input;
    if (input >= 65 && 90 >= input)
    {
        cout << "1";
    }
    else if (input >= 97 && 122 >= input)
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
}