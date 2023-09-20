#include<string>
#include<iostream>
using namespace std;

#include "Veiculo.h"
#include "Moto.h"

	Moto::Moto(int tempoMotor, string marca, int tanque, float consumo)
	:Veiculo(marca, tanque, consumo){
		setTempoMotor(tempoMotor);
	}
	Moto::~Moto(void){cout << "Moto destruída!" << endl;}
	void Moto::setTempoMotor(int tempoMotor){TempoMotor = tempoMotor;}
	int Moto::getTempoMotor(){return TempoMotor;}
	void Moto::mostraMoto(){ cout   << "\n\nMoto:"
					 << "\nTempo Motor: " << getTempoMotor()
					 << "\nMarca: " << getMarca()
					 << "\nTanque: " << getTanque()
					 << "\nConsumo: " << getConsumo()
					 << "\nAutonomia: " << calcAutonomia() 
					 << endl;}
