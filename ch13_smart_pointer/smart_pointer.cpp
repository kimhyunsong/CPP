#include <iostream>
#include <memory>
using namespace std;

int main(){
  // unique_ptr<int> p1 = make_unique<int>(100);

  // cout << p1.get()<< endl;

  // *p1 = 300;

  // cout << *p1 << endl; 
  // p1.reset();
  // if (p1.get() != nullptr){
  //   cout << *p1 << endl;
  // }


  shared_ptr<int> p1 = make_shared<int>(100);
  cout << p1.get() << endl;
  cout <<*p1 << endl;
  cout << p1.use_count() << endl;
  shared_ptr<int> p2 = p1;
  cout << p2.use_count() << endl;
  *p2 = -500;
  p2.reset();

  cout <<*p1 << endl;
  cout << p1.use_count() << endl;
  return 0;
}