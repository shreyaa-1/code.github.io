#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <stdlib.h>
using namespace std;

int digits(int num)
{
    int count = 1;
    while (num >= 10)
    {
        count++;
        num = num / 10;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter the range" << endl;
    cin >> n;

    if (n <= 0)
        cout << "Enter a valid number" << endl;
    int num = n;

    int rem;
    for (int i = 1; i <= n; i++)
    {
        int q = i;
        int sum = 0;
        int x = digits(i);
        while (q != 0)
        {
            rem = q % 10;
            q = q / 10;
            sum = sum + pow(rem, x);
        }
        // cout<<sum<<" "<<i<<endl;
        if (sum == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}
