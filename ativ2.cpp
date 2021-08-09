/* Ler uma temperatura em graus Celsius e exibi-la convertida em graus Fahrenheit. A fórmula de conversão a ser utilizada é 
F = ( 9 * C + 160 ) / 5, em que a variável F representa a temperatura em graus Fahrenheit e a variável C a temperatura em graus Celsius*/

#include<iostream>

float ConverteCparaF(float numero);
int main(){

    float celsius = 0.0;

    std::cout << "Digite a temperatura em celsius para converter para Fahrenheit: ";
    std::cin >> celsius;

    float convertido = ConverteCparaF(celsius);
    std::cout << "A temperatura convertida para Fahrenheit é de: " << convertido ;
    std::cout << "\n";

    return 0;
}

float ConverteCparaF(float numero){
    float formula = ( 9 * numero + 160 ) / 5;
    return formula;
}