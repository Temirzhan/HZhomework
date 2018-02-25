
#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<iostream>
#include<time.h>
#include<math.h>


using namespace std;
int f(int m2, int m1, int m0)
{
	/*Напишите функцию int f(int m2, int m1, int m0), в которой заданы значения всех трех параметров по умолчанию.
	Это функция вычисляет и возвращает натуральное число, первая(сотни), вторая(десятки) и третья(единицы) цифры которого равны соответственно m2, m1, m0.
	Требуется определить функцию так, чтобы после выполнения оператора x = f() значение x равнялось 567.
	*/
	return m2 + m1 + m0;
}

double f1(double f, double d)
{
	/*Операторы int u=f(3, 4); double v=f(20.5, 10.5); myofs<<”u=”<<u<<” v=”<<v<<endl;
	дают в результате u=7 v=10 (т.е. соответственно сумму и произведение своих параметров).
	Напишите функции f(…,…).
	*/
	if (f > d)
		return f - d;
	else if (f < d)
		return f + d;
	else
		return 0;

}

/*Напишите функцию f(double& a, double& b, double c, double q), которая возвращает катеты прямоугольного треугольника, гипотенуза которого равна с, а острый угол q (градусов).  
*/
double Z( double *c, double *q)
{

	double  a = *c* cos(*q);

	return a;
}
/*Даны первый член и разность арифметической прогрессии. Написать рекурсивную функцию для нахождения:
n-го члена прогрессии;
суммы n первых членов прогрессии.
*/
int arifmet(int a, int b, int n, int z,int *sum)
{
	cout << a << endl;
	*sum += a;
	if (n < z)
	{
		arifmet(a + b, b, n + 1, z, sum);
	}
	return *sum;
}
/*Даны первый член и знаменатель геометрической прогрессии. Написать рекурсивную функцию: 
нахождения n-го члена прогрессии
нахождения суммы n первых членов прогрессии*/
int geomitr(int a, int b, int n, int z, int *sum)
{
	cout << a << endl;
	*sum += a;
	if (n < z)
	{
		geomitr(a * b, b, n + 1, z, sum);
	}
	return *sum;
}
/*Написать рекурсивную функцию для вычисления максимального элемента массива из n элементов
*/

void zapolnMasiv(int *A, int v)
{
	for (int i = 0; i < v; i++)
		A[i] = -10+rand()% 30; 
}
void coutMasiv(int *A, int v)
{
	for (int i = 0; i < v; i++)
		cout << "A[" << i << "]= " << A[i] << endl;
}
int MaxMin(int *A,int z,int v,int *max)
{
	if (A[z] > *max)
		*max = A[z];
	if (z < v)
		MaxMin(&A[z], z+1,v,max);
	return *max;
}
/*Написать рекурсивную функцию для вычисления индекса максимального элемента массива из n элементов
*/
int MaxIndex(int *A, int z, int *max,int *nmax,int chet)
{
	if (A[z] > *max)
	{
		*max = A[z];
		*nmax = chet;
	}
	if (chet < 10)
		MaxIndex(&A[z], z++, max,nmax,chet+1);
	return *nmax;
}

int SumPolozh(int *A,int *N)
{
	int sum = 0;
	switch (*N)
	{
	case 1:
	{
		for (int i = 0; i < 10; i++)
		{if(A[i]>0)
			sum += A[i];
		}
	}
	case 2:
	{
		for (int i = 0; i < 10; i++)
		{
			if (A[i]<0)
				sum += A[i];
		}
	}
		break;
	}
	return sum;
}
/*Даны два натуральных числа. Найти наименьшее общее кратное этих чисел, используя функцию реализующую алгоритм Евклида.*/
int evkalid(int a, int b)
{
while((a != 0) && (b != 0))
{
if (a > b)
a = a%b;
else if(b > a)
b = b%a;
		}
return a + b;
}
