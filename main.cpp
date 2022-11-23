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

    Carro carro1();

    Biz bizinha(2011, "BEE4R22");
    cout << "Veiculo de 2 rodas: \n";
    Biz biz2011(bizinha);
    cout << veiculo1;


    cout << moto1;

    cout << "bizinha: \n";
    cout << bizinha;

    // moto1.darOGrau();

    cout << "Carro generico: \n";
    cout << carro1;


    return 0;
}