#include <iostream>
#include "Calculadora.h"
#include "Inimigo.h"
#include "CalculadoraException.h"

class Programa {
	public:
		int Executar1() {
			Calculadora calc;
			float r;
			try {
				r = calc.Dividir(10.0f, 0.0f);
			}
			catch (CalculadoraException& ce) {
				std::cout << "Erro na calculadora" << std::endl;
			}
			catch (std::exception& e) {
				std::cout << "ocorreu um erro epico" << std::endl << e.what() << std::endl;
			}
			return 0;
		}


		int Executar2() {
			Inimigo inim;
			try {
				inim.SetVida(-50);
				std::cout << "Vida: " << inim.GetVida() << std::endl;
			}
			catch (std::exception& e) {
				std::cout << "Vida menor q zero!"<< e.what() << std::endl;
			}

			return 0;
		}
};


int main() {
	Programa comp;

	comp.Executar1();

	system("pause");
	return 0;
}