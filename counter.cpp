#include "counter.h"

Counter::Counter ( ) : count (0) { } ;

Counter::Counter ( const Counter& other )
{ count = other.get_count(); }

Counter::Counter ( unsigned count ) : count (count) { }

Counter::~Counter ( ) { }

void Counter::set_count ( unsigned count ) { this->count = count; }

unsigned Counter::get_count ( void ) const { return count; }

void Counter::do_count ( ) { ++count; }

