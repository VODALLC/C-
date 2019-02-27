/*
 * main.c
 *
 *  Created on: 27 февр. 2019 г.
 *      Author: Alex
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	printf("%d\n", rand() % 100);
	printf("%d\n", rand() % 100);
	system("pause");
	return 0;

}
