/*Calculo de la pendiente a partir de parametros fijos*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]){
	std::cout<<setw(33)<<right<<"\aWelcome GLINTEC!!"<<endl;
	float pendiente=(12.0-7.0)/(8.0-4.0);
	//cout<<hex<<uppercase<<10<<endl;
	cout<<"La pendiente es: "<<setw(6)<<setprecision(3)<<pendiente<<endl;
	return 0;
}

