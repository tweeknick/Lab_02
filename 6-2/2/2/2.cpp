#include <iostream>

using namespace std;
int main() {
	setlocale(0, ".1251");
	double a, b, d, r;
	std::cout << "Введіть радіус" << endl;
	std::cin >> r;
	std::cout << "Введіть координати точки" << endl;
	std::cin >> a >> b;
	d = sqrt(pow(a, 2) + pow(b, 2));
	if (d <= r && a >= 0 && b >= 0) std::cout << "Точка належить";

	if (a <= 0 && b <= 0 && a + b >= -r) cout << "Точка належить";
	else cout << "Точка не належить";

	return 0;
}