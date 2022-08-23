#include "BancoDeDados.h"

using namespace std;

BancoDeDados::BancoDeDados(string nomeDoArquivo)
{
    struct stat sb;
    struct stat sb1;

    this->nomeDoArquivo = nomeDoArquivo;
    
    if (nomeDoArquivo == "Clientes.yz") {
        nomeDoIndice = "ClientesInd.yz";
        tamanho = sizeof(Cliente);

        stat("Clientes.yz", &sb);
        tamanhoDaTabela = sb.st_size / tamanho;
        stat("ClinetesInd.yz", &sb1);
        tamanhoDoIndice = sb1.st_size / tamanho;
    }

    else if (nomeDoArquivo == "Produtos.yz") {
        nomeDoIndice = "ProdutosInd.yz";
        tamanho = sizeof(Produto);

        stat("Produtos.yz", &sb);
        tamanhoDaTabela = sb.st_size / tamanho;
        stat("ProdutosInd.yz", &sb1);
        tamanhoDoIndice = sb1.st_size / tamanho;
    }

    else if (nomeDoArquivo == "Vendas.yz") {
        nomeDoIndice = "VendasInd.yz";
        tamanho = sizeof(Venda);

        stat("Vendas.yz", &sb);
        tamanhoDaTabela = sb.st_size / tamanho;
        stat("VendasInd.yz", &sb1);
        tamanhoDoIndice = sb1.st_size / tamanho;
    }
}

int BancoDeDados::inserirLinha()
{
    if(abrirArquivo()) {
        if(verificarSeOcodigoExiste()) { //verificar cada diretriz de retorno
            //gravarRegistro();
            gravarlinha(tamanhoDoArquivo());
        }
    }
    return 0;
}

void BancoDeDados::atualizarLinha()
{
    if(abrirArquivo()) {
        if(verificarSeOcodigoExiste()) { //verificar cada diretriz de retorno
            retornarLinha();
            modificaValor();
            gravarlinha(12);//vou modificar isso        
        }
    }
}

void BancoDeDados::deletarLinha()
{
    if(abrirArquivo()) {
        if(verificarSeOcodigoExiste()) { //verificar cada diretriz de retorno
            sobreEscreverLinha();
            sobreEscreverRegistro();     
        }
    }
}

void BancoDeDados::printarTabela()
{
    if(abrirArquivo()){
        //implementação printar tabela
    }
}

//Implementação dos metodos private

bool BancoDeDados::abrirArquivo()
{
    arquivo.open(nomeDoArquivo, ios::in | ios::binary);
    if(arquivo.is_open()){
        return true;
    }else{
        cout << "O arquivo " << nomeDoArquivo << " não pode ser aberto" << endl;
        return false;
    }
}

bool BancoDeDados::abrirIndice()
{
    indice.open(nomeDoIndice, ios::in | ios::binary);
    if(indice.is_open()){
        return true;
    }else{
        cout << "O Indice " << nomeDoIndice << " não pode ser aberto" << endl;
        return false;
    }
}

bool BancoDeDados::verificaIndice()
{
    return true;
}
//trabalhando
//resolvi a questão do tamanho!
bool BancoDeDados::verificarSeOcodigoExiste()
{
    ClienteInd buffer;
    ifstream indice;

    indice.open(nomeDoIndice, ios_base::in | ios_base::binary);
    if(indice.is_open()){
        cout << "Ok" << endl;
    }
    
    indice.read((char*)&buffer, sizeof(ClienteInd));

    while(!indice.eof()){
        buffer.printarValores();
        indice.read((char*)&buffer, sizeof(ClienteInd));
    }

    return true;
}

bool BancoDeDados::buscaBinaria()
{
    return true;
}

//falta terminar
void BancoDeDados::gravarIndice()
{
    Indice registro = {13,22};
    ofstream indice;
    
    indice.open(nomeDoIndice, ios_base::app | ios_base::out | ios_base::binary);
    if(indice.is_open()){
        cout << "Gravar ok" << endl;
    }
    indice.write((char *) &registro, sizeof(Indice));
    indice.close();
}

void BancoDeDados::gravarlinha(int vouModificarIsso)
{

}

void BancoDeDados::modificaValor()
{

}

void BancoDeDados::sobreEscreverLinha()
{

}

void BancoDeDados::sobreEscreverRegistro()
{

}

int BancoDeDados::tamanhoDoArquivo()
{
    return 0;
}

int BancoDeDados::retornarPosicao()
{
    return 0;
}

//tipo a ser definido
void BancoDeDados::retornarLinha()
{

}
