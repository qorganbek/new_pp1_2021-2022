/*

1*1=1
1*1=2 2*2=4
1*1=3 2*2=6 3*3=9 
1*1=4 2*2=8 3*3=12 4*4=16
1*1=5 2*2=10 3*3=15 4*4=20 5*5=25
1*1=6 2*2=12 3*3=18 4*4=24 5*5=30 6*6=36 
1*1=7 2*2=14 3*3=21 4*4=28 5*5=35 6*6=42 7*7=49
1*1=8 2*2=16 3*3=24 4*4=32 5*5=40 6*6=48 7*7=56 8*8=64 
1*1=9 2*2=18 3*3=27 4*4=36 5*5=45 6*6=54 7*7=63 8*8=72 9*9=81

*/
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << "*" << j << "=" << i*j << " ";
        }
        cout << endl;
    }


    return 0;
}