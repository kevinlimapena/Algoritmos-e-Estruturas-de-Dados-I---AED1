#include<stdio.h>
#include<stdlib.h>
// int main(){
// FILE * arquivo;
// arquivo = fopen("textoArq.txt","a");
// if (arquivo == NULL){
// printf("\nErro na abertura do arquivo!!");
// }
// fputc('f',arquivo);
// fprintf(arquivo,"\n%d %d %s",12,12,"maria");
// fprintf(arquivo,"\n%d %d %s",222,32,"joao");
// fclose(arquivo);
// return 0;
// }

// int main() {
// FILE *p;
// int idade;
// char string[100];
// p = fopen("textoArq.txt", "w");
// if( p != NULL ) {
// printf("Arquivo foi acessado com sucesso\n");
// }
// else {
// printf("Arquivo não foi acessado...\n");
// }
// printf("\nInforme seu nome: ");
// gets(string);
// fprintf(p, strcat(string,"\n"));
// printf("\nInforme sua idade: ");
// scanf("%d", &idade);
// fprintf(p, "%d\n", idade);
// fclose(p);
// return 0;
// }
 
// int main(){
// FILE * arquivo;
// char caractere;
// arquivo = fopen("textoArq.txt","r");
// if (arquivo == NULL){
// printf("\nErro na abertura do arquivo!!");
// }
// caractere= getc(arquivo);
// while(caractere != EOF){
// printf("%c",caractere);
// caractere= getc(arquivo);
// }
// fclose(arquivo);
// return (0);}

// int main() {
// FILE *p;
// int idade;
// char texto[100];
// p = fopen("./textoArq.txt", "r");
// if( p != NULL ) {
// printf("Arquivo foi acessado com sucesso\n");
// }else {
// printf("Arquivo não foi acessado...\n");
// }
// fgets(texto, 100, p);
// printf("\n %s ", texto);
// fscanf(p, "%d", &idade);
// printf("\n Idade foi: %d", idade);
// fclose(p);
// return 0;
// }

int main() {
FILE *p;
int idade;
char texto[100];
p = fopen("textoArq.txt", "r");
if( p != NULL ) {
printf("Arquivo foi acessado com sucesso\n");
} else {
printf("Arquivo não foi acessado...\n");
}do{
fgets(texto, 100, p);
printf("\n Nome: %s ", texto);
fscanf(p, "%d", &idade);
printf("\n Idade foi: %d", idade);
printf("\n");
}while(fscanf(p, "%d", &idade) != EOF);
fclose(p);
return 0;
}