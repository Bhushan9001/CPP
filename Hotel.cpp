#include <iostream>
using namespace std;
int main(){
int ch,price;
string item[20];
cout<<"1.Bhat";
  cout<<"Enter choice";
   cin>>ch;
   switch (ch)
   {
   case 1:
         price = 10;
         item[0] = "Bhat";
        
     break;
   
   default:
   cout<<"Enter Valid";
     break;
   }
return 0;
}