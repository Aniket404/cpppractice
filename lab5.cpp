#include "lab5.h"

Counter::Counter ( ) : count (0), value (count) { } ;

Counter::Counter ( const Counter& other ) : value (count)
{ count = other.get_count(); }

Counter::Counter ( unsigned count ) : count (count), value (count) { }

Counter::~Counter ( ) { }

void Counter::set_count ( unsigned count ) { this->count = count; }

unsigned Counter::get_count ( void ) const { return count; }

void Counter::do_count ( ) { ++value; } 