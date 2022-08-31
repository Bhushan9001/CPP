#include <iostream>
using namespace std;


class Base{
      public:
int num;
  
        void display(){
    cout<<num;
    }
  
};


class ProblemSolution : public Base{
    public:
  void solution(int n){
    num=n;
    }
    


    
};


int main() 
{
    int N;
    cin>>N ;
    
    ProblemSolution s1;
    s1.solution(N);
   s1.display() ;
    
}