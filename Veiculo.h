#ifndef VEICULO_H 
#define VEICULO_H


#include<string>//Declaração Antecipada de Atributos e Métodos
using namespace std;

class Veiculo{
	private:
		//Atributos
		string Marca;
		int Tanque;
		float Consumo;
	
	public:
		//Metodos
		Veiculo(string, int , float);
		void setMarca(string );
		void setTanque(int );
		void setConsumo(float );
		string getMarca();
		int getTanque();
		float getConsumo();
		float calcAutonomia();
};
#endif
