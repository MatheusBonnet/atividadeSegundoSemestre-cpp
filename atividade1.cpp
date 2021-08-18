#include <iostream>

int main(){

    float tempoDaViagem = 0;
    float velocidadeMedia = 0.0;
    float distancia = 0.0;
    float litroUsado = 0.0;

    std::cout<< "Digite o tempo da sua viagem: ";
    std::cin>> tempoDaViagem;
    std::cout<< "Digite a velocidade meédia: ";
    std::cin>> velocidadeMedia;

    distancia = (tempoDaViagem * velocidadeMedia);
    litroUsado = (distancia / 12);

    std::cout<< "Velocidade média: " << velocidadeMedia; 
    std::cout<< "\n";
    std::cout<< "Tempo gasto: " << tempoDaViagem;
    std::cout<< "\n";
    std::cout<< "Distância percorrida: " << distancia;
    std::cout<< "\n";
    std::cout<< "Quantidade de litros utilizada na viagem: " << litroUsado;
    std::cout<< "\n";

    return 0;
}
