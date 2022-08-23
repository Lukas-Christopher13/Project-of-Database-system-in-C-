#include <string>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include "ClienteInd.cpp"

//Registros
typedef struct{
    int codigo;
    int posicao;
}Indice;

typedef struct{
    int codigo;
    char nome[100];
    char telefone[13];
    char endereco[100];
}Cliente;

typedef struct{
    int codigo;
    char nome[50];
    int quantidade;
    double valor;
}Produto;

typedef struct{
    int codigo;
    char nome[50];
    char data[10];
    int codCliente;
    int codProduto;
    int quantidade;
    double valor;
}Venda;

using namespace std;

class BancoDeDados
{
private:
    //atributos
    Cliente linhaCliente;
    Produto linhaProduto;
    Venda linhaVenda;
    Indice registro;

    string nomeDoArquivo;
    string nomeDoIndice;

    ofstream arquivo;
    ofstream indice;

    int tamanho;
    long int tamanhoDaTabela;
    long int tamanhoDoIndice;

    int posicao;
    int codigo; 

    //funções privadas
    
public: 
    //construtor
    BancoDeDados(string NomeDoArquivo);
    //
    int inserirLinha();
    void atualizarLinha();// nao sei como vou implementar ainda
    void deletarLinha();
    void printarTabela();

    //funções publicas
    bool abrirArquivo();
    bool abrirIndice();
    bool verificaIndice();
    bool verificarSeOcodigoExiste();
    bool buscaBinaria();
    void gravarIndice();
    void gravarlinha(int vouModificarIsso);
    void modificaValor();
    void sobreEscreverLinha();
    void sobreEscreverRegistro();
    int tamanhoDoArquivo();
    int retornarPosicao();

    //tipo a ser definido
    void retornarLinha();

};
