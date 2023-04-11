#include <iostream>
using namespace std;

void printHello(void)
{
  cout << "Hello" << endl;
}

void print(string st){
  cout << st << endl;
}

int sum (int a, int b){
  int result = a + b;
  return result;
}

int main(void){
  //printHello();

  cout << sum(5, 8);
  //print("Python is god");
  return 0;
}