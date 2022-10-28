#include "Veiculo.h"

#include <iostream>
using std::cout;
using std::string;

const string Veiculo::TIPOSDEVEICULOS[ QUANTIDADETIPOSDEVEICULOS ] = {"Carro", "Moto"};

Veiculo::Veiculo( )
:velocidadeAtual(0.0)
{

}

// Veiculo::Veiculo( int rodas)
// {
//     this->rodas = rodas;
// }

void Veiculo::setTipoDeVeiculo(const string & tipoDeVeiculo)
{
    this->tipoDeVeiculo = tipoDeVeiculo;
}

string Veiculo::getTipoDeVeiculo() const 
{
    return this->tipoDeVeiculo;
}

void Veiculo::setVelocidadeAtual( float velocidadeAtual )
{
    //checa se a velocidade atual é maior que a máxima permitida
    if ( velocidadeAtual > this->velocidadeMaxima)
        this->velocidadeAtual = velocidadeMaxima;

    this->velocidadeAtual = velocidadeAtual;
}

float Veiculo::getVelocidadeAtual( )
{
    return this->velocidadeAtual; 
}

void Veiculo::setRodas( int rodas )
{
    //checa se a velocidade atual é maior que a máxima permitida
    // if ( velocidadeAtual > this->velocidadeMaxima)
    //     this->velocidadeAtual = velocidadeMaxima;

    this->rodas = rodas;
}

int Veiculo::getRodas( )
{
    return this->rodas; 
}

