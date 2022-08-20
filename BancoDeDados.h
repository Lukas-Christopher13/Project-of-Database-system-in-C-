#include <string>

using namespace std;

class BancoDeDados
{
private:
    string nomeDoArquivo;
    int tamanho;
public: 
    //construtor
    BancoDeDados(/* args */);
    //
    void inserirLinha(string NomeDoArquivo);
    void autalizarLinha(string NomeDoArquivo);// nao sei como vou implementar ainda
    void deletarLinha(string NomeDoArquivo);
    void printarTabela(string NomeDoArquivo);
};
