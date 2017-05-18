// stkoptr1.cpp -- testing stack of pointers
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stcktp1.h"
const int Num=4;
int main(){
  std::srand(std::time(0));
  std::cout<<"Please enter stack size: ";
  int stacksize;
  std::cin>>stacksize;

  Stack<const char *> st(stacksize);

  const char * in[Num]={
    "1: Hank Gilgamesh",
    "2: Kiki Ishtar",
    "3: Betty Rocker",
    "4: Iran Flagranti"
  };
  const char * out[Num];
  int processed=0;
  int nextin=0;
  while(processed<Num){
    if(st.isempty())
      st.push(in[nextin++]);
    else if(st.isfull())
      st.pop(out[processed++]);
    else if(std::rand()%2 && nextin <Num)
      st.push(in[nextin++]);
    else
      st.pop(out[processed++]);
  }
  for(int i=0; i<Num; i++)
    std::cout<<out[i]<<std::endl;
  std::cout<<"Bye.\n";
  return 0;
}
