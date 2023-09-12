#include <bits/stdc++.h>
using namespace std;

int Fibonnaci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else if (n < 1)
        return 0;
    else
    {
        return Fibonnaci(n - 1) + Fibonnaci(n - 2);
    }
}

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int num;
    cin >> num;
    cout << Fibonnaci(num);
    return 0;
}