#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"


using namespace std;
char D;
void main()
{
	setlocale(LC_ALL, "rus");
	do
	{
		int N;
		cout << "�������� �������" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			int x = f();
			cout << "x=f()= " << x << endl;
		}
		break;
		case 2:
		{
		}
		break;
		case 3:

		{int u = f1(3, 4);
		double v = f1(20.5, 10.5);
		cout << "u= " << u << endl;
		cout << "v= " << v << endl;
		}
		break;
		case 4:
		{
			double c, q;
			cout << "������� ���������� " << endl;
			cin >> c;
			cout << "������� ���� " << endl;
			cin >> q;
			cout << "����� ����� " << Z(&c, &q) << endl;
		}
		break;
		case 5:
		{
			double c, q;
			cout << "������� ���������� " << endl;
			cin >> c;
			cout << "������� ���� " << endl;
			cin >> q;
			cout << "����� ����� " << Z(&c, &q) << endl;
		}
		break;
		case 6:
		{int a;
		int b;
		int z;
		int sum = 0;
		cout << "������� ������ �������������� ���������, ���, � ����� ���������� ��������" << endl;
		cin >> a >> b >> z;
		cout << "����� = " << arifmet(a, b, 1, z, &sum) << endl;

		}
		break;
		case 7:
		{int a;
		int b;
		int z;
		int sum = 0;
		cout << "������� ������ �������������� ���������, ���, � ����� ���������� ��������" << endl;
		cin >> a >> b >> z;
		cout << "����� = " << geomitr(a, b, 1, z, &sum) << endl;
		}
		break;
		case 8:
		{
			int A[10];
			int max = 0;
			zapolnMasiv(A, 10);
			coutMasiv(A, 10);
			cout << "max= " << MaxMin(A, 0, 10, &max) << endl;
		}
		break;
		case 9:
		{
			int A[10];
			int max = 0;
			int nmax = 0;

			zapolnMasiv(A, 10);
			coutMasiv(A, 10);
			cout << "maxIndex= " << MaxIndex(A, 0, &max, &nmax, 0) << endl;
		}
		break;
		case 10:
		{
			/*��� ������ ����� ����� A. ����� ����� ������������� � ������������� ��������� �������, ��������� ������� ����������� �����
*/
			int A[10];
			int max = 0;
			int nmax = 0;
			cout << "1- ����� �������������," << endl;
			cout << "2- ����� �������������," << endl;
			cin>>N;
			zapolnMasiv(A, 10);
			coutMasiv(A, 10);
			cout << SumPolozh(A, &N) << endl;
		}
		break;
		case 11:
		{int a, b;
		cout << "������� 2 �����" << endl;
		cin >> a >> b;
		cout << evkalid(a, b) << endl;
		
		}
		break;
		}
		cout << "������ ����������" << endl;
		cin >> D;
	} while (D == 'y');
}
