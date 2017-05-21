// smrtptrs.cpp -- using three kinds of smart pointers
// requires supports of C++11 shared_ptr and unique_ptr
#include <iostream>
#include <string>
#include <memory>

class Report{
private:
  std::string str;
public:
  Report(const std::string s):str(s){
    std::cout<<"Object created!\n";
  }
  ~Report(){std::cout<<"Ojbect deleted!\n";}
  void comment() const{std::cout<<str<<"\n";}
};

int main(){
  {
    std::auto_ptr<Report> ps (new Report("using auto_ptr"));
    ps->comment();
  }
  {
    std::shared_ptr<Report> ps (new Report("using shared_ptr"));
    ps->comment();
  }
  {
    std::unique_ptr<Report> ps (new Report("using unique_ptr"));
    ps->comment();
  }
  return 0;
}
