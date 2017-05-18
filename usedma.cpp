// usedma.cpp -- inheritance, friends, and DMA
// compile with dma.cpp
#include <iostream>
#include "dma.h"
int main(){
  using std::cout;
  using std::endl;
  baseDMA shirt("Portabelly",8);
  lacksDMA balloon("red","Blimpo",4);
  hasDMA map("Mercator","Buffalo Keys",5);

  cout<<"Displaying baseDMA object:\n";
  cout<<shirt<<endl;
  cout<<"Displaying lacksDMA object:\n";
  cout<<balloon<<endl;
  cout<<"Dispalying hasDMA object:\n";
  cout<<map<<endl;

  lacksDMA ballon2(balloon);
  cout<<"Result of lacksDMA copy:\n";
  cout<<ballon2<<endl;

  hasDMA map2;
  map2=map;
  cout<<"Reosult of hasDMA assignment:\n";
  cout<<map2<<endl;

  return 0;
}
