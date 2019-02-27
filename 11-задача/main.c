/*
 * main.c
 *
 *  Created on: 27 февр. 2019 г.
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
        printf("%s", "Ввидите число (0 - остановит ввод) ");
        scanf("%d", &grade);
    } while (grade != 0);

    if (counter != 0)
    {
    	counter = counter -1;
        average = sum / counter ;
        printf("Средние значение %g\n", average);
    }
    else
    {
        puts("Нечего считать");
    }

    return 0;
}
