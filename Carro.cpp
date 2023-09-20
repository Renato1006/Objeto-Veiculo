#include<string>
#include<iostream>
using namespace std;

#include "Veiculo.h"
#include "Carro.h"
	//Metodo construtor por herança
	Carro::Carro(int porta, string marca, int tanque, float consumo) // Parte nova de carro e parte de veiculo
		:Veiculo(marca,tanque,consumo){setPorta(porta);} //Parte vinda de Veiculo
	Carro::~Carro(void){cout << "Carro destruído!" << endl;}
	int Carro::getPorta(){return Porta;}
	void Carro::setPorta(int porta){ Porta = porta;}
	void Carro::mostraCarro(){ cout << "\n\nCarro:"
					 << "\nNúmero de portas: " << getPorta()
					 << "\nMarca: " << getMarca()
					 << "\nTanque: " << getTanque()
					 << "\nConsumo: " << getConsumo()
					 << "\nAutonomia: " << calcAutonomia() 
					 << endl; }
