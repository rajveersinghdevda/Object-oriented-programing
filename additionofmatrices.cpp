#include <iostream>
using namespace std;
int main()
{
    int ap[10][10], bo[10][10],   res[10][10];
int i,j,s,d;
     
    cout << "elements of first matrices :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> ap[i][j];
        }
    }
    cout << "elements of second matrices :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> bo[i][j];
        }
    }
    cout << "elements of   matrices are  :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j= 0; j < 3; j++)
        {
             res[i][j] = ap [i] [j] + bo [i] [j];
             cout<<res[i
             ][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}