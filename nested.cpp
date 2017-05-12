// nested.cpp -- nested loops and 2-D array
#include <iostream>
const int Cities=5;
const int Years=4;

int main(){
  using namespace std;
  const char* cities[Cities]={
    "Gribble city",
    "Gribbletown",
    "New Gribble",
    "San Gribble",
    "Gribble Vista"
  };
  int maxtemps[Years][Cities]={
    {96,100,87,101,105},
    {96,98,87,101,105},
    {97,101,87,101,105},
    {98,103,87,101,105},
  };
  cout<<"Maximum temperatures for 2008 - 2011\n\n";
  for(int city=0; city<Cities; ++city){
    cout<<cities[city]<<":\t";
    for(int year=0; year<Years; ++year){
      cout<<maxtemps[year][city]<<"\t";
    }
    cout<<endl;
  }

  return 0;
}
