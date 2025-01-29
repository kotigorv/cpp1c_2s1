#pragma once

#include <iostream>
#include <cmath>

namespace lab1_3 {
	
	class Expression 
	{
	private: 
		double a;
		double b;
	public: 
		const double getA() const {
			return this->a;
		}

		void setA(const double& a) {
			this->a = a;
		}

		const double getB() const {
			return this->b;
		}

		void setB(const double& b) {
			this->b = b;
		}

		const double calculate(const double& x) const;                                                                                  
	};
}

