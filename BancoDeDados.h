#include <string>
#include <iostream>

using namespace std;

class BancoDeDados
{
private:
    //atributos
    string nomeDoArquivo;
    string nomeDoRegistro;
    int tamanho;
    int posicao;

    //funções privadas
    bool abrirArquivo();
    bool verificaIndice();
    bool verificarSeOcodigoExiste();
    void gravarRegistro();
    void gravarlinha(int posicao);
    void modificaValor();
    int buscaBinaria();
    int tamanhoDoArquivo();
    int retornarPosicao();

    //tipo a ser definido
    void retornarLinha(int codigo);

    //set functions
    void setNomedoArquivo(string nomeDoArquivo);
    void setNomeDoRegistro(string nomeDoRegistro);
    void setTamanho(int tamanho);

public: 
    //construtor
    BancoDeDados(string NomeDoArquivo);
    //
    int inserirLinha();
    void atualizarLinha();// nao sei como vou implementar ainda
    void deletarLinha();
    void printarTabela();
};
