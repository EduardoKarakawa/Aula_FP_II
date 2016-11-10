#pragma once
#include <exception>

class CalculadoraException : public std::exception {
	private:

	public:
		CalculadoraException(const char* const mensagem) : std::exception(mensagem) {
		}


};