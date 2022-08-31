#include <iostream>
#include <math.h>
using namespace std;
int Maximum(int a, int b, int c, int d){

   if (a>b&&a>c&&a>d){
       return a;
   }
      else if (b>c&&b>d)
       {
           return b;
       }
       
}

int main(){
    int a,b,c,d;
    cout<<"enter:"<<endl;
    cin>>a,b,c,d;
    cout<< Maximum(a,b,c,d);
return 0;
}