module BPZ1901.Kiseleva.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
			}
			double f2(double x) {
				return (x >= -3.5) ? (4 * x * x + 2 * x - 19) : (-(2 * x) / (-4 * x + 1));
			}
			double a(int i) {
				return  (pow(-1, i) * (pow(2, i + 1)) / (pow(2, 2 * i)) + 1);
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred+sled;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
