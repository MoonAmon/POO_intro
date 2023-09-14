#include <iostream>
#include "parametros.h"

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    char sexo;
};

int x;

void mostrar(Pessoa *cad) {
    cout << "-------------------------------------------------" << endl;
    for ( x = 0; x < N; x++)
    {
        if (cad[x].sexo == 'F' && cad[x].idade >= 30)
        {
            cout << cad[x].nome << " - ";
            cout << "Não é elegante revelar a idade de uma mulher. " << endl;
        } else {
            cout << cad[x].nome << " - ";
            cout << cad[x].idade << " anos -" << cad[x].sexo << endl;
        }
        
    }
    cout << "-------------------------------------------------" << endl;
    
    
}

int main() {

    Pessoa cadastro[N];
    int x;

    for ( x = 0; x < N; x++)
    {
        cout << "Digite o nome: ";
        cin >> cadastro[x].nome;
        cout << "Digite a idade: ";
        cin >> cadastro[x].idade;
        cout << "Digite o sexo f para feminino e m para masculino: ";
        cin >> cadastro[x].sexo;
    }
    mostrar(cadastro);
    return 0;
    
}