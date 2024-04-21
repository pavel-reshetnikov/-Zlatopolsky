//3.31.Записать условие, которое является истинным, когда:
//а) целое N кратно пяти или семи;
//б) целое N кратно четырем и не оканчивается нулем.
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Example2" << endl;
	int n = 0;
	if (argc <= 1) cin >> n;
	else n = atoi(argv[1]);
	if (n % 5 == 0 || n % 7 == 0)
	{
		cout << "Истина: целое N кратно пяти или семи; " << endl;
	}
	if (n % 4 == 0 && n % 10 != 0)
	{
		cout << "Истина: целое N кратно четырем и не оканчивается нулем." << endl;
	}

	cin.get();
	cin.get();
	return 0;
}
