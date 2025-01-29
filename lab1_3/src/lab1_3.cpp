#include "lab1_3.hpp"

using std::cout;
using std::endl;
using std::sin;
using std::exp;
using std::pow;
using lab1_3::Expression;

namespace lab1_3 {
	const double Expression::calculate(const double& x) const {
		auto r = 2 - pow(b - x, 1.0 / 5);

		return sin(a * x) / (b - x) * exp(r);
	}
}

int main()
{
	double a = 16.01, b = 2.19, x = -8.23;

	Expression exp;

	exp.setA(a);
	exp.setB(b);

	cout << exp.calculate(x) << endl;

	return 0;
}
