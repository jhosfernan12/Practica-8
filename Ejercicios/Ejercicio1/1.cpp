#include <iostream>
#include <string>
using namespace std;


float PI = 3.1415;

// Clase abstracta Figura
class Figura 
{
    public:
        virtual void dibujar() const = 0; //Metodos Virtuales
        virtual double calcularArea() const = 0;
        virtual ~Figura() {}
};

// Clase derivada Circulo
class Circulo : public Figura 
{
    private:
        float radio;

    public:
        Circulo(double r) : radio(r) {}
        
        void dibujar()  const override //override para SOBRESCRIBIR el metodo virtual
        {
            cout << "Dibujando un circulo con radio " << radio << endl;
        }

        double calcularArea() const override //override para SOBRESCRIBIR el metodo virtual
    {
            return PI * radio * radio;
        }
};

// Clase derivada Rectangulo
class Rectangulo : public Figura 
{
    private:
        double ancho;
        double alto;

    public:
        Rectangulo(double a, double h) : ancho(a), alto(h) {}

        void dibujar() const override 
        {
            cout << "Dibujando un rectangulo de " << ancho << " x " << alto << endl;
        }

        double calcularArea() const override 
        {
            return ancho * alto;
        }
};

// Clase derivada Triangulo
class Triangulo : public Figura 
{
    private:
        double base;
        double altura;

    public:
        Triangulo(double b, double h) : base(b), altura(h) {}

        void dibujar() const override 
        {
            cout << "Dibujando un triangulo con base " << base << " y altura " << altura << endl;
        }

        double calcularArea() const override 
        {
            return 0.5 * base * altura;
        }
};

int main() 
{

    Circulo circulo01(5.0);
    Rectangulo rectangulo01(4.0, 6.0);
    Triangulo triangulo01(3.0, 7.0);

    circulo01.dibujar();
    rectangulo01.dibujar();
    triangulo01.dibujar();

    return 0;
}
