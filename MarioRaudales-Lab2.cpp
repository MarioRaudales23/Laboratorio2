#include <iostream>
#include <string>

int Evaluador(int);
int dividir(int,int);
int factorial(int);
int main(){
	int numerorecibido;
	int opcionmenu;
	int sumafac;
	int numeroamigo;
	int temporal;
	char resp;
	do{
		std::cout<<"Opcion 1: Factorial\nOpcion 2: Divisor\nIngrese opcion: ";
		std::cin>>opcionmenu;
		switch(opcionmenu){
			case 1:
				for(int i = 1;i <= 50000;i++){
					sumafac = Evaluador(i);
					if(sumafac == i){
						std::cout<<i<<"\n";
					}
				}
				break;
			case 2:
				std::cout<<"Ingrese el numero a evaluar: ";
				std::cin>>numerorecibido;
				std::cout<<"Ingrese el segundo numero: ";
				std::cin>>numeroamigo;
				temporal = dividir(numerorecibido,numeroamigo);
				if(temporal == 1){
					std::cout<<"Los numeros son amigos\n"; 
				}else{
					std::cout<<"No son amigos\n";	
				}
				break;
			default:
				std::cout<<"Opcion no valida"; 
		}
		std::cout<<"Desea continuar: ";
		std::cin>>resp;
	}while(resp == 's' || resp == 'S');
	return 0;
}


int Evaluador(int numero){
	int residuo = 0;
	int acumulador = 0;
	while(numero > 0){		
		residuo = numero%10;
		acumulador += factorial(residuo);
		numero  = numero/10;
	}
	return acumulador;
}
int dividir(int primero,int segundo){
	int divisorp;
	int divisors;
	for(int i = 1;i <primero;i++ ){
		if(primero%i == 0){
			divisorp+=i;
		}
	}
	for(int i= 1;i<segundo;i++){
		if(segundo%i==0){
			divisors+=i;
		}
	}
	if((primero == divisors)&&(segundo==divisorp)){
		return 1;
	}else{
		return 0;
	}
}
int factorial(int numero){
	int acumular = 1;
	for(int i = 1;i <= numero;i++){
		acumular=acumular*i;
	}
	return acumular;
}

