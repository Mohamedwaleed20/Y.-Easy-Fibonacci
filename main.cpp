#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    if(n<0||n>46)
    {
        cout << "error"  ;
    }
    int x =0;
    int y =1;
    for(int i =1;i<=n;i++)
    {
        cout << x << " ";
        int z = x;
        x=y;
        y=z+y;
    }

    return 0;
}
