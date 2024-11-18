#include<iostream>
using namespace std;
class DC{
    int a;
    public:
    DC(){//declaration and def. of consttructor
        a=1;

    }
void input(){
     cout<<"value of a = "<<a;
}
};


int main ()
{
    DC aa;//object created and automatically contructor called
    aa . input();
    return 0;
}
 