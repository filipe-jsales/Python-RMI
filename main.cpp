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
    Veiculo( const Veiculo &veiculoOut )
    {
        this->tipoDeVeiculo = veiculoOut.tipoDeVeiculo;
        this->rodas = veiculoOut.rodas;
        this->velocidadeAtual = veiculoOut.velocidadeAtual;
        this->velocidadeMaxima = veiculoOut.velocidadeMaxima;

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
        this->setRodas(2);
    };
    Moto( bool economico, bool freioAbs, float velocidadeMaxima )
    {
        this->economico = economico;
        this->freioAbs = freioAbs;
        this->velocidadeMaxima = velocidadeMaxima;
    }

    Moto( const Moto &veiculoOut )
    {
        this->tipoDeVeiculo = veiculoOut.tipoDeVeiculo;
        this->rodas = veiculoOut.rodas;
        this->velocidadeAtual = veiculoOut.velocidadeAtual;
        this->velocidadeMaxima = veiculoOut.velocidadeMaxima;
        this->economico = veiculoOut.economico;
        this->cilindradas = veiculoOut.cilindradas;
        this->freioAbs = veiculoOut.freioAbs;
    }

    void darOGrau( )
    {
        cout << "Dando o grau VRUUM " << "\n";
    }

    void setModelo( const int &cilindradas)
    {
        this->cilindradas = cilindradas;
    }
    int getModelo( )const 
    {
        return this->cilindradas;
    }
    void setFreioAbs(const bool freioAbs)
    {
        this->freioAbs = freioAbs;
    }
    bool getFreioAbs( )
    {
        return this->freioAbs;
    }
    bool setEconomico( const bool economico)
    {
        this->economico = economico;
    }
    bool getEconomico( )
    {
        return this->economico;
    }

    protected:
    float economico = true;
    int cilindradas;
    bool freioAbs;
    int rodas = 2;

};
 
class Biz: public Moto
{
    public:
    Biz():  Moto()
    {
        this->setPlaca("sem-placa");
        this->setEconomico("true");
        this->ano = 0;
    };
    Biz( int ano, string placa)
    {
        this->ano = ano;
        this->placa = placa;
        this->setEconomico(true);
    }

    Biz( const Biz &veiculoOut )
    {
        this->tipoDeVeiculo = veiculoOut.tipoDeVeiculo;
        this->rodas = veiculoOut.rodas;
        this->velocidadeAtual = veiculoOut.velocidadeAtual;
        this->velocidadeMaxima = veiculoOut.velocidadeMaxima;
        this->economico = veiculoOut.economico;
        this->cilindradas = veiculoOut.cilindradas;
        this->freioAbs = veiculoOut.freioAbs;
        this->ano = veiculoOut.ano;
        this->placa = veiculoOut.placa;
    }

    void setPlaca(const string &placa)
    {
        this->placa = placa;
    }
    string getPlaca( ) const
    {
        return this->placa;
    }

    bool operator!() const{
        if(ano <= 0){
            cout << "Ano do veiculo nao informado" << '\n';
            return false;
        }
        return true;
    }

    bool operator==( const int &anoInput )const{
        cout <<"Operador ==" <<'\n';
        if(ano == anoInput){
            cout<< "Veiculo equipado com freios ABS"<<'\n';
            return true;
        }
        
        return false;
    }

    protected:
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

    Biz biz;


    cout << biz.getRodas();

    


    return 0;
}