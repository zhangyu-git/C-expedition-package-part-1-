#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

int main()
{
  Teacher t1;
  Teacher t2("Merry", 15);
  Teacher t3("James");
  
  cout << t1.getName() << " " << t1.getAge() << endl;
  cout << t2.getName() << " " << t2.getAge() << endl;
  cout << t3.getName() << " " << t3.getAge() << endl;
  
  return 0;
}