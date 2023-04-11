#include <iostream>
using namespace std;
class Student{
  private:
    int *studentID;
    string *name;
    int* year;
    double *gpa;
    bool *isSummaCumlaude;
  public:
    Student(int newId, string newName, int newYear, double newGPA)
    {
      studentID = new int(newId);
      name = new string(newName);
      year = new int(newYear);
      gpa = new double(newGPA);
      isSummaCumlaude = new bool;
      if(*gpa >= 3.8){
        *isSummaCumlaude= true;
      } else{
        *isSummaCumlaude = false;
      }
    }
    ~Student(){
      delete studentID;
      delete name;
      delete year;
      delete gpa;
      delete isSummaCumlaude;
      cout << "안녕히 계세요 여러분!"<< endl;
    }

    void introduce(){
      cout << "안녕하세요 저는 "<< *year << "학년 " << *name << "입니다"<< endl;
      if (*isSummaCumlaude){
        cout << "저는 공부 좀 했습니다." << endl;
      } else {
        cout << "인생은 성적순이 아닙니다." << endl;
      }
    }
};
int main()
{
    int id;
    string name;
    int year;
    double gpa;
    cin >> id >> name >> year >> gpa;


    Student student(id, name, year, gpa);
    student.introduce();
    
    return 0;
}