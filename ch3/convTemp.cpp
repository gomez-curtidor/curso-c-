/*Calculo de la temperatura en grados Celsius*/
#include <cmath>
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]){
    float  TF, TC=0.0;
    TF=101.5;
    TC=(float)(5.0*(TF-32.0))/9.0;
    std::cout<<"La temperatura en Fahrenheit es: " <<TF<<std::endl;
    std::cout<<"La temperatura en Celsius es: " <<TC<<std::endl;
    return 0;
}





