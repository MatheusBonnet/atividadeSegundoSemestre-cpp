/*Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em Kelvin. Para conversão deve-se primeiro converter em 
graus Celsius conforme exercício anterior, e depois converter em Kelvin.*/

#include<iostream>

float converteParaCelsius(float numero){
    float formulaCelsius = (( numero - 32 ) * 5) / 9;
    return formulaCelsius;
}

float converteParaKelvin(float numero){
    float formula = numero + 273.15;
    return formula;
}

int main(){

    float temp = 0.0;

    std::cout << "Digite a temperatura em Fahrenheit para converter para Kelvin: ";
    std::cin >> temp;

    float convertido = converteParaCelsius(temp);
    float convertidoParaKelvin = converteParaKelvin(convertido);

    std::cout << "A temperatura convertida para Kelvin é de: " << convertidoParaKelvin ;
    std::cout << "\n";

    return 0;
}