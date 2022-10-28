#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
using std::ostream;
using std::cout;
using std::string;


class Veiculo
{
    public:
        void setTipoDeVeiculo(const string &);
        string getTipoDeVeiculo() const;

    protected:
        int tipo;
        int velMax;
        bool armamento;
        int velocidade;
        int blind;
        int rodas;
        static const int QUANTIDADETIPOSDEVEICULOS = 3;
        static const string TIPOSDEVEICULOS[ QUANTIDADETIPOSDEVEICULOS ];

        string tipoDeVeiculo;
};




#endif //VEICULO_H