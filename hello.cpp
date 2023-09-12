#include <iostream>

using namespace std;

void nome() 
{
    string nome;
    cout << "Digite seu nome: \n";
    cin >> nome;
    cout << "Hello " << nome << ", what's up? \n\n";
}

int main() {
    nome();
    return 0;
}