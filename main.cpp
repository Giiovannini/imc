#include <iostream>

using namespace std;

int main()
{
    float altura;
    float peso;
    float calculo;
    float parte1;

    cout << "Insira a altura da pessoa: ";
    cin  >> altura;

    cout << "Insira o peso da pessoa: ";
    cin >> peso;

    parte1 = (altura * altura);
    calculo = (peso / parte1);

    cout << "O indice de massa corporal dessa pessoa e " << calculo << endl;

    return(0);

}
