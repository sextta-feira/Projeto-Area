#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main()
{
  int a = 1;
  while ( a != 0 )
  {
    system("clear");
    printf(" /----------------------------/\n      SEJA BEM VINDO\n /---------------------------/\n");
    printf("\n");
    printf(" Eu vou te ajudar a encontrar areas e perimetros hehe.\n Escolha:\n 0 ->Sair\n 1-> Area\n 2-> Perimetro\n");
    int i = get_int(" Eae? Qual vai ser? ");

    if ( i == 1 )
    {
        system("clear");
        printf(" /----------------------------/\n");
        printf(" Vamos trabalhar com área\n Escolha sua figura\n");
        printf("  Triangulo --> 1          Retangulo --> 2\n  Hexagono --> 3           Losongo -->4\n");
        int j = get_int("Qual sua figura? ");
        printf(" /----------------------------/\n");

          if ( j == 1 )
          {
            printf(" Voce escolheu Triangulo\n");
            float k = get_float("  Qual a base? ");
            float l = get_float("  Qual a altura? ");
            float z = (float) k * l / 2;
            printf("   Sua area é:%.2fm²\n", z);
            printf("\n");
            printf("  Se desejar sair aperte 0\n  Se deseja continuar qualquer numero.\n");
            a = get_int("   Insira o valor: ");

         }
         else if ( j == 2 )
         {
                 printf(" Voce escolheu Retangulo\n");
                 float k = get_float("  Qual a largura? ");
                 float l = get_float("  Qual o comprimento? ");
                 float z = (float) k * l;
                 printf("   Sua area é:%.2fm²\n", z);
                 printf("\n");
                 printf("  Se desejar sair aperte 0\n  Se deseja continuar qualquer numero.\n");
                 a = get_int("   Insira o valor: ");
         }
         else if ( j == 3 )
         {
                 printf(" Voce escolheu Hexagono\n");
                 float k = get_float("  Qual a base maior? ");
                 float l = get_float("  Qual a base menor? ");
                 float y = get_float("  Qual a altura? ");
                 float z = (float) (k + l) * y / 2;
                 printf("   Sua area é:%.2fm²\n", z);
                 printf("\n");
                 printf("  Se desejar sair aperte 0\n  Se deseja continuar qualquer numero.\n");
                 a = get_int("   Insira o valor: ");
         }
         else if ( j == 4 )
         {
                 printf("  Vc escolheu Losango\n");
                 float k = get_float("  Qual a diagonal maior? ");
                 float l = get_float("  Qual a diagonal menor? ");
                 float z = (float) (k * l) / 2;
                 printf("   Sua area é:%.2fm²\n", z);
                 printf("\n");
                 printf("  Se desejar sair aperte 0\n  Se deseja continuar qualquer numero.\n");
                 a = get_int("   Insira o valor: ");
         }
         else
         {
             printf("Vc está de brincadeira comigo?\n");
             sleep(2);
             system("clear");
             printf("Vamos tentar de novo\n");
         }
    }
    else if ( i == 2 )
    {
           system("clear");
           printf(" /----------------------------/\n");
           printf(" Vamos trabalhar com perimetro\n Escolha sua figura\n");
           int i = get_int("  Quantos lados tem sua figura? ");
           float r = 0;
           printf(" /----------------------------/\n");
             if ( i < 3 )
             {
                 printf("Hahaha muito engraçado\n");
                 sleep(3);
             }
             else
                 {
                   for (int j = 0; j < i; j++)
                   {
                       float m = get_float ("  Qual o valor do lado? ");
                       r = r + m;
                   }
                  printf("   Seu perimetro é:%.2f\n", r);
                  printf("\n");
                  printf("  Se desejar sair aperte 0\n  Se deseja continuar qualquer numero.\n");
                  a = get_int("   Insira o valor: ");
                 }
    }
    else if ( i == 0)
             return 1;
    else
    {
        printf("Primeiro vai aprender a contar\n");
        sleep(3);
        system("clear");
        printf("Vamos tentar de novo\n");
        sleep(2);
    }
  }
 return 0;
}

