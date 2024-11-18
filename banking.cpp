 #include <iostream>
using namespace std;
class bank
{
    float balance=1000;
    char name[10];
    int accno;

public:
    void getdata();
    void display();
    void withdrawal();
    void deposit();
    int search(int s);
};
void bank::getdata()
{
    cout << "\nenter name" << endl;
    cin >> name;
    cout << "enter acc no " << endl;
//     int q=1001;
//  while(q<=1005){
//     q=accno;
//  }
//  q++;
    cin >> accno;
    cout << "enter initial balance" << endl;
    cin >> balance;
}
void bank::display()
{
    cout << name << endl
         << accno << endl
         << balance<<endl;
}
void bank::withdrawal()
{
    int x;
    cout << "enter amount to withdrawal" << endl;
    cin >> x;
    balance = balance - x;
}
void bank::deposit()
{
    int x;
    cout << "enter amount to deposit" << endl;
    cin >> x;
    balance = balance + x;
}
int bank::search(int s)
{
    if (s == accno)
        return 1;
    else
        return 0;
}
int main()
{
    bank b[10];
    int i, p, q, c, n, t;
    char ch;
    int x;
    cout<<"enter no of customer\n";
    cin>>x;
    // cout << "enter record of five customer";
    // cout << "enter name account no and balance";
    for (i = 0; i <= x; i++)
    {
        b[x].getdata();
    }
    do
    {
        cout << "1 for withdrawal\n";
        cout << "2 for deposit \n";
        cout << "3 for balance check\n";
        cout << "4 for exit\n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "enter acc no\n";
            cin >> n;
            for (i = 0; i <= 4; i++)
            {
                t = b[i].search(n);
                if (t == 1)
                {
                    b[i].withdrawal();
                }
                break;
            }
            if (i == 5)
            {
                cout << "acc no is not found";
            }
            break;
        case 2:
            cout << "enter acc no\n";
            cin >> n;
            for (i = 0; i <= 4; i++)
            {
                t = b[i].search(n);
                if (t == 1)
                {
                    b[i].deposit();
                }
                break;
            }
            if (i == 5)
            {
                cout << "acc no is not present\n";
            }
            break;
        case 3:
            cout << "enter acc no\n";
            cin >> n;
            for (i = 0; i <= 4; i++)
            {
                b[i].display();
            }
            break;
        case 4:
            exit(0);
        default:
            cout << "wrong choice\n";
        }
        cout << "do you want to continue\n";
        cin >> ch;

    } while (ch == 'y');

    return 0;
}