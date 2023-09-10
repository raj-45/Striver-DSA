#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int long num;
    int even_sum = 0, odd_sum = 0, temp = 0;
    cin >> num;
    while (num > 0)
    {
        temp = num % 10;
        if (temp % 2 == 0)
            even_sum += temp;
        else
            odd_sum += temp;
        num = num / 10;
    }
    cout << even_sum << " " << odd_sum;
}