//3.31.�������� �������, ������� �������� ��������, �����:
//�) ����� N ������ ���� ��� ����;
//�) ����� N ������ ������� � �� ������������ �����.
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
		cout << "������: ����� N ������ ���� ��� ����; " << endl;
	}
	if (n % 4 == 0 && n % 10 != 0)
	{
		cout << "������: ����� N ������ ������� � �� ������������ �����." << endl;
	}

	cin.get();
	cin.get();
	return 0;
}
