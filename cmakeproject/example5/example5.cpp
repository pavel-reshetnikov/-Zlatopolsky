//12.50 ��� ��������� ������. ����������:
//�) ������� �������������� ��������� ������� ������� �������;
//�) ������� �������������� ��������� k ������ �������.

#include <iostream>

using namespace std;
int rrand() {
	return rand() % 10;
}

int main(int argc, char* argv[])
{

	setlocale(LC_ALL, "Russian");
	cout << "Example5" << endl;
	int array[5][5];
	double N = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			array[i][j] = rrand();
			cout << array[i][j]<<'\t';
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		N += array[i][1];
	}
	cout << "������� �������������� ������� ������� " << N / 5 << endl;
	N = 0;
	int k = 0;
	if (argc <= 1) {
		cout << "�������� ������" << endl;
		cin >> k;
	}
	else k = atoi(argv[1]);
	k--;
	for (int j = 0; j < 5; j++) {
		N += array[k][j];
	}
	cout << "������� �������������� " <<k+1<<" ������ " << N / 5 << endl;

	cin.get();
	cin.get();
	return 0;
}
