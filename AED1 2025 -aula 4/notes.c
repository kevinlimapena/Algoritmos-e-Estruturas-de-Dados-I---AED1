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