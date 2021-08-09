/* Ler um valor inteiro qualquer positivo ou negativo e apresentar o número lido como um valor positivo.*/

#include <iostream>

int converterParaPositivo(int num);
int main(){

    int numero = 0;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    if(numero > 0){
        std::cout << numero;
        std::cout << "\n";
    }
    else{
        int numeroConvertido = converterParaPositivo(numero);
        std::cout << numeroConvertido;
        std::cout << "\n";
    }

}

int converterParaPositivo(int num){
    int formula  = num * -1;
    return formula;
}