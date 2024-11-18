#include <iostream>
using namespace std;
class demo
{
	int a, b;

public:
	void getdata()
	{
		cout << "enter first no for addition\n ";
		cin >> a;
		cout << "enter second no for addition\n ";
		cin >> b;
	}
	void friend add(demo);
};
void add(demo aa)
{
	cout << "addition=" << (aa.a + aa.b);
}
int main()
{
	demo aa;
	aa.getdata();
	add(aa);
	return 0;
}