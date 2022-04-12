/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

void porcentagem(float contGeral,int cont){
    float result = 0.0;
    result = (cont*100)/contGeral;
    cout<<std::setprecision(4)<<result<<endl;
}

int main(void)
{
    int x, cont0_25 = 0, cont25_50 = 0, cont50_75 = 0, cont75_100 = 0, contFora = 0;
    float contGeral = 0.0;
    while( cin >> std::ws >> x) {
        if((x >=0) && (x<25)){
            cont0_25++;
        }
        else if((x>=25) && (x<50)){
            cont25_50++;
        }
        else if((x>=50) && (x<75)){
            cont50_75++;
        }
        else if((x>=75) && (x<100)){
            cont75_100++;
        }
        else{
            contFora++;
        }
        contGeral = cont0_25 + cont25_50 + cont50_75 + cont75_100 + contFora;
    }
       porcentagem(contGeral,cont0_25);
       porcentagem(contGeral,cont25_50);
       porcentagem(contGeral,cont50_75);
       porcentagem(contGeral,cont75_100);
       porcentagem(contGeral,contFora);
    return 0;
}
