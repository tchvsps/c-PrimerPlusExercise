// precise.cpp -- setting the precision
#include <iostream>
int main(){
  using std::cout;
  using std::ios_base;

  float prece1=20.40;
  float prece2=1.9+8.0/9.0;

  cout.setf(ios_base::showpoint);
  cout<<"\"Furry Friends\" is $"<<prece1<<"!\n";
  cout<<"\"Fiery Fiends\" is $"<<prece2<<"!\n";

  cout.precision(2);
  cout<<"\"Furry Friends\" is $"<<prece1<<"!\n";
  cout<<"\"Fiery Fiends\" is $"<<prece2<<"!\n";

  return 0;
}
