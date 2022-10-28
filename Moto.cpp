#include "Moto.h"

Moto::Moto( )
:velocidadeMaxima(230.0), rodas(2), blindagem(false), setTipoDeVeiculo("moto")
{
    this->setVelocidadeAtual(0.0);
}

Moto::Moto override( float velocidadeAtual )
{
    setVelocidadeAtual( velocidadeAtual );
}