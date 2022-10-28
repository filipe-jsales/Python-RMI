#include "Moto.h"

Moto::Moto()
:velocidadeMaxima(230.0), rodas(2), blindagem(false), setTipoDeVeiculo("moto")
{
    this->velocidadeAtual = 0.0;
}
Moto::Moto(float velocidadeAtual)
:velocidadeMaxima(230.0), rodas(2), blindagem(false), setTipoDeVeiculo("moto")
{
    setVelocidadeAtual( velocidadeAtual );
}