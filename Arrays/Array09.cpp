// problem of sorting the coins in staircase

#include <iostream>

using namespace std;

int arrangeCoins(int n)
{
    if(n<1)return 0;
    int result = 0;
    int temp =n;
    for(int i = 1; i<=n; i++)
    {
        temp = temp-i;
        if(temp<0)return result;
        result++;
    }
    return result;
}

int main()
{
    int x = 2147483647;

    int y = arrangeCoins(x);
    cout<<y;
}
