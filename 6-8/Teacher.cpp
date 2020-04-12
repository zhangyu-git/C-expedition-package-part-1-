#include "Teacher.h"

Teacher::Teacher(string _name, int _age):
  m_strName(_name), m_iAge(_age)
{
  cout << "Teacher(string _name, int _age)" << endl;
}
Teacher::Teacher(const Teacher &tea)
{
  cout << "Teacher(const Teacher &tea)" << endl;
}
void Teacher::setName(string _name)
{
  m_strName = _name;
}
string Teacher::getName()
{
  return m_strName;
}
void Teacher::setAge(int _age)
{
  m_iAge = _age;
}
int Teacher::getAge()
{
  return m_iAge;
}