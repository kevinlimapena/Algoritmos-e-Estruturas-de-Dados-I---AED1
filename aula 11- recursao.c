#include <stdio.h>
void func(int n) {
//	printf("%d\n", n);
	if (n>0) {
		func(n-1);
		printf("+_1 ");
	}
}
void main(void) {
	func(23232);
}

//Função recursiva
#include <stdio.h>
double fatorial(int n) { 
	double vfat;
	if (n <= 1) //Caso base: fatorial de n <= 1 retorna 1
		return 1;
	else {
		vfat = n * fatorial(n - 1); //Chamada recursiva
		return vfat;
	}
}
void main(void) {
	double f;
	int n;
	n= 4;
	f = fatorial(n);
	printf("Fatorial de %d = %.0lf\n", n, f);
	
}


//binario

#include <stdio.h>
void bin(unsigned n) {
    printf("%d \n", n);
	if (n > 1)
	    
		bin(n/2);
	printf("%d", n % 2);
}
void main(void)
{
	bin(7);
	printf("\n");
}


