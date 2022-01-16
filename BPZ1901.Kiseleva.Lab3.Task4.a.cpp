#include <cmath>
module BPZ1901.Kiseleva.Lab3.Task4:a;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double a(int i) {
				return (pow(-1, i) * (pow(2, i + 1)) / (pow(2, 2 * i)) + 1);
			}
		}
	}
}