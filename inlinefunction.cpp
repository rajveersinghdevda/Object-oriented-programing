#include <iostream>
using namespace std;
inline float areaofcircle(int r)
{ // inline function used to execute code very fast and for saving memory and function def and declaration is given at same place
    float pi = 3.14;
    return 2 * pi * r;
}
inline float circumfrenceofcircle(int r)
{
    float pi = 3.14;
    return pi * r * r;
}
int main()
{
    int p;
    cout << "enter radius\n";
    cin >> p;
    cout << "area of circle is " << areaofcircle(p) << endl;
    cout << "circumfrence of circle is " << circumfrenceofcircle(p);
    return 0;
}