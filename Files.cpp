#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;
void name(){
      string n;
      int age;
      
}
int main(){

   ofstream file;
   file.open("B.txt",ios::out);
   int a= 10,b=20;
   if (file.is_open())
   {
      file<<a+b<<endl;
      file<<"\t\t100\n";
      file.close();
   }
    ifstream f;
    f.open("b.txt",ios::in);
    if (f.is_open())
    {
       string s,s1;
        
    
    
    while (getline(f,s))
    {
       s1=s;
       if (s1 =="30")
       {
          cout<<s<<endl;  
          continue; 
       }
        cout<<s<<endl;  
       
    }
    }
return 0;
}