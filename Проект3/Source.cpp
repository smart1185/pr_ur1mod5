#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int Number;
start:
	cout << "������� ����� ������� �� 7 �� 12: ";
	cin >> Number;

	switch (Number)
	{
	case 7:
		/*7.	��� ������. ��� ��� ��������:
a.	��������� � 2 ����;
b.	��������� �� ����� �;
c.	��������� �� ������ �������*/
	{
		const int size = 10;
		int  a2[size], a3[size], a;
		float a1[size], a4[size];
		cout << "������� ����� A: ";
		cin >> a;

		for (int i = 0; i < size; i++)
		{
			a1[i] = rand() % 50 + 1;
			cout << " " << a1[i] << " ";
		}
		cout << endl;
		cout << "��������� � 2 ����    ��������� �� ����� �    ��������� �� ������ �������" << endl;
		for (int i = 0; i < size; i++)
		{
			a2[i] = a1[i] * 2;
			a3[i] = a1[i] - a;
			a4[i] = a1[i] / a1[0];
			cout << "\t" << a2[i] << "\t\t\t" << a3[i] << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << a4[i] << endl;
			cout.precision(5);
		}
	}
	break;

	case 8:
		/*8.� ������� �������� �������� � ��������� 12 ��������� ���������. ���������� ����� ��������� ���� ���������*/
	{
		const int size = 12;
		float a[size], sum = 0;
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 500 * 0.5;
			cout << i+1 << "-� ������� ����� - " << a[i] << " �������������"<< endl;
		}
		cout << endl;
		for (int i = 0; i < size; ++i)
			{
				sum=sum+a[i];
			}
		cout << "\t����� ��������� ���� ��������� = " << sum << " �������������" << endl;

	}
	break;

	case 9:
		/*9.� ������� �������� �������� � ���������� �������, �������� �� ������ ���� �������. ���������� 
		������������� ���������� ������� � ���� ������*/
	{
		const int size = 28;
		int a[size];
		float sum = 0, med=0;
		cout << "���������� ������� �� ����" << endl;
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 100;
			cout << a[i]<< " ";
			sum += a[i];
		}
		med= sum / size;
		cout << "\t������������� ���������� ������� � �������= " << med<< endl;
	}
	break;

	case 10:
		/*10.� ������� �������� ���������� � ����� ������� �� 30 ���������, ����������� � �������� ����������, 
		���������������� �������� ��������. ����������, �� ��������� �� ����� ����� ���� ��������� ���������������� 
		����������*/
	{
		const int size = 30;
		float a[size], massa = 0;
		int GP=3000;
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 200;
			cout << i + 1 << " - [" << a[i] << "]" << endl;
			massa += a[i];
		}
		cout << massa << endl;
			if (massa > GP)
			{
				cout << "����� ����� ��������� ����������������" << endl;
			}
			else 
		cout << "����� ����� �� ��������� ����������������"  <<  endl;
		cout << endl;
	}
	break;

	case 11:
		/*11.	��� ������. ����������: 
a.	��� ��������������� ��������; 
b.	��� ��������, �� ����������� ����� 100.
c.	��� ������ ��������
*/
	{
		const int size = 10;
		int a[size];
		for (int i = 0; i < size; i++)
		{
			a[i] = -50 + rand() % 200;
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "��������������� ��������: ";
		for (int i = 0; i < size; i++)
		{
			if (a[i]>0)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
		cout << "��������, �� ����������� ����� 100: ";
		for (int i = 0; i < size; i++)
		{
			if (a[i] < 100)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
		cout << "������ ��������: ";
		for (int i = 0; i < size; i++)
		{
			if (a[i] %2 == 0)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	break;

	case 12:
		/*12.��� ������. ������� �� ����� ������� ��� ��������, ������� �� ������ ������, ����� � �� ��������*/
	{
		const int size = 10;
		int a[size];
		cout << "\t\t������: ";
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 10;
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "��������, ������� �� ������ ������: ";
		for (int i = 1; i < size; i += 2)
		{
			cout << a[i]<< " ";
		}
		cout << endl;
		cout << "��������, ������� �������� ������: ";
		for (int i = 0; i < size; i += 2)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	break;
	default: {
		cout << "������� � ����� ������� �� ����������" << endl;
	}
	}goto start;
	system("pause");
	return(0);

}