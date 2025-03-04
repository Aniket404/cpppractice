#include "lab4ref.h"
#include<iostream>

Counter::Counter ( ) : count (0) { std::cout << "Default constructor called. Count = " << count << std::endl;} ;


Counter::Counter ( const Counter& other )
//cout << count;
{ count = other.get_count(); }

Counter::Counter ( unsigned count ) : count (count) { }

Counter::~Counter ( ) { }

void Counter::set_count ( unsigned count ) { this->count = count; }

unsigned Counter::get_count ( void ) const { return count; }

void Counter::do_count ( ) { ++count; }

