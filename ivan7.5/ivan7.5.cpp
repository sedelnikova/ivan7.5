﻿// ivan7.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, a, b, c, d;
	cout << "Введите четырехзначное число: " << endl;
	cin >> A;
	a = A / 1000;
	b = A / 100 - a * 10;
	c = (A - b * 100 - a * 1000) / 10;
	d = A - b * 100 - a * 1000 - c * 10;
	if ((a == d) && (b == c))
	{
		cout << "Истинно" << endl;
	}
	else
		{
			cout << "Ложно" << endl;
		}
	return 0;
}