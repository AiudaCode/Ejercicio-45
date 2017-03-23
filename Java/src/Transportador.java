public class Transportador
{
    // atributos privados de la clase
    private int cantidad_roble;
    private int cantidad_cedro;
    private int cantidad_tolua;
    
    public Transportador()
    {
        // le asigno valores por defecto a los atributos de la clase en el contructor
        cantidad_roble = 0;
        cantidad_cedro = 0;
        cantidad_tolua = 0;
    }
    
    // implementacion de los metodos setters y getters de los atributos de la clase
    public void setCantidadRoble(int val)
    {
        cantidad_roble = val;
    }

    public int getCantidadRoble()
    {
        return cantidad_roble;
    }

    public void setCantidadCedro(int val)
    {
        cantidad_cedro = val;
    }

    public int getCantidadCedro()
    {
        return cantidad_cedro;
    }

    public void setCantidadTolua(int val)
    {
        cantidad_tolua = val;
    }

    public int getCantidadTolua()
    {
        return cantidad_tolua;
    }

    // metodos para calcular el valor total de cada madera
    public int valorTotalRoble()
    {
        // se retorna la cantidad de madera de roble y se multiplica por 2000
        return getCantidadRoble() * 2000;
    }

    public int valorTotalCedro()
    {
        // se retorna la cantidad de madera de cedro y se multiplica por 3000
        return getCantidadCedro() * 3000;
    }

    public int valorTotalTolua()
    {
        // se retorna la cantidad de madera de tolua y se multiplica por 1500
        return getCantidadTolua() * 1500;
    }

    // metodo para calcular el subtotal de la venta
    public int subtotal()
    {
        // el subtotal es el valor total de la madera por el valor unitario de ella, sumada con el resultado de las demas...
        return valorTotalRoble() + valorTotalCedro() + valorTotalTolua();
    }

    public double valorImpuesto()
    {
        // la formula para calcular el valor del impuesto es: el subtotal
        // por el porcentaje del impuesto en este caso sera 19% valor del IVA
        return subtotal() * 0.19;
    }

    // metodo para calcular el total
    public double totalPagar()
    {
        // se retorna el valor del subtotal mas el valor del impuesto
        return subtotal() + valorImpuesto();
    }
}