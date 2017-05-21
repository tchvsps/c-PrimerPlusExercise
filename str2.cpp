// str2.cpp -- capacity() and reserve()
#include <iostream>
#include <string>
int main(){
  using namespace std;
  string empty;
  string small="bit";
  string larget="Elephants are a girl's best friend";
  cout<<"Sizes:\n";
  cout<<"\tempty: "<<empty.size()<<endl;
  cout<<"\tsmall: "<<small.size()<<endl;
  cout<<"\tlarger: "<<larget.size()<<endl;

  cout<<"Capacities:\n";
  cout<<"\tempty: "<<empty.capacity()<<endl;
  cout<<"\tsmall: "<<small.capacity()<<endl;
  cout<<"\tlarger: "<<larget.capacity()<<endl;

  empty.reserve(50);
  cout<<"Cpapcity after empty.reserve(50): "
      <<empty.capacity()<<endl;
  return 0;
}
