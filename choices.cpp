// choices.cpp -- array variations
#include <iostream>
#include <vector>               // STL c++98
#include <array>                // C++11

int main(){
  using namespace std;
  // C, original c++
  double a1[4]={1.2,2.4,3.6,4.8};
  // C++98
  vector<double> a2(4);
  // no simple way to initiallize in C98
  a2[0]=1/3.0;
  a2[1]=1.2;
  a2[2]=1.2;
  a2[3]=1.2;

  // C++11
  array<double,4> a3={3.14,2.72,1.62,1.41};
  array<double,4> a4;
  a4=a3;

  cout<<"a1[2]: "<<a1[2]<<" at "<<&a1[2]<<endl;
  cout<<"a2[2]: "<<a2[2]<<" at "<<&a2[2]<<endl;
  cout<<"a3[2]: "<<a3[2]<<" at "<<&a3[2]<<endl;
  cout<<"a4[2]: "<<a4[2]<<" at "<<&a4[2]<<endl;

  a1[-2]=20.2;
  cout<<"a1[-2]: "<<a1[-2]<<" at "<<&a1[-2]<<endl;
  cout<<"a1[2]: "<<a1[2]<<" at "<<&a1[2]<<endl;
  cout<<"a1[2]: "<<a1[2]<<" at "<<&a1[2]<<endl;

  return 0;
}
