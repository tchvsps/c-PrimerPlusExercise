// numstr.cpp -- following number input with line input
#include <iostream>
int main(){
  using namespace std;

  const int ArSize=20;
  char name[ArSize];
  long money;
  cout<<"Enter your name:\n";
  cin>>name;
  cout<<"Enter your money:\n";
  cin>>money;
  cout<<"You "<<name<<" have "<<money<<" dollars.\n";

  return 0;
}
