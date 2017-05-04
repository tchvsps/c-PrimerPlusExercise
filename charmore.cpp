// charmore.cpp -- the char type and int type contrasted

#include<iostream>
int main(){
  using namespace std;
  char ch='M';
  int i=ch;

  cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

  cout<<"Add one to the character code:"<<endl;
  ch++;
  i++;
  cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;

  cout<<"using the cout.put() member function to display a char"<<endl;

  cout.put(ch);
  cout.put('!');

  cout<<endl<<"Done!"<<endl;

  return 0;
}
