/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
int x,y,i,z;

    while( cin >> std::ws >> x >> y) {
      z=x;
      if(y>=0){
        for (i=1;i<y;i++){  
          x=x+z+i;   
        } 
      cout<<x<<endl;
      }
      else{
        for (i=-1;i>y;i--){  
          x=x+z+i;   
        } 
      cout<<x<<endl; 
      }
    }
    return 0;
}
