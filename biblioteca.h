//1
int falaroi() {
    printf("OI\n");
    return 0;
}
//2
void exibirtexto(char texto[]) {
    printf("%s", texto);
}
//3
char* exibirTexto(char texto[]) {
    printf("%s\n", texto);
    return "Ok";
}
//4
void bhaskara(float a, float b, float c) {
    float delta, raiz1, raiz2;
    delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("\nNao da pra calcular as raizes.\n");
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nRaiz 1: %.2f\n", raiz1);
        printf("\nRaiz 2: %.2f\n", raiz2);
    }
}
//5
void convertertempo(int totalsegundos) {
    int horas, minutos, segundos;
    horas = totalsegundos / 3600;
    minutos = (totalsegundos % 3600) / 60;
    segundos = totalsegundos % 60;
    printf("\nTempo: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
}
//6
int idadeemdias(int anos, int meses, int dias) {
    int total;
    total = (anos * 365) + (meses * 30) + dias;
    return total;
}
//7
int numeroperfeito(int numero) {
    int inteiro, soma = 0;
     for (inteiro = 1; inteiro < numero; inteiro++) {
     if (numero % inteiro == 0) {
    soma = soma + inteiro;
    }
    }
    if (soma == numero) {
     return 1;
    } else {
     return 0;
    }
}
//8
void categorianadador(int idade, int *categoria) {
    if (idade >= 5 && idade <= 7) {
        *categoria = 1;
    }if (idade >= 8 && idade <= 10) {
        *categoria = 2;
    }if (idade >= 11 && idade <= 13) {
        *categoria = 3;
    }if (idade >= 14 && idade <= 17) {
        *categoria = 4;
    }if (idade >= 18) {
        *categoria = 5;
    } else {
        *categoria = 0;
    }
}
//9
int verificasinal(int numerodois) {
    if (numerodois > 0) {
      return 1;
    }if (numerodois < 0) {
      return -1;
    } else {
      return 0;
    }
}
//10
int verificapar(int numerotres) {
    if (numerotres % 2 == 0) {
      return 1;
    } else {
      return 0;
    }
}
//11
char obtermedia(float media) {
    if (media >= 0.0 && media <= 4.9) {
      return 'D';
    } if (media >= 5.0 && media <= 6.9) {
      return 'C';
    } if (media >= 7.0 && media <= 8.9) {
      return 'B';
    } if (media >= 9.0 && media <= 10.0) {
      return 'A';
    } else {
      return 'X';
    }
}
//12
void ordenarcrescente(int a, int b, int c) {
    int ordem;
    if (a > b) {
     ordem = a;
     a = b;
     b = ordem;
    }
    if (a > c) {
     ordem = a;
     a = c;
     c = ordem;
    }
    if (b > c) {
     ordem = b;
     b = c;
     c = ordem;
    }
    printf("Ordem crescente: %d %d %d\n", a, b, c);
}
//13
    void verificartriangulo(float x, float y, float z) {
	if ((x < y + z) && (y < x + z) && (z < x + y)) {
      printf("Eh um triangulo.\n");
      if (x == y && y == z) {
      printf("\nTipo: Equilatero\n");
     } if (x == y || x == z || y == z) {
       printf("Tipo: Isosceles\n");
    } if(x != y && x!= z && y!= x && z!= x) {
      printf("Tipo: Escaleno\n");
        }
    } else {
      printf("Os valores nao fazem um triangulo.\n");
    }
}
//14
#include <stdio.h>

float calcularmedia() {
    int valorquatro, somadois = 0, quantidade = 0;
    float mediadois;
    printf("\nDigite numeros positivos (numero negativo para parar):\n");
    while (1) {
      scanf("%d", &valorquatro);
     if (valorquatro < 0) {
     break;
    }
     somadois += valorquatro;
     quantidade++;
    }
    if (quantidade > 0) {
	mediadois = (float)somadois / quantidade;
    } else {
      mediadois = 0;
    }
    return mediadois;
}
//15
int potenciadois(int x, int z) {
    int resultadodois = 1;
    for (int inte = 0; inte < z; inte++) {
     resultadodois *= x;
    }
    return resultadodois;
}