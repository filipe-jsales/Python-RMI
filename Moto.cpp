#include "Moto.h"

Moto::Moto()
{
    this->velocidadeMaxima = 230.0;
    this->rodas = 2;
    this->velocidadeAtual = 0.0;
    this->blindagem = false;
    this->setTipoDeVeiculo("moto");
}