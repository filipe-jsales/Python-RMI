#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
using std::cout;
using std::ostream;
using std::string;

class Veiculo
{
    friend ostream &operator<<(ostream &, const Veiculo &);

public:
    Veiculo();
    Veiculo(int);
    Veiculo(const Veiculo &);
    void setTipoDeVeiculo(const string &);
    string getTipoDeVeiculo() const;
    void setVelocidadeAtual(float);
    float getVelocidadeAtual();
    void setRodas(int);
    int getRodas();

    bool operator!=(const Veiculo &) const;
    bool operator==(const Veiculo &) const;
    bool operator!() const;
    void operator=(const Veiculo &);

protected:
    float velocidadeMaxima;
    float velocidadeAtual;
    int rodas;
    static const int QUANTIDADETIPOSDEVEICULOS = 2;
    const string TIPOSDEVEICULOS[QUANTIDADETIPOSDEVEICULOS] = {"Carro", "Moto"};
    string tipoDeVeiculo;
    static int quantidadeVeiculos;
};

#endif // VEICULO_H