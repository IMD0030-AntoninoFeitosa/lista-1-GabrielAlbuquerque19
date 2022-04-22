#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
      location_t localizacao = location_t::BORDER;
  if(P.x<SD.x && P.x>IE.x && P.y>IE.y && P.y<SD.y){
    localizacao = location_t::INSIDE;
  } else if(P.x>SD.x || P.x<IE.x || P.y<IE.y || P.y>SD.y){
    localizacao = location_t::OUTSIDE;
  }
  return localizacao;
}