#include<iostream>
#include<string>
using namespace std;

#include "Veiculo.h"
#include "Carro.h"
#include "Moto.h"
int main(){
{	
	{Carro carro(2, "Fusca" , 50, 7.5);
	carro.mostraCarro();
	}
	
	{Moto moto( 100, "Honda", 20, 10.8);
	moto.mostraMoto();
	}
	
	return 0;
}
}
