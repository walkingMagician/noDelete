#include<iostream>
#include<cmath>
using namespace std;

//#define ZADACHA_1 
//#define ZADACHA_2
//#define ZADACHA_3
//#define ZADACHA_4
//#define ZADACHA_5
//#define ZADACHA_6
//#define ZADACHA_7

void main() {
	setlocale(LC_ALL, "");

#ifdef ZADACHA_1
	int j = 0, i;
	cout << "i = "; cin >> i;
	for (int f = 0; f <= i; f++)
	{
		if (f % 2 != 0)
			j += f;
	}
	cout << j;
#endif

#ifdef ZADACHA_2
	int i, n = 1;
	cout << "����� ������ 0, i = "; cin >> i;
	if (i == 0)
		cout << "0! = 1";
	else if (i < 0)
		cout << "����"; 
	else
	{
		for (int j = 1; j <= i; j++)
		{
			n *= j;
		}
		cout << "n! = " << n;
	}
#endif
	
#ifdef ZADACHA_3
	int user, i = 1;
	cout << "������� ����� ������ 0: ����� - "; cin >> user;
	int user_two = 0;
	if (user == 0)	cout << "����� ������ 0"; 
	else
	{
		while (user != 0)
		{
			user_two *= 10;
			user_two += user % 10;
			user /= 10;
		}
		cout << user_two;
	}
#endif
		
#ifdef ZADACHA_4
	int user, sum = 0;
	cout << "������� �����: ";	cin >> user;

	for (int i = 0; user != 0; i++)
	{
		sum += user % 10;
		user /= 10;
	}
	cout << sum;
#endif

#ifdef ZADACHA_5
	int cm = 15, n,x = 0;
	cout << "������ ����� ����-��, ����� � ���� ������������ �����" << endl;
		cout << "������� ������ ������ ������� ��, ������� ���� ������ ������? - "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		x += cm;
		cm += 2;
	}
	cout << "������ ������ " << n << " ����, �� ��� ��� ������ ��������� " << x << " ��" << endl;
#endif

#ifdef ZADACHA_6
	int n, k, sum = 0;
	cout << "n: ";	cin >> n;
	cout << "k: ";	cin >> k;

	for (int i = 0; i <= n; i++)
	{
		sum += pow(i, k);
	}
	cout << sum;
#endif
	
#ifdef ZADACHA_7
	int n;
	cout << "n: "; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	

	const int x = 2;
	int arr[x][x];
	int n;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << "arr [" << i << "] [" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
#endif

	int i;
	cout << "i = "; cin >> i;
	cout <<"i/10 = " << i / 10 << endl;
	cout <<"i%10 = " << i % 10 << endl;

}
/* ������ �1
������������ ������ � ���������� ����� ������ ����,
���������� ������� ��� ��� �����, ������� � �����.
����������. ��������, ������������ ���� �����
12345. �� ������ ������ ��������� ����� �����-
��� � 54321.
������������ ������ � ���������� �����, ����������
�������� �� ����� ����� ��� ����.
����������. ��������, ������������ ���� �����
12345. �� ������ ������ ��������� ���������
����, ��� ����� ���� ����� 15.
. � ������ ���� ������ ��������� 15 ��. ������ �����
���� ���� ��� ���������� �� 2 �� ������. ���������� 
����� ����� ���������� ��������� ������ ����� N ����.
����������. ��������, ������������ ���� ���-
��4. �������������, ������ ������ 4 ���, ������� 
��������� ���� �������� 72 ��.
*/