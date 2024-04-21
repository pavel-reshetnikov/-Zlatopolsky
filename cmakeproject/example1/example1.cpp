// №2.22 
// Дано натуральное число n (n > 99). Найти:
// а) число десятков в нем;
// б) число сотен в нем.

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Example1" << endl;
	int n = 0;
	int n10 = 0;
	int n100 = 0;
	if (argc <= 1) cin >> n;
	else n = atoi(argv[1]);
	n10 = n / 10;
	n100 = n / 100;
	cout << "Десятков = " << n10 << endl << "Сотен = " << n100 << endl;

	cin.get();
	cin.get();
	return 0;
}
