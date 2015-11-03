
#include <iostream>
using namespace std;
 int main(){
  cout << "Fibonacci HW1" << endl;
  int j=1, k=1, sum;
  for(int i=0; i<10; i++){
  cout << j << endl;
    sum=j+k;
    j=k;
    k=sum;
  }
 return 0;
 }