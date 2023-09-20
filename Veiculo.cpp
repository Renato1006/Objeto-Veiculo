#include<string>
using namespace std;
//Puxando os metodos e atributos de pessoa escritos em Veiculo.h 
#include "Veiculo.h"

Veiculo::Veiculo(string  marca, int tanque, float consumo){//Metodo construtor puxando os dados de Veiculo.h
	setMarca(marca);
	setTanque(tanque);
	setConsumo(consumo);
}
string Veiculo::getMarca(){return Marca;}
int Veiculo::getTanque(){return Tanque;}
float Veiculo::getConsumo(){return Consumo;}
void Veiculo::setMarca(string marca){Marca = marca;}
void Veiculo::setTanque(int tanque){Tanque = tanque;}
void Veiculo::setConsumo(float consumo){Consumo = consumo;}
float Veiculo::calcAutonomia(){return Tanque*Consumo ;}
