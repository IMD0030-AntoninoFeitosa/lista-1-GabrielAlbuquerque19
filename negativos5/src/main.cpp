#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int SIZE = 5; // input size.

int main(void)
{
    int cont = 0, x, i;
    for (i=0;i<SIZE;i++){
        cin >> std::ws >> x;
        if(x<0){
            cont++;
        }
    }
    cout<<cont<<endl;

    return 0;
}
