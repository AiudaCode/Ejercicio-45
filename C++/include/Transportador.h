#ifndef TRANSPORTADOR_H
#define TRANSPORTADOR_H


class Transportador
{
    public:
        Transportador();
        virtual ~Transportador();
        // metodos publicos de la clase
        void setCantidadRoble(int val);
        int getCantidadRoble();
        void setCantidadCedro(int val);
        int getCantidadCedro();
        void setCantidadTolua(int val);
        int getCantidadTolua();
        int valorTotalRoble();
        int valorTotalCedro();
        int valorTotalTolua();
        int subtotal();
        int valorImpuesto();
        int totalPagar();
    protected:

    private:
        // atributos privados de la clase
        int cantidad_roble;
        int cantidad_cedro;
        int cantidad_tolua;
};

#endif // TRANSPORTADOR_H
