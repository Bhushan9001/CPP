#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;

class student{
  private:
  string name;
  int roll;
  public:
  void get();
  void set();
};
void student::set(){
  cout<<"enter name"<<endl;
  cin>>name;
  cout<<"Roll no"<<endl;
  cin>>roll;
}
void student::get(){
     cout<<"your name is "<<name<<endl;
     cout<<"roll no is "<<roll<<endl;
}
int main(){
    student s;
   
    // ofstream file;
    // file.open("t.txt",ios::binary|ios::app);
    // if (file.is_open())
    // {
    //   s.set();
    //   file.write(reinterpret_cast<char*> (&s),sizeof(student));
    //   cin.ignore();
    //   cin.get();
    // }
    // file.close();

    ifstream f;
    f.open("t.txt",ios::in);
    if (f.is_open())
    {
      string s;
      while (getline(f,s))
      {
        cout<<s<<endl;

      }
      
    }
    f.close();
    

return 0;
}