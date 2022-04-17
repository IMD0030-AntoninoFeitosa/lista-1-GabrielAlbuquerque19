#include "function.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    int n1 = 0, n2 = 1, fib_next = 0;
    cout  << "{" << n2;
    fib_next = n1 + n2;
    while(fib_next < n) {
        cout<< "; " << fib_next ;
        n1 = n2;
        n2 = fib_next;
        fib_next = n1 + n2;
    }
    cout  << "}" << endl;
    return std::vector<unsigned int>{};
}
int main(){
  int n;
    cin >> n;
  fib_below_n(n);
}