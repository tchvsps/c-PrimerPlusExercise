// stack.cpp -- Stack member functions
#include "stack.h"
Stack::Stack(){
  top=0;
}
bool Stack::isempty(){
  return top==0;
}
bool Stack::isfull(){
  return top==MAX;
}
bool Stack::push(const Item& item){
  if(top<MAX){
    items[top++]=item;
    return true;
  }
  return false;
}
bool Stack::pop(Item& item){
  if(top>0){
    item=items[--top];
    return true;
  }
  return false;
}
