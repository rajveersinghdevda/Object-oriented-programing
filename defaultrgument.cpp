#include<iostream>
using namespace std;
float oppd(float t, float r, int p=5000);//function declaration and passing default argument
int main()
{
    float p,q;
    cout<<"enter time and rate of interest"<<endl;
    cin>>p>>q;
   float d=oppd(p,q);
    cout<<d;
    return 0;

}
float oppd(float t, float r, int p)
{
    return ((p*r*t)/100);
  }