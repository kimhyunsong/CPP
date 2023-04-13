#include <iostream>
using namespace std;

int main(){
  // int num = 400;
  // cout << &num << endl;
  // int *pointer1 = &num;

  // cout << pointer1 << endl;


  // cout <<&pointer1 << endl;
  // cout << sizeof(pointer1) << endl;

  // cout << *pointer1 << endl;
  // *pointer1 -= 3000;
  // cout << num << endl; 

  int *pointer = nullptr;
  pointer = new int;

  cout << pointer << endl;
  cout << *pointer << endl;
  delete pointer;
  return 0;
}