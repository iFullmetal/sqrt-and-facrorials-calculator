#include <stdio.h>
/*
extern long int fact(int g) {
	if (g < 0)
		return 0;
	if (g == 0)
		return 1;
	else{
		return g * fact(g - 1);
	}
}
*/

extern double fact(int g) {
	if (g < 0)
		return 0;
	else if (g == 0)
		return 1;
	else if (g > 170) {
		printf("\n Число должно быть не больше 170!");
	}
	else {
		return g * fact(g - 1);
	}
}