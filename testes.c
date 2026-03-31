#include <stdio.h>

int main (){

    char produtoA[30] = "Coca-cola";
    char produtoB[30] = "Pepsi";

    unsigned int estoqueA = 2000;
    unsigned int estoqueB =1000;

    float valorA = 10.50;
    float valorB = 6.99;

    unsigned int estoqueminA = 500;
    unsigned int estoqueminB = 1200;

    double valorTotalA;
    double valorTotalB;

    int resultadoA;
    int resultadoB;

    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;

    printf("Produto %s tem estoque %u e valor unitário de %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e valor unitário de %.2f\n", produtoB, estoqueB, valorB);    

    resultadoA = estoqueA > estoqueminA;
    resultadoB = estoqueB > estoqueminB;

    printf("O produto %s tem estoque acima do mínimo? %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque acima do mínimo? %d\n", produtoB, resultadoB);

    printf("O valor total de %s (R$ %.2f) é maior que o valor total de %s (R$ %.2f)? %d\n", produtoA, (estoqueA * valorA), produtoB, (estoqueB * valorB), valorTotalA > valorTotalB);
    return 0;


}