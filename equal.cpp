// equal.cpp -- equality vs assigment
#include <iostream>
int main(){
  using namespace std;
  int quizscres[10]={20,20,20,20,20, 20,20,20,20,20 };
  cout<<"Doing it right:\n";
  int i;
  for(i=0; quizscres[i]==20; i++){
    cout<<"quiz "<<i<<" is a 20\n";
  }
  cout<<"Doing it dangerously wrong:\n";
  for(i=0; quizscres[i]=20; i++){
    cout<<"quiz "<<i<<" is a 20\n";
  }
  return 0;
}
