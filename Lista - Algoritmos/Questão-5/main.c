/*
Um médico está realizando uma pesquisa sobre saúde e deseja calcular o IMC (Índice
de Massa Corporal) de seus pacientes. Ele tem as seguintes informações:
O IMC é calculado pela fórmula:

𝐼𝑀𝐶 =𝑃𝑒𝑠𝑜 / 𝐴𝑙𝑡𝑢𝑟𝑎²

O peso dos pacientes é dado em quilogramas (kg) e a altura em metros (m).
Crie um algoritmo que, dado o peso e a altura de um paciente, calcule o IMC e forneça
uma classificação de acordo com a tabela abaixo:

IMC abaixo de 18.5: Abaixo do peso
IMC entre 18.5 e 24.9: Peso normal
IMC entre 25.0 e 29.9: Sobrepeso
*/

#include <stdio.h> 

int main() {
    float altura, peso;
    float IMC;
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m) : ");
    scanf("%f", &altura); 

    IMC = peso / (altura * altura);

    if (IMC <= 18.5) {
        printf("%.2f", IMC);
        printf(" Abaixo do peso");
    }
    else if(IMC <= 24.9) {
        printf("%.2f", IMC);
        printf(" Peso normal");
    }else {
        printf("%.2f", IMC);
        printf(" Sobrepeso");
    };
    return 0;
}
