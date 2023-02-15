#include <stdio.h> 
// -*- coding: utf-8 -*-
// Escreva programa que calcule preço a pagar 
// pelo fornecimento de energia elétrica.
// Solicite o consumo em kWh consumidas e o tipo 
// de instalação:
//    R para residencial, I para industrial e 
//    C para comercial.
// Calcule o valor da conta a pagar de acordo 
// com a tabela:
// 
//    TIPO     Faixa kWh      preço R$
//    ================================
//    R        até 500         2
//             acima de 500    3
//    --------------------------------
//    C        até 1000        4
//             acima de 1000   5
//    --------------------------------
//    I        até 5000        6
//             acima de 5000   7
//    --------------------------------


int main ()
{
    char tipo;
    int consumo;
    int conta;
   
    printf("Tipo de instalacao (R,C,I): ");
    scanf("%c", &tipo);
    
    printf("Digite o consumo em kWh: ");
    scanf("%d", &consumo);
    printf("\n");

    printf("Tipo: %c \n", tipo);
    printf("consumo: %d \n", consumo);
 

    if (tipo == 'R')
    {
        if (consumo <= 500)
        {
            (conta= consumo *2);
            printf("Conta a ser paga: %d",conta);

        }
        else
        {
            (conta= consumo *3);
            printf("Conta a ser paga: %d",conta);
        }
    }

    if (tipo == 'C')
    {
        if (consumo <= 1000)
        {
            (conta= consumo *4);
            printf("Conta a ser paga: %d",conta);

        }
        else
        {
            (conta= consumo *5);
            printf("Conta a ser paga: %d",conta);
        }
    }
    if (tipo == 'I')
    {
        if (consumo <= 5000)
        {
            (conta= consumo *6);
            printf("Conta a ser paga: %d",conta);

        }
        else
        {
            (conta= consumo *7);
            printf("Conta a ser paga: %d",conta);
        }
    }
   

    //printf("conta: %f",conta);

    return (0);
}
