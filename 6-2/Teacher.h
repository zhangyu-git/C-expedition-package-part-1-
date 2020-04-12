#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
  Teacher();
  Teacher(string _name, int _age = 20);
  void setName(string _name);
  string getName();
  void setAge(int _age);
  int getAge();
private:
  string m_strName;
  int m_iAge;
};