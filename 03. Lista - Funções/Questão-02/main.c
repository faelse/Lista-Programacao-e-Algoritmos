/*
Carlos  está  desenvolvendo  um  aplicativo  para  sua  academia,  mas  está  enfrentando 
dificuldades ao aplicar o cálculo do peso ideal. Ele solicitou sua ajuda para criar uma função 
chamada "pesoIdeal" que receba a altura e o sexo (1 para masculino e 2 para feminino) como 
argumentos. A função deve calcular e retornar o peso ideal da pessoa. Além disso, crie um 
pequeno programa para testar a função.

Fórmula do peso ideal: 

* • Para homens: (72.7∗ℎ)−58 
* • Para mulheres: (62.1∗ℎ)−44.7     

Observação: Altura = ℎ (na fórmula acima).

*/

#include <stdio.h> 

float pesoIdeal(float sexo, float altura) {
    float peso_ideal;

    if(sexo = 1) {
        peso_ideal = (72.7*altura)-58;
    }if(sexo =2 ){
        peso_ideal = (62.1*altura)-44.7;
    }else{
        printf("Valor invalido.");
    }

    return(peso_ideal);
}


int main() {
    float sexo, altura, peso_ideal;
    
    
    printf("Diga o sexo : \n 1 = Masculino \n 2 = Feminino \n");
    scanf("%f", &sexo); 
    printf("Digite a altura : \n");
    scanf("%f", &altura);

    printf("Seu peso ideal é : %.2f", pesoIdeal(sexo, altura));

    return 0;
}