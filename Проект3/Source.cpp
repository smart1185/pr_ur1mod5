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
	cout << "введите номер задания от 7 до 12: ";
	cin >> Number;

	switch (Number)
	{
	case 7:
		/*7.	Дан массив. Все его элементы:
a.	увеличить в 2 раза;
b.	уменьшить на число А;
c.	разделить на первый элемент*/
	{
		const int size = 10;
		int  a2[size], a3[size], a;
		float a1[size], a4[size];
		cout << "введите число A: ";
		cin >> a;

		for (int i = 0; i < size; i++)
		{
			a1[i] = rand() % 50 + 1;
			cout << " " << a1[i] << " ";
		}
		cout << endl;
		cout << "увеличить в 2 раза    уменьшить на число А    разделить на первый элемент" << endl;
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
		/*8.В массиве хранятся сведения о стоимости 12 различных предметов. Определить общую стоимость всех предметов*/
	{
		const int size = 12;
		float a[size], sum = 0;
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 500 * 0.5;
			cout << i+1 << "-й предмет стоит - " << a[i] << " космокредитов"<< endl;
		}
		cout << endl;
		for (int i = 0; i < size; ++i)
			{
				sum=sum+a[i];
			}
		cout << "\tобщая стоимость всех предметов = " << sum << " космокредитов" << endl;

	}
	break;

	case 9:
		/*9.В массиве хранятся сведения о количестве осадков, выпавших за каждый день февраля. Определить 
		среднедневное количество осадков в этом месяце*/
	{
		const int size = 28;
		int a[size];
		float sum = 0, med=0;
		cout << "количество осадков по дням" << endl;
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 100;
			cout << a[i]<< " ";
			sum += a[i];
		}
		med= sum / size;
		cout << "\tсреднедневное количество осадков в феврале= " << med<< endl;
	}
	break;

	case 10:
		/*10.В массиве хранится информация о массе каждого из 30 предметов, загружаемых в грузовой автомобиль, 
		грузоподъемность которого известна. Определить, не превышает ли общая масса всех предметов грузоподъемность 
		автомобиля*/
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
				cout << "общая масса превышает грузоподъемность" << endl;
			}
			else 
		cout << "общая масса не превышает грузоподъемность"  <<  endl;
		cout << endl;
	}
	break;

	case 11:
		/*11.	Дан массив. Напечатать: 
a.	все неотрицательные элементы; 
b.	все элементы, не превышающие число 100.
c.	все четные элементы
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
		cout << "неотрицательные элементы: ";
		for (int i = 0; i < size; i++)
		{
			if (a[i]>0)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
		cout << "элементы, не превышающие число 100: ";
		for (int i = 0; i < size; i++)
		{
			if (a[i] < 100)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
		cout << "четные элементы: ";
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
		/*12.Дан массив. Вывести на экран сначала его элементы, стоящие на четных местах, затем — на нечетных*/
	{
		const int size = 10;
		int a[size];
		cout << "\t\tмассив: ";
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 10;
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "элементы, стоящие на четных местах: ";
		for (int i = 1; i < size; i += 2)
		{
			cout << a[i]<< " ";
		}
		cout << endl;
		cout << "элементы, стоящие нечетных местах: ";
		for (int i = 0; i < size; i += 2)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	break;
	default: {
		cout << "задания с таким номером не существует" << endl;
	}
	}goto start;
	system("pause");
	return(0);

}