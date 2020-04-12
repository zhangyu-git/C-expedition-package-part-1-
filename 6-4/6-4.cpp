#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

int main()
{
  Teacher t1("Merry", 12, 150);  
  cout << t1.getName() << " " << t1.getAge() 
    << " " << t1.getMax() << endl;
  
  return 0;
}