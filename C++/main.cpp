#include <iostream>
#include "Transportador.h"

using namespace std;

int main(void)
{
    // Creo un objeto de la clase Transportador (Instanciación)
    Transportador *obj = new Transportador();
    // declaro 1 variable de tipo entero llamada cantidad
    int cantidad;
    // se le pide al usuario que digite la cantidad de roble que llevara el transportador
    cout << "Digite cantidad de madera de roble que llevara" << endl;
    cout << ">> ";
    // se guarda la cantidad en la variable cantidad
    cin >> cantidad;
    // se encapsula la cantidad de madera de roble
    obj->setCantidadRoble(cantidad);
    // se le pide al usuario que digite la cantidad de cedro que llevara el transportador
    cout << "Digite cantidad de madera de cedro que llevara" << endl;
    cout << ">> ";
    // se guarda la cantidad en la variable cantidad
    cin >> cantidad;
    // se encapsula la cantidad de madera de cedro
    obj->setCantidadCedro(cantidad);
    // se le pide al usuario que digite la cantidad de tolua que llevara el transportador
    cout << "Digite cantidad de madera de tolua que llevara" << endl;
    cout << ">> ";
    // se guarda la cantidad en la variable cantidad
    cin >> cantidad;
    // se encapsula la cantidad de madera de tolua
    obj->setCantidadTolua(cantidad);
    cout << endl;
    // se imprime toda la informacion en pantalla, el \t sirve para tabular al momento de imprimir en pantalla es decir:
    // identa o le da sangria a el texto...
    cout << "|[Producto]"        << "\t\t|" << "[Cantidad]"          <<   "\t|" << "[Valor unitario]" <<     "\t|" << "[Valor total]" << endl;
    cout << "|Madera de Roble"   << "\t|" << obj->getCantidadRoble() << "\t\t|" << "$2000"            << "\t\t\t|" << "$" << obj->valorTotalRoble() << endl;
    cout << "|Madera de Cedro"   << "\t|" << obj->getCantidadCedro() << "\t\t|" << "$3000"            << "\t\t\t|" << "$" << obj->valorTotalCedro() << endl;
    cout << "|Madera de Tolua"   << "\t|" << obj->getCantidadTolua() << "\t\t|" << "$1500"            << "\t\t\t|" << "$" << obj->valorTotalTolua() << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t" << "Subtotal"        << "\t$" << obj->subtotal() << endl;
    cout << "\t\t\t\t\t\t\t\t" << "Impuesto (19%)"  << "\t$" << obj->valorImpuesto() << endl;
    cout << "\t\t\t\t\t\t\t\t" << "Total a pagar"   << "\t$" << obj->totalPagar() << endl;
}
