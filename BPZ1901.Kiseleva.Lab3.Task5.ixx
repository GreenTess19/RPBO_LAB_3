export module BPZ1901.Kiseleva.Lab3.Task5;

import <cmath>;

export namespace RBPO {
	namespace Lab3 {
		namespace Task5 {
			double f1(double x);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab3::Task5::f1(double x) {
	return (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
}
double RBPO::Lab3::Task5::f2(double x) {
	if (x >= -3.5) return (4 * x * x + 2 * x - 19);
	else return (-(2 * x) / (-4 * x + 1));
	}
}
double RBPO::Lab3::Task5::a(int i) {
	return (pow(-1, i) * (pow(2, i + 1)) / (pow(2, 2 * i)) + 1);
}
double RBPO::Lab3::Task5::f3(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double next = a(1);
	double sum = prev + next;
	for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
		sum += a(i);
	}
	return sum;
}