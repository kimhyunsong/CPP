#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Employee
{
private:
  static int totalEmployee;
  string name;
  string dept;
  double wage;
public:
  void setName(string name)
  {
    this -> name = name;
  }
  string getName()
  {
    return name;
  }
  Employee(string name, string dept, double wage)
  {
    totalEmployee++;
    this-> name = name;
    this-> dept = dept;
    this-> wage = wage;
  }

  Employee()
  {
    totalEmployee++;
    name= "";
    dept = "";
    wage = 0.0;
  }
  ~Employee()
  {
    totalEmployee--;
    cout << name << " 퇴장합니다."<<endl;
  }
  void getTotal(){
    cout << "현재 남아있는 객체 : " << totalEmployee << endl;
  }
};
int Employee::totalEmployee = 0;
int main()
{
  Employee jungjae("이정재", "안드로이드", 300);
  jungjae.getTotal();
  Employee *sooji = new Employee("수지","ios", 700);
  jungjae.getTotal();
  Employee dongeun;
  jungjae.getTotal();
  // vector<Employee> vec;

  // jungjae.setName("이정재");
  // sooji->setName("수지");

  // vec.push_back(jungjae);
  // vec.push_back(*sooji);



  // for(auto emp:vec)
  // {
  //   cout << emp.getName() << endl;
  // }
  delete sooji;
  jungjae.getTotal();

  return 0;
}