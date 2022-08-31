#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
using namespace std;
class Bank{
    private:
    string Name,actype;
  int deposit,withdraw,balance=0,wit=0,dep=0,accountno1,accountno,period;
    string mobileno;
  float interest,principal,rate;
    public:
    void creat();
    void check();
    void Depo();
    void Withd();
    void display();
    void loan();

};
 void Bank::creat(){
     cout<<"\tEnter your Name: ";
     cin>>Name;
     cout<<"\tEnter Your Mobile no:";
     cin>>mobileno;
     cout<<"\tWhat type of account you want: ";
     cin>>actype;
     cout<<"\tyour Account number is :";
     accountno = rand()%20;
     cout<<accountno;
     cout<<"\tAdd some money in your Account: ";
     cin>>balance;

}
void Bank::check(){
    cout<<"\tEnter your Account number:";
    cin>>accountno1;
    if (accountno1==accountno)
    {
         cout<<"\tYour current Account balance is:"<<endl;
     cout<<balance<<endl;
    }
    else{
        cout<<"\tEnter proper Account no:"<<endl;
    }
}
void Bank::Depo(){
    cout<<"\tEnter your Account number:";
    cin>>accountno1;
    if (accountno1==accountno){ 
     cout<<"\tEnter amount to deposit: ";
     cin>>deposit;
     balance+=deposit;
     dep+= deposit;
    }
    else{
          cout<<"\tEnter proper Account no:"<<endl;
    }
}

void Bank::Withd(){
     cout<<"\tEnter your Account number:";
    cin>>accountno1;
    if (accountno1==accountno){
        cout<<"\tEnter amount to Withdraw: ";
        cin>>withdraw;
        balance-=withdraw;
        wit+=withdraw;

    }
     else{
          cout<<"\tEnter proper Account no:"<<endl;
    }
     
}
void Bank::display(){
    cout<<"\tAccount holders Name: "<<Name;
    cout<<"\tAccount Number: "<<accountno;
    cout<<"\tAccount holders Mobile no. "<<mobileno;
    cout<<"\tTotal Withdrawl Amount: "<<wit;
    cout<<"\tTotal Deposit Amount: "<<dep;
    cout<<"\tYou have taken loan of "<<principal<<" for "<<period<<" years. So you have to pay "<<principal+interest;
}

void Bank::loan(){
	cout<<"\tEnter your Account number:";
    cin>>accountno1;
    if (accountno1==accountno){
        cout<<"\tNote:You can take take only upto 120000\n";
        cout<<"\tEnter loan amount: ";
        cin>>principal;
        cout<<"\tEnter your loan period in years: ";
        cin>>period;
        if(principal<=120000){
        switch(period)
        {
        	case 1:
        		rate=1.5;
        		break;
        	case 2:
        		rate=2;
        		break;
        	case 3:
        		rate=2.5;
        		break;
        	case 4:
        		rate=3;
        		break;
        	case 5:
        		rate=3.5;
        		break;
        	case 6:
        		rate=4;
        		break;
        	default :
        		cout<<"\tYou can take loan only for 6 years";
		}
	}
		else{
			cout<<"\tYou can take loan only upto 120000";
		}
		interest=(principal*period*rate)/100;
		cout<<"\tYour interest is "<<interest<<endl;
        cout<<"\tyou have to pay "<<principal+interest<<"Rs after "<<period<<" years";

    }
     else{
          cout<<"\tEnter proper Account no:"<<endl;
    }
}

void creat_acc();
void display_all();

int main(){
        int ch;
        char ch1;
        Bank b;
        label1:
        cout<<"\t\t-----------------------BANK MANAGEMENT SYSTEM-----------------------"<<endl;
        cout<<"\t1.Creat an Account"<<endl;
        cout<<"\t2.Withdraw Amount"<<endl;
        cout<<"\t3.Deposit Amout"<<endl;
        cout<<"\t4.Check Account Balance"<<endl;
        cout<<"\t5.Take loan"<<endl;
        cout<<"\t6.Check Account Holder's information"<<endl;
        cout<<"\t7.Exit"<<endl;
        cout<<"\t-------------------------------------------------------------------------"<<endl;
        cout<<"\tEnter your Choice: ";cin>>ch;
        switch (ch)
        {
        case 1:
           creat_acc();
            break;
        case 2:
            b.Withd();
            break;
        case 3:
            b.Depo();
            break;
        case 4:
            b.check();
            break;
        case 5:
            b.loan();
            break;
        case 6:
        	display_all();
            break;
        case 7:
            exit(1);
            break;
        default:
            break;
        }
        cout<<"\n\tDo you Want to see menu again??(Y/N)";
        cin>>ch1;
        if (ch1=='n'||ch1=='N')
        {
            exit(1);
        }
        if (ch1=='y'||ch1=='Y')
        {
        goto label1;
            }
        
return 0;
}

void creat_acc(){
    Bank b;
    ofstream file;
    file.open("Bhushan.txt",ios::binary|ios::app);
    b.creat();
    file.write(reinterpret_cast<char*>(&b),sizeof(Bank));
    file.close();
    cout<<"data added!!"<<endl;
    cin.ignore();
    cin.get();

}

void display_all(){
     Bank b;
     ifstream file;
     file.open("Bhushan.txt",ios::binary);
     cout<<"Displaying"<<endl;
      while (file.read(reinterpret_cast<char*>(&b),sizeof(Bank)))
      {
          b.display();
          cout<<"\t____________________________________________________"<<endl;
      }
      file.close();
      cin.ignore();
      cin.get();
     
     }