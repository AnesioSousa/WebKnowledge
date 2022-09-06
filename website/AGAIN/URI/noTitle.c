#include <stdio.h>

main()
{
        int codigo, qtd;

        scanf("%d %d", &codigo, &qtd);
        switch (codigo)
        {
        case 1:
                printf("Total R$ %.2f\n", 4.00 * qtd);
                break;
        case 2:
                printf("Total R$ %.2f\n", 4.50 * qtd);
                break;
        case 3:
                printf("Total R$ %.2f\n", 5.00 * qtd);
                break;
        case 4:
                printf("Total R$ %.2f\n", 2.00 * qtd);
                break;
        case 5:
                printf("Total R$ %.2f\n", 1.50 * qtd);
                break;
        default:
                printf("Total R$ %.2f\n", codigo * qtd);
                break;
        }
}

/*
main(){
     float numero;

    scanf("%f", &numero);
    if(numero >= 0 && numero <=25)
            printf("Intervalo [0,25]\n");
    else if( numero > 25 && numero <=50)
            printf("Intervalo (25,50]\n");
    else if(numero > 50 && numero <=75)
            printf("Intervalo (50,75]\n");
    else if(numero > 75 && numero <=100)
            printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
}










*/