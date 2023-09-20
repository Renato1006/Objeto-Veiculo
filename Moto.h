#ifndef MOTO_H 
#define MOTO_H

#include<string>
using namespace std;

class Moto:public Veiculo{

	private:
		int TempoMotor;

	public:
		Moto(int, string , int , float);
		~Moto();
		void mostraMoto();
		void setTempoMotor(int);
		int getTempoMotor();

};
#endif
