// twod.cpp -- making a 2-d array
#include <iostream>
#include "arraytp.h"
int main(void){
  using std::cout;
  using std::endl;
  ArrayTP<int ,10> sums;
  ArrayTP<int ,10> aves;
  ArrayTP<ArrayTP<int,5>,10> twodd;

  int i,j;
  for(i=0; i<10; i++){
    sums[i]=0;
    for(j=0; j<5; j++){
      twodd[i][j]=(i+1)*(j+1);
      sums[i]+=twodd[i][j];
    }
    aves[i]=(double)sums[i]/10;
  }
  for(i=0; i<10; i++){
    for(j=0; j<5; j++){
      cout.width(2);
      cout<<twodd[i][j]<<" ";
    }
    cout<<": sum = ";
    cout.width(3);
    cout<<sums[i]<<", average = "<<aves[i]<<endl;
  }
  cout<<"Done.\n";
  return 0;
}
