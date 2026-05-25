#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct pessoa {
int codigo;
char nome[40];
char endereco[40];
char sexo;
} reg;
void limparBufferEntrada() {
int c; // Consome os caracteres até encontrar o '\n' ou o EOF
while ((c = getchar()) != '\n' && c != EOF) {
}
}
int main() {
char resp = 'S';
int cont = 1;
FILE *p;
// Abre o arquivo para escrita e leitura
p = fopen("dadosCli.txt", "w+");
if (p == NULL) {
printf("Erro ao abrir o arquivo.\n");
return 1;
}
 
do{
printf("\n\n *** CADASTRO DE DADOS *** \n\n");
printf("Codigo..: %d", cont);
reg.codigo = cont;
printf("\nNome..: ");
limparBufferEntrada(); // Limpa o buffer de entrada
fgets(reg.nome, sizeof(reg.nome), stdin);
// Remover o caractere de nova linha se estiver presente
reg.nome[strcspn(reg.nome, "\n")] = '\0';
do {
printf("\nSEXO (F/M): ");
limparBufferEntrada(); // Limpa o buffer de entrada
scanf("%c", &reg.sexo);
reg.sexo = toupper(reg.sexo); // Converte para maiúscula
if (reg.sexo != 'F' && reg.sexo != 'M') {
printf("\nSexo inválido! Digite F ou M.\n");
}
} while (reg.sexo != 'F' && reg.sexo != 'M');
// Escreve no arquivo
fprintf(p, "%d, %s, %c\n", reg.codigo, reg.nome, reg.sexo);
printf("\nDeseja continuar cadastrando? (S/N): ");
limparBufferEntrada(); // Limpa o buffer antes de ler a resposta
scanf("%c", &resp);
resp = toupper(resp); // Converte para maiúscula
cont++; // Incrementa o contador para o próximo registro
} while(resp == 'S');

fclose(p); // Fecha o arquivo
printf("\nCadastro encerrado. Obrigado!\n");
return 0;
}
