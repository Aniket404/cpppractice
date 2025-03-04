#include "lab5.h"
#include <iostream>
#include <cassert>
using namespace std;


int main ( ) {

  cout << "Initializing counter1 with default constructor" << endl;
  Counter counter1;
  assert ( counter1.get_count() == 0 ) ;

  cout << "Setting counter1 value to 42" << endl;
  counter1.set_count ( 42 ) ;
  assert ( counter1.get_count() == 42 ) ;

  cout << "Incrementing counter1 value" << endl;
  counter1.do_count ( ) ;
  assert ( counter1.get_count() == 43 ) ;

  cout << "Initializing counter2 with copy constructor" << endl;
  Counter counter2(counter1);
  assert ( counter2.get_count() == 43 ) ;

  cout << "Initializing counter3 with value 86" << endl;
  Counter counter3(86);
  assert ( counter3.get_count() == 86 ) ;

//cout << "Assigning counter3 to counter1" << endl;
//counter1 = counter3;
//assert ( counter1.get_count() == 86 ) ;

//cout << "Assigning value 911 to counter2" << endl;
//counter2 = 911;
//assert ( counter2.get_count() == 911 ) ;

  cout << "TEST PASSED" << endl;

  return 0;
}
