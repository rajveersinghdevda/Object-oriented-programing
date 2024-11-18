#include<stdio.h>
#include<iostream>
using namespace std;
class myclass {
    private:
    int a, b;
public:
int greater (int ,int);

};
int myclass::greater(int x,int y){
    a=x;
    b=y;
    if(a<b)
    return a;
    else 
    return b;
}
int main (){
    int v,w;
    cout<<"enter any two number"<<endl;
    cin>>v>>w;
    myclass m1;
    cout<<"smaller number is "<<m1.greater(v,w);
    return 0;

}