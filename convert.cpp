// convert.cpp -- convet stone to pounds

#include<iostream>

int stone2lb(int);
int main(){
  using namespace std;
  
  int stone;
  cout<<"Enter the weight in stones: ";
  cin>>stone;
  int pounds=stone2lb(stone);
  cout<<stone<<" stone = ";
  cout<<pounds<<" pounes."<<endl;
  return 0;
}

int stone2lb(int sts){
  return 14*sts;
}
