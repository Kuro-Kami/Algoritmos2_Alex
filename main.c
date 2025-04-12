#include <stdio.h>
#include <math.h>
#include "biblioteca.h"

int main() {
int opcao;
	do {
	printf("==== MENU DE FUNCOES ====\n");
	printf("1. Falar Oi\n");
	printf("2. Exibir texto\n");
	printf("3. Exibir texto com retorno\n");
	printf("4. Bhaskara\n");
	printf("5. Converter tempo (segundos para h:m:s)\n");
	printf("6. Idade em dias\n");
	printf("7. Numero perfeito\n");
	printf("8. Categoria de nadador\n");
	printf("9. Verifica sinal (positivo/negativo)\n");
	printf("10. Verifica par ou impar\n");
	printf("11. Obter conceito pela nota\n");
	printf("12. Potência (X^Z)\n");
	printf("13. Ordenar 3 numeros\n");
	printf("14. Verificar tipo de triangulo\n");
	printf("15. Calcular media\n");
	printf("0. Sair\n");
	printf("n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
  switch (opcao) {
  case 1:
  falaroi();
  break;
  case 2:
  exibirtexto("Como vai meu rei?");
  break;
  case 3:
  printf("Retorno: %s\n", exibirTexto("Esse eh meu codiguinho :]"));
  break;
  case 4: {
  float a, b, c;
  printf("Digite os coeficientes a, b e c: ");
  scanf("%f %f %f", &a, &b, &c);
  bhaskara(a, b, c);
  break;
  }
  case 5: {
  int tempo;
  printf("Digite o tempo em segundos: ");
  scanf("%d", &tempo);
  convertertempo(tempo);
  break;
}
  case 6: {
  int anos, meses, dias;
printf("Digite anos, meses e dias: ");
scanf("%d %d %d", &anos, &meses, &dias);
printf("Idade em dias: %d\n", idadeemdias(anos, meses, dias));
break;
}
case 7: {
int num;
printf("Digite um numero: ");
scanf("%d", &num);
printf("%d %s um numero perfeito.\n", num, numeroperfeito(num) ? "eh" : "nao eh");
break;
}
case 8: {
int idade, categoria;
printf("Digite a idade: ");
scanf("%d", &idade);
categorianadador(idade, &categoria);
if (categoria == 1) printf("Categoria: Infantil A\n");
if (categoria == 2) printf("Categoria: Infantil B\n");
if (categoria == 3) printf("Categoria: Juvenil A\n");
if (categoria == 4) printf("Categoria: Juvenil B\n");
if (categoria == 5) printf("Categoria: Adulto\n");
break;
}
case 9: {
int valor;
printf("Digite um numero: ");
scanf("%d", &valor);
int resultado = verificasinal(valor);
if (resultado == 1) printf("Positivo\n");
if (resultado == -1) printf("Negativo\n");
if (resultado == 0) printf("Zero\n");
break;
}
case 10: {
int valor;
printf("Digite um numero: ");
scanf("%d", &valor);
printf("%d eh %s\n", valor, verificapar(valor) ? "Par" : "Impar");
break;
}
case 11: {
float nota;
printf("Digite a nota: ");
scanf("%f", &nota);
char conceito = obtermedia(nota);
if (conceito != 'X') printf("Conceito: %c\n", conceito);
else printf("Nota invalida.\n");
break;
}
case 12: {
int base, expoente;
printf("Digite base e expoente: ");
scanf("%d %d", &base, &expoente);
printf("%d elevado a %d = %d\n", base, expoente, potenciadois(base, expoente));
break;
}
case 13: {
int a, b, c;
printf("Digite tres numeros: ");
scanf("%d %d %d", &a, &b, &c);
ordenarcrescente(a, b, c);
break;
}
case 14: {
float l1, l2, l3;
printf("Digite os lados do triangulo: ");
scanf("%f %f %f", &l1, &l2, &l3);
verificartriangulo(l1, l2, l3);
break;
}
case 15:
printf("Media dos valores: %.2f\n", calcularmedia());
break;
case 0:
printf("Encerrando...\n");
break;
}
printf("\n");

} while (opcao != 0);
return 0;
}
