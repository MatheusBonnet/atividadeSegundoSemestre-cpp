/*Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Kelvin. A fórmula para conversão 
é K = C + 273.15, onde K é a temperatura em Kelvin e C é a temperatura em graus Celsius.*/

#include<iostream>

float Converte(float numero);
int main(){

    float temp = 0.0;

    std::cout << "Digite a temperatura em Celsius para converter para Kelvin: ";
    std::cin >> temp;

    float convertido = Converte(temp);
    std::cout << "A temperatura convertida para Kelvin é de: " << convertido ;
    std::cout << "\n";

    return 0;
}

float Converte(float numero){
    float formula = numero + 273.15;
    return formula;
}