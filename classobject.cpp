// #include<iostream>
// using namespace std;
// class add{
//     int a,b;
//     public:
//     void getdata(int a, int b);
//     void putdata ();

// };
// int main (){
//     int p,q;
//     printf("enter any two number\n");
//     cin>>p>>q;
//     add aa;
//     aa.getdata(p ,q);
    
//     return 0;
// }
// void add:: putdata()
// {
//     cout<<"add="<<a+b;

// }
// void add::getdata(int x ,int y){
//     a=x;
//     b=y;
//     putdata();
// }
  #include<iostream>
 using namespace std;
 class substraction{
    int a,b;
    public:
    void input(int a, int b);
    void output();

 };
int main(){
    int w ,v ;
    cout<<"enter two number to subtract"<<endl;
    cin >>w>>v;
substraction aa;
aa.input(w,v);
 
return 0;
}
void substraction :: input(int x, int y){
     a=x;
     b=y;
output();
 
}
void substraction :: output(){
    cout<<"substraction ="<<a-b;
}