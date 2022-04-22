#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
  
  int min = -1, max = -1, i;
  for(i=0;i<n;i++){
    if(V[i]>=V[max] || max==-1){
      max = i;
    }
    if(V[i]<V[min] || min==-1){
      min = i;
    }
  }
  return std::make_pair(min, max);
}
