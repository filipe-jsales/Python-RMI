#include <iostream>
using namespace std;
#include <stdexcept>
#include <vector>
using std::vector;

#include "Moto.h"
#include "Veiculo.h"
#include "Biz.h"
#include "Carro.h"
#include "Sanchez.h"

int main()
{
    Veiculo veiculo1(2);
    cout << "Tipo de veiculo: " << veiculo1.getTipoDeVeiculo(); // moto

    Moto moto1();

    // Biz::Biz(int ano, string placa)
    Biz bizinha(2011, "BEE4R22");

    Biz biz2009(bizinha);
    cout << veiculo1;
    // out << "Quantidade de rodas" << '\n';
    // out << veiculo.rodas;
    // out << '\n';

    // out << "Tipo de veiculo" << '\n';
    // out << veiculo.tipoDeVeiculo; moto
    // out << '\n';

    // out << "Velocidade maxima" << '\n';
    // out << veiculo.velocidadeMaxima; //300.0
    // out << '\n';

    cout << moto1;

    // out << "Cilindradas:" << '\n';
    //  out << moto1.cilindradas; 120
    //  out << '\n';

    // out << "Economico?" << '\n';
    // out << moto1.economico; 1
    // out << '\n';

    // out << "Freio abs?" << '\n';
    // out << moto1.freioAbs; 1
    // out << '\n';

    cout << bizinha;
    // this->ano = ano;
    // this->placa = placa;
    // this->setEconomico(true);

    moto1.darOGrau();
    // cout << "Dando o grau VRUUM "

    return 0;
}