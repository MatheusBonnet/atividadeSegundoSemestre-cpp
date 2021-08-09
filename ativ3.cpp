/*Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius. 
A fórmula de conversão a ser utilizada é C = (( F – 32 ) * 5) / 9, em que a variável F representa a temperatura em graus Fahrenheit e a 
variável C a temperatura em graus Celsius.
*/

#include<iostream>

float ConverteFparaC(float numero);
int main(){

    float fahrenheit = 0.0;

    std::cout << "Digite a temperatura em Fahrenheit para converter para Celsius: ";
    std::cin >> fahrenheit;

    float convertido = ConverteFparaC(fahrenheit);
    std::cout << "A temperatura convertida para Celsius é de: " << convertido ;
    std::cout << "\n";

    return 0;
}

float ConverteFparaC(float numero){
    float formula = (( numero - 32 ) * 5) / 9;
    return formula;
}