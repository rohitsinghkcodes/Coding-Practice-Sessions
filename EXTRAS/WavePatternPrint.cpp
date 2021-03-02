#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int ar[10][10];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> ar[i][j];
        }
    }

    cout << "PRINTINT THE WAVE" << endl;
    for (int j = 0; j < 4; j++)
    {
        if(j%2==0)
        {
            for (int i = 0; i < 4; i++) cout<<ar[i][j]<<endl;
        }
        else
        {
            for (int i = 3; i >=0; i--) cout<<ar[i][j]<<endl;
        }
    }
    return 0;
}