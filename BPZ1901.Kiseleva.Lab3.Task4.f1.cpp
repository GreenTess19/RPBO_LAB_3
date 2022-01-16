#include <cmath>
module BPZ1901.Kiseleva.Lab3.Task4:f1;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f1(double x) {
				return (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));
			}
		}
	}
}