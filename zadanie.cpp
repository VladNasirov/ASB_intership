#include <iostream>
#include <cmath>
#include <fstream>
#include <Windows.h>
#include <cmath>
#include <iomanip>
using namespace std;
const float F_PI=3.141592;
const double D_PI=3.14159265358979323846;
void fsin(int lenght)
{
	float* massin=new float[lenght];
	float f=-0.5;
	float fstep = (abs(2*f)) / lenght;
	ofstream out;
	out.open("floatres.txt");
	for (int i = 0; i < lenght; i++)
	{
		massin[i] = sinf(2 * F_PI*i*f);
		f += fstep;
		if (out.is_open())
		{
			out << massin[i] << endl;
		}
	}
	out.close();
	delete[] massin;
}
void dsin(int lenght)
{
	long double* massin=new long double[lenght];
	float f = -0.5;
	long double fstep = abs(2 * f) / lenght;
	ofstream out;
	out.open("doubleres.txt");
	for (int i = 0; i < lenght; i++)
	{
		massin[i] = sin(2 * D_PI * i*f);
		f += fstep;
		if (out.is_open())
		{
			out << massin[i] << endl;
		}
	}
	out.close();
	delete[] massin;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int len;
	cout << "¬ведите размер массива: " << endl;
	cin >> len;
	fsin(len);
	dsin(len);
}