#include <iostream>
using namespace std;
class multiplication
{
private:
    int a, b;

public:
    int mul(int, int);
};
int multiplication::mul(int x, int y)
{
    a = x;
    b = y;
    int c = a * b;

    return c;
}
int main()
{
    int j, k;
    cout << "enter any two numbers\n" << endl;
    cin >> j >> k;
    multiplication m1;
    cout <<"multiplication is\n"<< m1.mul(j, k);
    return 0;
}
