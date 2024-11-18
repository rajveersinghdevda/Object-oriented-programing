#include <iostream>
using namespace std;
class demo
{
    int a, b;

public:
    void putdata(int a, int b);
    void getdata()
    {
        cout << "a=" << a << "\t" << "b=" << b << endl;
    }
};
void demo::putdata(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    int q, p;
    demo aa[3];
    for (int i = 0; i <= 2; i++)
    {
        cout << "enter two no\n";
        cin >> p >> q;

        aa[i].putdata(p, q);
    }
    for (int i = 0; i <= 2; i++)
        aa[i].getdata();
    return 0;
}