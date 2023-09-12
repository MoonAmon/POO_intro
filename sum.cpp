#include <iostream>

using namespace std;

float soma(float numero01, float numero02)
{ 
    cout << "Sum with floats...";
    float resultado;
    resultado = numero01 + numero02;
    return resultado;
}

int soma(int numero01, int numero02)
{
    cout << "Sum with ints...";
    int resultado;
    resultado = numero01 + numero02;
    return resultado;
}

int main() {
    float numero_float_1 = 5.3;
    float numero_float_2 = 4.9;
    cout << "Sum float = " << soma(numero_float_1, numero_float_2);
    int num_int01 = 4;
    int num_int02 = 6;
    cout << "Sum int = " << soma(num_int01, num_int02) << "";
    return 0;
}