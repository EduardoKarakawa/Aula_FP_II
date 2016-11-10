#pragma once
#include <exception>

class Calculadora {
	private:

	public:
		float Dividir(float n, float d) {
			if (d == 0.0f)
				throw std::exception("denominador nao pode ser igual a zero");

			float m_r = n / d;
			std::cout << "r: " << m_r << std::endl;
			return m_r;
		}
};