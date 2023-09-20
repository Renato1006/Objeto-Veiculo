#ifndef CARRO_H
#define CARRO_H

#include<string>
using namespace std;

class Carro:public Veiculo{//Puxando dados(atributos e metodos) publicos de veiculo para carro

	private:
		int Porta;

	public:

		Carro( int , string , int , float );
		~Carro();
		void mostraCarro();
		void setPorta(int );
		int getPorta();

};
#endif
