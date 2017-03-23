#include "Transportador.h"

Transportador::Transportador()
{
    //ctor
}

Transportador::~Transportador()
{
    //dtor
}


// implementacion de los metodos setters y getters de los atributos de la clase
void Transportador::setCantidadRoble(int val)
{
    cantidad_roble = val;
}

int Transportador::getCantidadRoble()
{
    return cantidad_roble;
}

void Transportador::setCantidadCedro(int val)
{
    cantidad_cedro = val;
}

int Transportador::getCantidadCedro()
{
    return cantidad_cedro;
}

void Transportador::setCantidadTolua(int val)
{
    cantidad_tolua = val;
}

int Transportador::getCantidadTolua()
{
    return cantidad_tolua;
}

// metodos para calcular el valor total de cada madera
int Transportador::valorTotalRoble()
{
    // se retorna la cantidad de madera de roble y se multiplica por 2000
    return getCantidadRoble() * 2000;
}

int Transportador::valorTotalCedro()
{
    // se retorna la cantidad de madera de cedro y se multiplica por 3000
    return getCantidadCedro() * 3000;
}

int Transportador::valorTotalTolua()
{
    // se retorna la cantidad de madera de tolua y se multiplica por 1500
    return getCantidadTolua() * 1500;
}

// metodo para calcular el subtotal de la venta
int Transportador::subtotal()
{
    // el subtotal es el valor total de la madera por el valor unitario de ella, sumada con el resultado de las demas...
    return valorTotalRoble() + valorTotalCedro() + valorTotalTolua();
}

int Transportador::valorImpuesto()
{
    // la formula para calcular el valor del impuesto es: el subtotal
    // por el porcentaje del impuesto en este caso sera 19% valor del IVA
    return subtotal() * 0.19;
}

// metodo para calcular el total
int Transportador::totalPagar()
{
    // se retorna el valor del subtotal mas el valor del impuesto
    return subtotal() + valorImpuesto();
}
