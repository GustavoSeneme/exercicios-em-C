#include<stdio.h>

int main(void)
{
int idade;
float altura;
char nome{50};

  idade = 20;
  altura = 1.70;
  strcpy (nome, "Gustavo");
  
  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Altura: %.2f\n", altura);

  return 0;
}