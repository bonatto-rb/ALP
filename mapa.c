#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void tela(){
    system("cls");
    printf("Programa de Triagem Seletiva\n");
    printf("----------------------------\n\n");
}

int main(){
    int opcao, cpf, idade;
    char nome[50], sexo, febre, cabeca, secrecao_espirro;
    tela();
    printf("Iniciar atendimento?\n\n");
    printf("1 - SIM\n");
    printf("2 - NAO\n");
    printf("\n\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    fflush(stdin);
    if (opcao == 1){
        tela();
        printf("Preencha seu cadastro:\n\n");
        printf("- CPF (apenas os numeros): ");
        scanf("%d", &cpf);
        printf("\n");
        printf("- Nome (sem caracteres especiais): ");
        scanf("%s", &nome);
        printf("\n");
        printf("- Sexo (M - Masculino / F - Feminino): ");
        scanf("%c", &sexo);
        printf("\n");
        printf("- Idade: ");
        scanf("%d", &idade);
        tela();
        printf("Preencha o questionario:\n\n");
        printf("- Tem Febre?\n")
        printf("Digite 's' para SIM ou 'n' para NAO": );
        scanf("%c", &febre);
        printf("\n");
        printf("- Tem dor de cabeca?\n")
        printf("Digite 's' para SIM ou 'n' para NAO": );
        scanf("%c", &cabeca);
        printf("\n");
        printf("- Tem secrecao ou espirros?\n")
        printf("Digite 's' para SIM ou 'n' para NAO": );
        scanf("%c", &secrecao_espirro);
        printf("\n");
        
    }
    return (0);    
}