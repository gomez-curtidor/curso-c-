/*Calculo del perimetro de una elipse*/
#include <cmath>
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]){
	float a=2.5, b= 6.4; //radio menor y mayor
	float perimetro=0.0;
	perimetro=3.1416*(sqrt(4*pow((a+b),2)));
	std::cout<<"El perimetro es: " << perimetro<<std::endl;
	return 0;
}



