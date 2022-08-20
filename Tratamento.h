//Talves essa seja uma classe statica!
#include <string>
#include <iostream>

using namespace std;

class Tratamento
{
private:
    /* data */

    bool isInt(string valor);
    bool isString(string valor);
    bool isFloat(string valor);
public:
    Tratamento(/* args */);
    //
    bool validarTelefone(string valor);
    bool validarArquivo(string NomeDoArquivo);
    bool validarOperaco(string numeroDaoperacao);
    
    //printar
    void priSelecionarTabela();
    void priSelencionaOperacao();
    void priValorInValido();
};
