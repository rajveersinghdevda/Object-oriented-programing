#include <iostream>
using namespace std;
int bigger(int, int);
float bigger(int, float);

int main()
{
    int a, b;
    float c;
    cout << "enter any two numbers" << endl;
    cin >> a >> b;
     cout << "enter another two numbers" << endl;
     cin >> a >> c;
    cout << "bigger no is" << bigger(a, b)<<endl;

    cout << "bigger no is" << bigger(a, c);
    return 0;
}
int bigger(int p, int q)
{
    if (p > q)
        return p;
    else
        return q;
}
float bigger(int s, float f)
{
   if (s > f)
        return s;
    else
        return f;
}
