/*calculo del perimetro y area de un circulo con parámetros prefijados*/

#include <cmath>
#include <iostream>
#include <cstdlib>
int main(int argc, char *argv[]){
	float r=3.3;
	float perimetro=3.1416*r*2;
	float area=3.1416*pow(r,2);

	std::cout<<"El perimetro del circulo es: "<<perimetro<<std::endl;
	std::cout<<"El area del circulo es: "<<area<<std::endl;
	return 0;
}




