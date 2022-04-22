#include "function.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> values;
    int n1 = 0, n2 = 1, fib_next = 0;
  if(n > 1){
    values.push_back(n2);
    fib_next = n1 + n2;
    while(fib_next < n) {
        values.push_back(fib_next);
        n1 = n2;
        n2 = fib_next;
        fib_next = n1 + n2;
    }
    return values;
  }
}