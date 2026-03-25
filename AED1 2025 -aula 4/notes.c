#include <stdio.h>

int main(void){
char nota = 0;
if (nota < 5) {
printf("Reprovado 1\n");
printf("%d\n", nota);
}
if (nota) {
printf("Reprovado 2\n");
printf("%d\n", nota);
}
if (!nota) {
printf("Reprovado 3\n");
printf("%d\n", !nota);
}
}

//blocos de comando

#include <stdio.h>
int main(void){
{
int i = 1;
}
printf("%d\n",i);
}

/* a variável i não existe neste ponto do programa */


//operador ternario

maior = a > b ? a : b;


#include <stdio.h>
int main(void){
{
int a,b,maior;    
scanf("%d",&a);
scanf("%d",&b);
 maior = a > b ? a : b;
 

 printf ("maior %d",maior);
}

}

//switch case c

#include <stdio.h>
#include <math.h>
int main(void){
float num1, num2;
char op;
printf ("Digite: numero op numero \n");
scanf("%f %c %f" , &num1, &op, &num2);
 
switch (op)
{
case '+':
printf (" = %f \n", num1+num2);
break;
case '-':
printf (" = %f \n", num1-num2);
break;
case '*':
printf (" = %f \n", num1*num2);
break;
case '/':
printf (" = %f \n", num1/num2);
break;
default :
printf ("Operador inválido \n");
break;
}
 
}