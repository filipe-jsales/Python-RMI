#include<iostream>
using namespace std;
#include <stdexcept>

class Veiculo
{
    public:

    Veiculo()
    :velocidadeMaxima(300.0), rodas(0), velocidadeAtual(0.0) 
    {
        // Veiculo::quantidadeVeiculos++;
    }

    Veiculo( int rodas)
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
        throw std::invalid_argument( "Valor invalido de rodas" );
        
    }

    //construtor de copia
    Veiculo( const Veiculo &playerOut )
    {
        this->tipoDeVeiculo = playerOut.tipoDeVeiculo;
        this->rodas = playerOut.rodas;
        this->velocidadeAtual = playerOut.velocidadeAtual;
        this->velocidadeMaxima = playerOut.velocidadeMaxima;

    }
    // ~Veiculo( )
    // {
    //     quantidadeVeiculos --;
    // }

    void setTipoDeVeiculo(const string & tipoDeVeiculo)
    {
        if (tipoDeVeiculo != "carro" || "moto")
        {
            // throw std::invalid_argument( "Tipo de veiculo invalido" );
            // return;
        }
        this->tipoDeVeiculo = tipoDeVeiculo;
    }

    string getTipoDeVeiculo() const 
    {
        return this->tipoDeVeiculo;
    }

    void setVelocidadeAtual( float velocidadeAtual )
    {
        //checa se a velocidade atual é maior que a máxima permitida
        if ( velocidadeAtual > this->velocidadeMaxima)
            this->velocidadeAtual = velocidadeMaxima;

        this->velocidadeAtual = velocidadeAtual;
    }

    float getVelocidadeAtual( )
    {
        return this->velocidadeAtual; 
    }

    void setRodas( int rodas )
    {

        this->rodas = rodas;
    }

    int getRodas( )
    {
        return this->rodas; 
    }


    protected:

    float velocidadeMaxima;
    float velocidadeAtual;
    int rodas;
    static const int QUANTIDADETIPOSDEVEICULOS = 2;
    const string TIPOSDEVEICULOS[ QUANTIDADETIPOSDEVEICULOS ] = {"Carro", "Moto"};
    string tipoDeVeiculo;
    static int quantidadeVeiculos;
};
 
class Moto: public Veiculo
{

    public:
    Moto()
    :economico(true)
    {
        this->setTipoDeVeiculo("moto");
    };
    Moto( int rodas)
    {
        this->rodas = rodas;
        if (this->rodas == 2)
            this->setTipoDeVeiculo("moto");
            return;
        if (this->rodas == 4)
            this->setTipoDeVeiculo("carro");
            return;
        
    }

    Moto( const Moto &playerOut )
    {
        this->tipoDeVeiculo = playerOut.tipoDeVeiculo;
        this->rodas = playerOut.rodas;
        this->velocidadeAtual = playerOut.velocidadeAtual;
        this->velocidadeMaxima = playerOut.velocidadeMaxima;
        this->economico = playerOut.economico;
        this->modelo = playerOut.modelo;
        this->freioAbs = playerOut.freioAbs;
    }

    void darOGrau( )
    {
        cout << "Dando o grau VRUUM " << "\n";
    }

    void setModelo( const string &modelo)
    {
        this->modelo = modelo;
    }
    string getModelo( )const 
    {
        return this->modelo;
    }
    void setFreioAbs(const bool freioAbs)
    {
        this->freioAbs = freioAbs;
    }

    private:
    float economico = true;
    string modelo;
    bool freioAbs;


};
 
class Bis: public Moto
{
    public:

    private:
    bool flex;
    int ano;
    string placa;
};

main()
{
    Moto moto1;
    moto1.setFreioAbs(true); 
    // cout << "Tipo de veiculo: " << moto1.getTipoDeVeiculo();

    Veiculo moto2(4);
    cout << "Quantidade de rodas " << moto2.getRodas();
    cout << "Tipo de veiculo: " << moto2.getTipoDeVeiculo();

    


    return 0;
}