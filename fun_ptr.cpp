// fun_ptr.cpp -- pointers to functions
#include <iostream>
double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));
int main(){
  using namespace std;
  int code;
  cout<<"How many lines of code do you need? ";
  cin>>code;
  cout<<"Here's Betsy's estimate:\n";
  estimate(code,betsy);
  cout<<"Heres's Pam's estimate:\n";
  estimate(code,pam);
  return 0;
}
double betsy(int line){
  return 0.05*line;
}
double pam(int line){
  return 0.03*line+0.0004*line*line;
}
void estimate(int lines, double(*pf)(int)){
  using namespace std;
  cout<<lines<<" lines will take ";
  cout<<(*pf)(lines)<<" hour(s)\n";
}
