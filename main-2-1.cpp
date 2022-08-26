//main-2-1:

# include "functions-2-1"
#include<iostream>
using namespace std;

//main function
int main(){ 
  int temp=10;
  cout<<"phase at "<<temp<<"K is: "<<get_phase(temp)<<endl;
  temp=273;
  cout<<"phase at "<<temp<<"K is: "<<get_phase(temp)<<endl;
  temp=293;
  cout<<"phase at "<<temp<<"K is: "<<get_phase(temp)<<endl;
  temp=4700;
  cout<<"phase at "<<temp<<"K is: "<<get_phase(temp)<<endl;
  temp=5000;
  cout<<"phase at "<<temp<<"K is: "<<get_phase(temp)<<endl;
}