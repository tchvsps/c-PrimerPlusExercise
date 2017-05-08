// forstr2.cpp -- reversing an array
#include <iostream>
#include <string>

int main(){
  using namespace std;
  cout<<"Enter a word: ";
  string word;
  cin>>word;

  char temp;
  int i,j;
  for(i=0,j=word.size()-1; i<j; ++i,--j){
    temp=word[i];
    word[i]=word[j];
    word[j]=temp;
  }
  cout<<word<<"\nDone\n";
  return 0;
}
