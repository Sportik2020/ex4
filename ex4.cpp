#include <iostream>
#include <ctime>
using namespace std;
int main()
{
//������� 2
	/*1. ����� ������ A, ���������� 12 ����� ��������� ����� �� - 5 �� 5. ����� ����� ��������� �������.*/
/*	int sym = 0;
	const int a = 12;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; i++) {
		mas[i] = rand() % 11 - 5;
		cout << mas[i] << endl;
		sym = sym + mas[i];
	}
	cout << sym << endl;*/
	/*2. ����� ������, ������� �������� 13 ��������� ����� ����� �� -12 �� 12. ����� ������������ ������������� ��������� �������.*/
/*	int pr = 1;
	const int a = 13;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i) {
		mas[i] = rand() % 25 - 12;
		cout << mas[i] << endl;
		if (mas[i] < 0) {
			pr = pr * mas[i];
		}
	}
	cout << "proiz" <<" "<< pr << endl;*/
	/*3. ����� ������, ������� �������� 11 ��������� ����� ����� �� 0 �� 20.
	����� ���������� ��������� �������, ������� ������� �� 3 ��� �� 5 ��� �� 7.*/
/*	int kol = 0;
	const int a = 11;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i) {
		mas[i] = rand() % 21;
		cout << mas[i] << endl;
		if (mas[i] % 3 == 0 || mas[i] % 5 == 0 || mas[i] % 7 == 0) {
			kol = kol + 1;
		}
	}
	cout << kol << endl;*/
	/*4. ����� ������ �� 15 ����� �����  �� 0 �� 25. ����� ����� ��������� �������, ������� �������� ��������� �������.*/
/*	int sym = 0;
	const int a = 15;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i) {
		mas[i] = rand() % 26;
		cout << mas[i] << endl;
		if (mas[i] % 2 != 0) {
			sym = sym + mas[i];
		}
	}
	cout << "sym" << sym << endl;*/
	return 0;
}