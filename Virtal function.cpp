#include<iostream>
using namespace std;
class base{
	public:
		void display(){
			cout<<"display base";}
			virtual void show()
			{
				cout<<"show base";
			}};
			class derived:public base{
				void display()
				{
					cout<<"display derived ";
				}
			   
			void show(){
			cout<<"show derived ";
			}
};
int main(){
	base B;
	derived D;
	base*bptr;
	bptr=&B;
	bptr ->display();
	bptr ->show();
	bptr = &D;
	bptr ->display();
	bptr ->show ();
	return 0;
}
