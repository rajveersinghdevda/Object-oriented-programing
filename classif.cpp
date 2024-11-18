#include<iostream>
using namespace std;
class oddeven{
	private:
		int a;
		public:
			void initialise(int a);
			void  bit();
			
};
int main ()
{
	int s;
	cout<<"enter any number\n";
	cin>>s;
	oddeven aa;
	aa.initialise(s);
	return 0;
}
void oddeven :: initialise(int x){
	a=x;
	bit();}
void oddeven::bit (){
	if(a%2==0){
		cout<<"no is even";
        }
		else
		{
			cout<<"no is odd";
		}
	}
