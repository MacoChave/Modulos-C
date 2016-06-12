/*
 * Principal.c
 *
 *  Created on: 11/06/2016
 *      Author: marco
 */

#include <stdio.h>

extern int maximo(int a, int b);

int main(void) {
	int x, y;

	printf("Dame un número: ");
	scanf("%d", &x);
	printf("Dame otro número: ");
	scanf("%d", &y);
	printf("El máximo es %d\n", maximo(x, y));

	return 0;
}
