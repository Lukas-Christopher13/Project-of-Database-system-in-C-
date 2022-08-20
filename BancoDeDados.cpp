#include "BancoDeDados.h"

using namespace std;

BancoDeDados::BancoDeDados(string nomeDoArquivo)
{
    this->nomeDoArquivo = nomeDoArquivo;
    
    if (nomeDoArquivo == "Clientes.yz") {
        nomeDoRegistro = "ClinetesRegi.yz";
        tamanho = 10;//modificar valor!!!
    }

     if (nomeDoArquivo == "Produtos.yz") {
        nomeDoRegistro = "ProdutosRegi.yz";
        tamanho = 10;//modificar valor!!!
    }

     if (nomeDoArquivo == "Vendas.yz") {
        nomeDoRegistro = "VendasRegi.yz";
        tamanho = 10;//modificar valor!!!
    }
}

int BancoDeDados::inserirLinha()
{
    if(abrirArquivo()) {
        if(verificarSeOcodigoExiste()) { //verificar cada diretriz de retorno
            gravarRegistro();
            gravarlinha(tamanhoDoArquivo());
        }
    }
}

void BancoDeDados::atualizarLinha()
{
    if(abrirArquivo()) {
        if(verificarSeOcodigoExiste()) { //verificar cada diretriz de retorno
            int codigo = buscaBinaria();
            int posicao = retornarPosicao(codigo);
            retornarLinha(codigo);
            modificaValor();
            gravarlinha(posicao);       
        }
    }
}

void BancoDeDados::deletarLinha()
{
    if(abrirArquivo()) {
        if(verificarSeOcodigoExiste()) { //verificar cada diretriz de retorno
            
        }
    }
}

void BancoDeDados::printarTabela()
{
    if(abrirArquivo()){

    }

}