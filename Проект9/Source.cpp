#include <stdio.h>
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	/*int m1, m2, m3;
	printf("Введите первое любое число: ");
	scanf_s("%d", &m1);
	printf("Введите второе любое число: ");
	scanf_s("%d", &m2);
	printf("Введите третье любое число: ");
	scanf_s("%d", &m3);

	if (m1<m2)
	{
		printf("Это наименьшее число: %d",m1);
	}
	else if(m2 < m1)
	{
		printf("Это наименьшее число: %d", m2);
	}
	else if (m3 < m1)
	{
		printf("Это наименьшее число: %d", m3);
	}
	else if (m1 < m3)
	{
		printf("Это наименьшее число: %d", m1);
	}
	else if (m2 < m3)
	{
		printf("Это наименьшее число: %d", m2);
	}
	else if (m3 < m1)
	{
		printf("Это наименьшее число: %d", m3);
	}
	else if (m3 < m2)
	{
		printf("Это наименьшее число: %d", m3);
	}
	else if (m1 == m1)
	{
		printf("Это наименьшее число: %d", m1);
	}
	else if (m2 == m2)
		printf("Это наименьшее число: %d");
	else if (m3 == m3)
		printf("Это наименьшее число: %d");*/

	/*int m, d, d1;
	printf("Кол-во месяцев: ");
	scanf_s("%d", &m);
	printf("Кол-во дней: ");
	scanf_s("%d", &d);

	d1 = (m * 30)+d;
	printf("Дней в году: %d\n", d1);*/

	/*int h, m, s1,s2,sum;
	printf("Введите часы: ");
	scanf_s("%d", &h);
	printf("Введите минуты: ");
	scanf_s("%d", &m);
	printf("Введите секунды: ");
	scanf_s("%d", &s1);

	s1 = h * 3600;
	printf("Часы в секундах: %d\n",s1);
	s2 = m * 60;
	printf("Минуты в секундах: %d\n", s2);
	sum = s1+s2;
	printf("Кол-во секунд прошедших с начала дня: %d\n", sum);*/

	system("pause");
}