// or.cpp -- using the logical OR operator
#include <iostream>
int main(){
  using namespace std;
  cout<<"This program may reformat your hard disk\n";
  char ch;
  cin>>ch;
  if(ch == 'y' || ch == 'Y')
    cout<<"You were warned!\a\a\n";
  else if(ch == 'n' || ch == 'N')
    cout<<"A wise choice ... bye\n";
  else
    cout<<"That wasn't a y or n! Apparentyl you "
        <<"can't follw \ninstructions, so "
        <<"I'll trash your disk anyway.\a\a\a\n";
  return 0;
}
