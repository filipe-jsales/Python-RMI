#include<iostream>
using namespace std;
 
class Veiculo
{
    public:

    Veiculo()
    {
        setVelocidadeAtual(0);
    }
    Veiculo( int rodas)
    {
        this->rodas = rodas;
        if (this->rodas == 2)
            this->setTipoDeVeiculo("moto");
            return;
        if (this->rodas == 4)
            this->setTipoDeVeiculo("carro");
            return;
        
    }
    Veiculo( const Veiculo &playerOut )
    {
        this->tipoDeVeiculo = playerOut.tipoDeVeiculo;
        this->rodas = playerOut.rodas;
        this->blindagem = playerOut.blindagem;

        // this->socialMediaConection.resize( playerOut.socialMediaConection.size() );
        // for( int i = 0; i < this->socialMediaConection.size( ); i++ )
        //     this->socialMediaConection[ i ] = playerOut.socialMediaConection[ i ];
    }


    void setTipoDeVeiculo(const string & tipoDeVeiculo)
    {
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
    bool armamento;
    float velocidadeAtual;
    bool blindagem;
    int rodas;
    static const int QUANTIDADETIPOSDEVEICULOS = 2;
    const string TIPOSDEVEICULOS[ QUANTIDADETIPOSDEVEICULOS ] = {"Carro", "Moto"};

    string tipoDeVeiculo;
};
 
class Moto: public Veiculo
{

    public:
    Moto()
    {
        setTipoDeVeiculo("moto");
    };
    Moto( int rodas)
    {
        this->rodas = rodas;
        if (this->rodas == 2)
            setTipoDeVeiculo("moto");
            return;
        if (this->rodas == 4)
            setTipoDeVeiculo("carro");
            return;
        
    }
    private:

};
 
main()
{
    Moto moto1;
    cout << moto1.getTipoDeVeiculo() << "\n";
    cout << "Tipo de veiculo: " << moto1.getTipoDeVeiculo();

    Veiculo moto2(4);
    cout << "Quantidade de rodas " << moto2.getRodas();
    cout << "Tipo de veiculo: " << moto2.getTipoDeVeiculo();

    


    return 0;
}