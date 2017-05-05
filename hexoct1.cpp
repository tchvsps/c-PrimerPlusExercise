// hexoct1.cpp -- shows hex and ctal literals

#include<iostream>
int main(){
  using namespace std;
  int chest=42;
  int waist=0x42;
  int inseam=042;

  cout<<"chest= "<<chest<<" (42 in decimal)"<<endl;
  cout<<"waist= "<<waist<<" (0x42 in hex)"<<endl;
  cout<<"inseam= "<<inseam<<" (042 in octal)"<<endl;

  return 0;
}
