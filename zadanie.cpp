#include <iostream>
#include <cmath>
#include <fstream>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
const float F_PI=3.141592;
const double D_PI=3.14159265358979323846;
void fsin(int lenght)
{
	float f=-0.5;
	float fstep = (abs(2*f)) / lenght;
	vector<float>massin;
	ofstream out;
	out.open("floatres.txt");
	for (int i = 0; i < lenght; i++)
	{
		massin.push_back(sinf(2 * F_PI*i*f));
		f += fstep;
		if (out.is_open())
		{
			out << massin[i] << endl;
		}
	}
	out.close();
	massin.clear();
}
void dsin(int lenght)
{
	float f = -0.5;
	double fstep = abs(2 * f) / lenght;
	vector<double>massin;
	ofstream out;
	out.open("doubleres.txt");
	for (int i = 0; i < lenght; i++)
	{
		massin.push_back(sin(2 * D_PI * i*f));
		f += fstep;
		if (out.is_open())
		{
			out << massin[i] << endl;
		}
	}
	out.close();
	massin.clear();
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