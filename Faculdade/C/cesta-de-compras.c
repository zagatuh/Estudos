#include <stdio.h>
#include <string.h>

void recebeNome(char *nome) {
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", nome);
}

void recebePreco(float *preco) {
    printf("Digite o preço do produto: ");
    scanf("%f", preco);
}

void recebeInteresse(int *opcao) {
    printf("Digite o seu interesse (-1, 0, 1): ");
    scanf("%d", opcao);
}

int main() {
    
    int max;    
    float dinheiro;
    float total = 0;

    printf("Quantos produtos?: ");
    scanf("%d", &max);
    printf("Qual o orçamento?: ");
    scanf("%f", &dinheiro);
    
    char nome[max][50];
    float preco[max];
    int opcao[max];
    int compra_interessante[max];
    int qtd = 0;

    for(int i = 0; i < max; i++) {
        recebeNome(nome[i]);
        recebePreco(&preco[i]);
        dinheiro -= preco[i]; 
        if(dinheiro < 0) {
            printf("Está fora de orçamento! Volte mais tarde\n"); 
            break;
        }
        recebeInteresse(&opcao[i]);
        if(opcao[i] == 1) {
            compra_interessante[qtd] = i;
            qtd++;
        }
        total += preco[i];
    }
    
    printf("A compra mais interessante é: ");
    for(int i = 0; i < qtd; i++) {
        printf("\n°%s", nome[compra_interessante[i]]);
    }
        
    printf("\nO valor total ficou em: %.2f", total);
    
    return 0;
}

