#ifndef COUNTER_H
#define COUNTER_H

class Counter {

public:

  Counter ( ) ;
  Counter ( const Counter& other ) ;
  Counter ( unsigned count ) ;
  ~Counter ( ) ;
  void set_count ( unsigned count ) ;
  unsigned get_count ( void ) const ;
  void do_count ( ) ;

protected:

  unsigned count ;

};

#endif
