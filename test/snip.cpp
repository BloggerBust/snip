#define BOOST_TEST_MODULE Snip Library Tests
#include <boost/test/included/unit_test.hpp>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#include <turtle/mock.hpp>
#pragma GCC diagnostic pop

// The following is an example of how to use the Turtle mock
// library. It is here only to verify that the things are working
// correctly with bazel, boost and turtle. I will remove this example
// code once I have a real test written.

class view
{
public:
  virtual void display( int result ) = 0;
};

class calculator
{
private:
  view &v;

public:
  calculator( view& v ): v(v) { }
  ~calculator() { }

  void add( int a, int b ); // the result will be sent to the view 'v'
};

void calculator::add(int a, int b){
  int result = a + b;
  v.display(result);
}

MOCK_BASE_CLASS( mock_view, view ) // declare a 'mock_view' class implementing 'view'
{
  MOCK_METHOD( display, 1 );      // implement the 'display' method from 'view' (taking 1 argument)
};

BOOST_AUTO_TEST_CASE( zero_plus_zero_is_zero )
{
  mock_view v;                               // create mock objects
  calculator c( v );                         // create object under test
  MOCK_EXPECT( v.display ).once().with( 0 ); // configure mock objects
  c.add( 0, 1 );                             // exercise object under test
}
