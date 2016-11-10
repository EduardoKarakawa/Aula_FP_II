#pragma once
#include <exception>

class Inimigo {
	private:
		float m_vida;
	
	public:
		Inimigo(float v) {
			SetVida(v);
		}

		Inimigo(){
			SetVida(0);
		}

		float GetVida() const {
			return m_vida;
		}

		void SetVida(float vida) {
			if (vida < 0.0f)
				throw std::exception("Valor da vida deve ser maior que ZERO!");
			m_vida = vida;
		}


};