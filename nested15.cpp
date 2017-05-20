// nested15.cpp -- using a queue that has a nested class
#include <iostream>
#include <string>
#include "queuetp.h"

int main(){
  using std::string;
  using std::cin;
  using std::cout;
  using std::endl;

  QueueTP<string> cs(5);
  string temp;
  while(!cs.isfull()){
    cout<<"Plese enter your name. You will be "
        <<"served in the order of arrival.\n"
        <<"name: ";
    getline(cin,temp);
    cs.enqueue(temp);
  }
  cout<<"The queue is full. Processing begins!\n";

  while(!cs.isempty()){
    cs.dequeue(temp);
    cout<<"Now processing "<<temp<<"...\n";
    //    cout<<"Now count: "<<cs.queuecount()<<endl; 
  }
  return 0;
}
