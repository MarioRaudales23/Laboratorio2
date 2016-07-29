#include <iostream>
#include <string>

int factorial(int);
int dividir(int,int);

int main(){
	int numerorecibido;
	int opcionmenu;
	int sumafac;
	int numeroamigo;
	char resp;
	do{
		std::cout<<"Opcion 1: FActorial\nOpcion 2: Divisor\nIngrese opcion: ";
		std::cin>>opcionmenu;
		switch(opcionmenu){
			case 1:
				for(int i = 1;i < 50000;i++){
					sumafac = factorial(i);
					if(sumafac == i){
						std::cout<<i<<"\n";
					}
				}
				break;
			case 2:
				std::cout<<"Ingrese el numero a evaluar";
				std::cin>>numerorecibido;
				std::cout<<"Ingrese el segundo numero";
				std::cin>>numeroamigo;
				break;
			default:
				std::cout<<"Opcion no valida"; 
		}
		std::cout<<"Desea continuar: ";
		std::cin>>resp;
	}while(resp == 's' || resp == 'S');
	return 0;
}


int factorial(int m){
	int residuo = m%10;
	int sumatoriaresiduo = 0;
	int restante = m/10;
	do{
		
		int factorialtemporal = 1;
		for(int i=1;i<=residuo;i++){
			factorialtemporal*=i;
		}
		sumatoriaresiduo += factorialtemporal;
		residuo = restante%10;
		restante /=10;
	}while(residuo != 0);
	return sumatoriaresiduo;
}
/*int dividir(int primero,int segundo){
	int divisorp;
	int divisors;
	for(int i = 0;);
}*/
