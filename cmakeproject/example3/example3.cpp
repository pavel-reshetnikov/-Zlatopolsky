//Составить программу для вычисления значения функции
//y(x)	
//     {-1, если x < -1,
// y = {x, если x > -1,
//     {1, если x = -1.
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Example3" << endl;
	int x = 0;
	int y = 0;
	if (argc <= 1)  cin >> x; 
	else  x = atoi(argv[1]); 
	if (x < -1)
	{
		y = -1;
	}
	if (x > -1)
	{
		y = x;
	}
	if (x == -1)
	{
		y = 1;
	}
	cout << "y = " << y << endl;

	cin.get();
	cin.get();
	return 0;
}
