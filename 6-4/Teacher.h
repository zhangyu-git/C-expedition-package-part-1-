#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
  Teacher(string _name = "Jim", int _age = 1, int _m = 100);
  void setName(string _name);
  string getName();
  void setAge(int _age);
  int getAge();
  int getMax();
private:
  string m_strName;
  int m_iAge;
  const int m_iMax;
};