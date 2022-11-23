#include "Veiculo.h"

#include <iostream>
using std::cout;
using std::string;

Veiculo::Veiculo()
    : velocidadeMaxima(300.0), rodas(0), velocidadeAtual(0.0)
{
    Veiculo::quantidadeVeiculos++;
}

Veiculo::Veiculo(int rodasOut)
    : rodas(rodasOut)
{
    if (rodas == 2)
    {
        this->setTipoDeVeiculo("moto");
        this->rodas = rodas;
        return;
    }
    if (rodas == 4)
    {
        this->setTipoDeVeiculo("carro");
        this->rodas = rodas;
        return;
    }
    throw std::invalid_argument("Valor invalido de rodas");
}

// construtor de copia
Veiculo::Veiculo(const Veiculo &veiculoOut)
{
    this->tipoDeVeiculo = veiculoOut.tipoDeVeiculo;
    this->rodas = veiculoOut.rodas;
    this->velocidadeAtual = veiculoOut.velocidadeAtual;
    this->velocidadeMaxima = veiculoOut.velocidadeMaxima;
}
Veiculo::~Veiculo( )
{
    quantidadeVeiculos --;
}

void Veiculo::setTipoDeVeiculo(const string &tipoDeVeiculo)
{
    if (tipoDeVeiculo != "carro" || "moto")
    {
        throw std::invalid_argument( "Tipo de veiculo invalido" );
        return;
    }
    this->tipoDeVeiculo = tipoDeVeiculo;
}

string Veiculo::getTipoDeVeiculo() const
{
    return this->tipoDeVeiculo;
}

void Veiculo::setVelocidadeAtual(float velocidadeAtual)
{
    // checa se a velocidade atual é maior que a máxima permitida
    if (velocidadeAtual > this->velocidadeMaxima)
        this->velocidadeAtual = velocidadeMaxima;

    this->velocidadeAtual = velocidadeAtual;
}

float Veiculo::getVelocidadeAtual()
{
    return this->velocidadeAtual;
}

void Veiculo::setRodas(int rodas)
{

    this->rodas = rodas;
}

int Veiculo::getRodas()
{
    return this->rodas;
}

ostream &operator<<(ostream &out, const Veiculo &veiculo)
{
    out << "Quantidade de rodas" << '\n';
    out << veiculo.rodas;
    out << '\n';

    out << "Tipo de veiculo" << '\n';
    out << veiculo.tipoDeVeiculo;
    out << '\n';

    out << "Velocidade maxima" << '\n';
    out << veiculo.velocidadeMaxima;
    out << '\n';

    return out;
}

bool Veiculo::operator!=(const Veiculo &rodas) const
{
    cout << "Operador !=" << '\n';
    if (rodas != 0)
        return true;
    return false;
}

bool Veiculo::operator==(const Veiculo &rodasOut) const
{
    cout << "Operador ==" << '\n';
    if (rodasOut == rodas)
    {
        cout << "Veículo está com todas as rodas presentes" << '\n';
        return true;
    }

    return false;
}
bool Veiculo::operator!() const
{
    if (rodas == 0)
    {
        cout << "Veículo sem rodas " << '\n';
        return false;
    }
    return true;
}
