#include <iostream>
using namespace std;

static float num2 = 6.2;

void funcao1() {
    float *ponteiro2 = new float;
    *ponteiro2 = num2;
    cout << "Endereço do ponteiro na funcao1: " << &ponteiro2 << endl;
    cout << "Valor do ponteiro na funcao1: " << *ponteiro2 << endl;
    cout << "Número 2: " << num2 << endl;
    num2 = 4.2;
    delete ponteiro2;
    cout << "Valor do ponteiro na funcao1: " << *ponteiro2 << endl;
}

int main() {
    float num1 = 10.4;
    float *ponteiro;

    ponteiro = new float;
    *ponteiro = num1;

    cout << "Número 1: " << num1 << endl;
    cout << "Endereço do ponteiro: " << &ponteiro << endl;
    cout << "Valor do ponteiro: " << *ponteiro << endl;

    num2 = 5.8;
    *ponteiro = num2;   

    cout << "Endereço do ponteiro: " << &ponteiro << endl;
    cout << "Valor do ponteiro: " << *ponteiro << endl;

    funcao1();
    cout << "Número 2: " << num2 << endl;
    delete ponteiro;
    
    return 0;
}
