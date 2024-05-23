import java.util.ArrayList;

abstract class Figura //Se usa Explicitamente la palabra Abstract
{
    public abstract void dibujar();
    public abstract double calcularArea();
}

class Circulo extends Figura 
{
    private double radio;
    private static final double PI = 3.1415;

    public Circulo(double radio) 
    {
        this.radio = radio;
    }

    @Override
    public void dibujar() 
    {
        System.out.println("Dibujando un circulo con radio " + radio);
    }

    @Override
    public double calcularArea() 
    {
        return PI * radio * radio;
    }
}

class Rectangulo extends Figura 
{
    private double ancho;
    private double alto;

    public Rectangulo(double ancho, double alto) 
    {
        this.ancho = ancho;
        this.alto = alto;
    }

    @Override
    public void dibujar() 
    {
        System.out.println("Dibujando un rectangulo de " + ancho + " x " + alto);
    }

    @Override
    public double calcularArea() 
    {
        return ancho * alto;
    }
}

class Triangulo extends Figura 
{
    private double base;
    private double altura;

    public Triangulo(double base, double altura) 
    {
        this.base = base;
        this.altura = altura;
    }

    @Override
    public void dibujar() 
    {
        System.out.println("Dibujando un triangulo con base " + base + " y altura " + altura);
    }

    @Override
    public double calcularArea() 
    {
        return 0.5 * base * altura;
    }
}

public class main1 
{

    public static void main(String[] args) 
    {
        Circulo circulo01 = new Circulo(5.0);
        Rectangulo rectangulo01 = new Rectangulo(4.0, 6.0);
        Triangulo triangulo01 = new Triangulo(3.0, 7.0);

        circulo01.dibujar();
        rectangulo01.dibujar();
        triangulo01.dibujar();
    }
}
