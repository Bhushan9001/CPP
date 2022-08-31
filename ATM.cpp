#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
using namespace std;
int password(){
   char c = ' ';
    char ch = ' ';
    string pass = "";
    string ps = "";
    cout<<"Enter Password: \n";
    while (c != 13)
    {
        c = _getch();
        if (c == 13)
        {
            break;
        }
        if (c == 8)
        {
            if (pass.size() != 0)
            {
                cout << "\b \b";
                pass.erase(pass.size() - 1);
            }
        }
        if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
        {

            pass += c;
            cout << "*";
        }

       
    }
    cout<<"\nConfirm Password: \n";
     while (ch != 13)
    {
        ch = _getch();
        if (ch == 13)
        {
            break;
        }
        if (ch == 8)
        {
            if (pass.size() != 0)
            {
                cout << "\b \b";
                pass.erase(pass.size() - 1);
            }
        }
        if ((ch > 47 && ch < 58) || (ch > 64 && ch < 91) || (ch > 96 && ch < 123))
        {

            ps += ch;
            cout << "*";
        }

       
    }
     if (pass == ps)
        {
                return 1;
        }

        else
        {
            return 0;
        }
}
int main(){
  int balance = 1000,ch;

  do
  {
  cout<<"-----------MENU-----------"<< endl;
  cout<<"1. Check balance "<<endl;
  cout<<"2. Withdraw Money"<<endl;
  cout<<"3. Deposit Money"<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"Enter your choice: "<<endl;
  cin>>ch;
  system("cls");
  switch (ch)
  {
  case 1:
      cout<<"Your Account Balance is:"<<endl;
      cout<<balance<<" Rs"<<endl;
      break;
      case 2:
      int Wamonut;
      cout<<"Wthdraw amount: "<<endl;
      cin>>Wamonut;
      balance-=Wamonut;
      break;
      case 3:
      int Damount;
      cout<<"Deposit amount: "<<endl;
      cin>>Damount;
      balance+=Damount;
      break;
  default:
  cout<<"Enter valid option"<<endl;
      break;
  }
    
  } while (1);
  
  
return 0;
}