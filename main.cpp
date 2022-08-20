#include "BancoDeDados.h"
#include "Tratamento.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    BancoDeDados bancoDeDados;
    Tratamento tratamento;

    while (true)
    {

        //seleciona tabela + operação
        string NomeDoArquivo;

        tratamento.priSelecionarTabela();
        cin >> NomeDoArquivo;

        while (tratamento.validarArquivo(NomeDoArquivo))
        {
            tratamento.priValorInValido();
            cin >> NomeDoArquivo;
        }

        string operacao;

        tratamento.priSelencionaOperacao();
        cin >> operacao;

        while (tratamento.validarOperaco(operacao));
        {
            tratamento.priValorInValido();
            cin >> operacao;
        }

        //codio em is


        //talvez seja nescessario um while
        switch (stoi(operacao))
        {
        case 1:
            bancoDeDados.inserirLinha(NomeDoArquivo);
            break;

        case 2:
            bancoDeDados.atualizarLinha(NomeDoArquivo);
            break;

        case 3:
            bancoDeDados.deletarLinha(NomeDoArquivo);
            break;

        case 4:
            bancoDeDados.printarTabela(NomeDoArquivo);
            break;

        default:
            break;
        }
        
    return 0;
}