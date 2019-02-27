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
	int a, b, c;
	printf("Enter a =  ");
	scanf("%d", &a);
	printf("Enter b =  ");
	scanf("%d", &b);
	printf("Enter c =  ");
	scanf("%d", &c);
	if(a < c && b < c){
		printf("%d", c);
	}else if(a < b){
		printf("%d" , b);
	}else printf("%d", a);
	return 0;
}
