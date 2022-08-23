#include <iostream>

using namespace std;

class ClienteInd
{
private:
    int posicao;
    int codigo;
public:
    ClienteInd();
    void printarValores();
};

ClienteInd::ClienteInd()
{
    posicao = 0;
    codigo = 0;
}

void ClienteInd::printarValores()
{
   cout << codigo << " " << posicao << endl; 
}