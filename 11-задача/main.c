/*
 * main.c
 *
 *  Created on: 27 ����. 2019 �.
 *      Author: Alex
 */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
    int counter = 0;
    int grade = 0;
    double sum = 0;
    double average;

    do
    {
        sum = sum + grade;
        counter++;
        printf("%s", "������� ����� (0 - ��������� ����) ");
        scanf("%d", &grade);
    } while (grade != 0);

    if (counter != 0)
    {
    	counter = counter -1;
        average = sum / counter ;
        printf("������� �������� %g\n", average);
    }
    else
    {
        puts("������ �������");
    }

    return 0;
}
