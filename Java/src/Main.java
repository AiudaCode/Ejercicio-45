
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // Creo un objeto de la clase Transportador (Instanciación)
        Transportador obj = new Transportador();
        // declaro 1 variable de tipo entero llamada cantidad
        int cantidad;
        // se le pide al usuario que digite la cantidad de roble que llevara el transportador
        cantidad = Integer.parseInt(JOptionPane.showInputDialog("Digite cantidad de madera de roble que llevara"));
        // se encapsula la cantidad de madera de roble
        obj.setCantidadRoble(cantidad);
        // se le pide al usuario que digite la cantidad de cedro que llevara el transportador
        cantidad = Integer.parseInt(JOptionPane.showInputDialog("Digite cantidad de madera de cedro que llevara"));
        // se encapsula la cantidad de madera de cedro
        obj.setCantidadCedro(cantidad);
        // se le pide al usuario que digite la cantidad de tolua que llevara el transportador
        cantidad = Integer.parseInt(JOptionPane.showInputDialog("Digite cantidad de madera de tolua que llevara"));
        // se encapsula la cantidad de madera de tolua
        obj.setCantidadTolua(cantidad);
        // se imprime toda la informacion en pantalla
        JOptionPane.showMessageDialog(null,
                "Producto: Madera de Roble" + "\n" +
                "Cantidad: " + obj.getCantidadRoble() + "\n" +
                "Valor unitario: $2000" + "\n" +
                "Valor total: $" + obj.valorTotalRoble());
        JOptionPane.showMessageDialog(null,
                "Producto: Madera de Cedro" + "\n" +
                "Cantidad: " + obj.getCantidadCedro() + "\n" +
                "Valor unitario: $3000" + "\n" +
                "Valor total: $" + obj.valorTotalCedro());
        JOptionPane.showMessageDialog(null,
                "Producto: Madera de Tolua" + "\n" +
                "Cantidad: " + obj.getCantidadTolua() + "\n" +
                "Valor unitario: $1500" + "\n" +
                "Valor total: $" + obj.valorTotalTolua());
        JOptionPane.showMessageDialog(null,
                "Subtotal: $" + obj.subtotal() + "\n" +
                "Impuesto (19%): $" + obj.valorImpuesto() + "\n" +
                "Total a pagar: $" + obj.totalPagar() + "\n");
    }
}
