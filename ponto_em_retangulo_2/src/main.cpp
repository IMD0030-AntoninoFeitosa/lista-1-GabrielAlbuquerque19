/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    int p1, p2, p3, p4, x, y;
    while(cin >> p1 >> p2 >> p3 >> p4 >> x >> y){
      if(p1 != p3 || p2 != p4){
        Ponto P (x,y);
        Ponto IE (p1, p2);
        Ponto SD (p3, p4);
        location_t localizacao;
        localizacao = pt_in_rect(IE, SD, P);
        switch(localizacao){
          case location_t::OUTSIDE: cout << "outside" << endl; break;
          case location_t::INSIDE: cout << "inside" << endl; break;
          case location_t::BORDER: cout << "border" << endl; break;
        }
      } else {
        cout << "invalid" << endl;
      }
    }

    return 0;
}
