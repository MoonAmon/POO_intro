#include <iostream>

using namespace std;


void por_valor(float parametro1, int parametro2) 
{
    cout << "Alterando-se valores na função por_valor";
    parametro1 += 10;
    parametro2 += 5;
    cout << " parametro1 = " << parametro1;
    cout << " parametro2 = " << parametro2 << endl;

}

void por_referencia(float &parametro1, int &parametro2)
{
    cout << "Alterando-se valores na função por_referencia";
    parametro1 += 10;
    parametro2 += 5;
    cout << " parametro1 = " << parametro1;
    cout << " parametro2 = " << parametro2 << endl;
}

int main() {
    float num_float = 5.3;
    int num_int = 4;
    cout << "numero_float = " << num_float;
    cout << "numero_ int = " << num_int << endl;

    por_valor(num_float, num_int);
    cout << "numero_float = " << num_float;
    cout << "numero_ int = " << num_int << endl;

    por_referencia(num_float, num_int);
    cout << "numero_float = " << num_float;
    cout << "numero_ int = " << num_int << endl;

    return 0;
 
}