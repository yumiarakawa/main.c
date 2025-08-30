#include <stdio.h>

int main(){

    while (1 + 1 == 2){
        printf("===============================\n   Calculadora Simples\n===============================\n");
        printf("Selecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao: ");

        int A;
        scanf("%d", &A);

        if (A == 5){
            break;
        }

        while (A > 5 || A < 1){
            printf("Opcao invalida. Selecione uma opcao valida.\n");
            printf("Selecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao: ");
            scanf("%d", &A);
        }

        printf("Digite o primeiro numero: ");
        int B;
        scanf("%d", &B);

        printf("Digite o segundo numero: ");
        int C;
        scanf("%d", &C);

        if (A == 1){
            printf("Resultado: %d + %d = %d \n", B, C, B+C);
        } else if (A == 2){
            printf("Resultado: %d - %d = %d \n", B, C, B-C);
        } else if (A == 3){
            printf("Resultado: %d * %d = %d \n", B, C, B*C);
        } else if (A == 4){
            if(C != 0){
                printf("Resultado: %d / %d = %d \n", B, C, B/C);
            } else {
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            }
        }
        
        char simounao;
        
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &simounao);
        if (simounao == 'n'){
            break;
        }
    }

    printf("Obrigado por usar a calculadora! Ate a proxima.");

}
