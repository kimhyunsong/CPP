#include <iostream>
using namespace std;

int main(){
  // int *pointer = reinterpret_cast<int*>(3000);

  // cout << pointer << endl;

  // cout << pointer + 1<< endl;

  // cout << pointer - 1<< endl;



  // double *pointer2 = reinterpret_cast<double*>(3000);

  // cout << pointer2 << endl;

  // cout << pointer2 + 1<< endl;

  // cout << pointer2 - 1<< endl;

  // int num1 = 400;
  // int num2 = 400;

  // int *pointer1 = &num1;
  // int *pointer2 = &num2;

  // cout << boolalpha;
  // cout << (pointer1 == pointer2) << endl;
  // cout << (*pointer1 == *pointer2) << endl;
  // cout << pointer1 << " " << pointer2; 

  // int age[5] = {25, 21, 45, 34};

  // cout << age << endl;

  // int *pointer = age;
  // cout << *pointer << endl;
  // cout << *(pointer + 3) << endl;

  // int num = 100;
  // int * const pointer = &num;

  // cout << *pointer << endl; 


  // *pointer = 500; 
  // cout << *pointer << endl; 

  // int num2 = 300;
  
  // pointer = &num2;
  // cout << *pointer << endl;

  int num = 100;
  cout << num << endl;
  int &numReference = num;
  numReference = 200;

  cout << num << endl;

  return 0;
}