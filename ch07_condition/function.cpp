#include <iostream>
using namespace std;

int main(){
  int price = 0;
  int age = 17;
  if (age < 13){
    price = 23000;
  }
  else if (age < 20){
    price = 25000;
  }
  else{
    price = 27000;
  }
  cout << price << endl;
}