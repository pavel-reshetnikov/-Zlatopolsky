//6.102 Ќайти наименьшее общее кратное двух заданных натуральных чисел.

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Example4" << endl;
	int a = 0;
	int b = 0;
	if (argc <= 2){
	    cin >> a >> b;
	}
	else {
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	}
	int c = 1;
	for (int i = a; i > 1; i--) {
		if (a % i == 0 && b % i == 0) {
			c = i;
		}
	}
	if (c != 1) cout << "Ќаименьшее общее кратное = " << c << endl;
	else cout << " ратно только числу 1" << endl;
	cin.get();
	cin.get();
	return 0;
}
