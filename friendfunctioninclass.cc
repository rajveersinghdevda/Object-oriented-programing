#include<iostream>
using namespace std;
class sub2;
class sub1{
    private :
    int a;
    public :
    void geta();
    void friend subt(sub1,sub2);

};
class sub2{
    private :
    int b;
    public :
     void getb();
     void friend subt(sub1,sub2);
};
void sub1:: geta(){
    cout<<"enter 1st number\n";
    cin >>a;
}
void sub2::getb(){
    cout<<"enter 2nd number \n";
    cin >>b;
}
void subt(sub1 aa,sub2 bb)
{
    cout<<"subtraction="<<(aa.a-bb.b);

}
int main (){
    sub1 aa;
    sub2 bb;
    aa .geta();
    bb .getb();
     subt(aa,bb);
     return 0;

}