#include <iostream>
#include <string>

using namespace std;


class Empleado 
{
protected:
    string nombre;
public:
    Empleado(string nombre) : nombre(nombre) {}
    virtual double calcularSalario() const = 0; // Metodo virtual puro (No tiene implementación en la clase base)
    virtual ~Empleado() = default;
};


class EmpleadoTiempoCompleto : public Empleado 
{
    private:
        double salarioMensual;
    public:
        EmpleadoTiempoCompleto(string nombre, double salarioMensual) : Empleado(nombre), salarioMensual(salarioMensual) {}

        double calcularSalario() const override //override para SOBRESCRIBIR el metodo virtual
        { 
            return salarioMensual;
        }
};

class EmpleadoMedioTiempo : public Empleado 
{
    private:
        double tarifaPorHora;
        int horasTrabajadas;
    public:
        EmpleadoMedioTiempo(string nombre, double tarifaPorHora, int horasTrabajadas) : Empleado(nombre), tarifaPorHora(tarifaPorHora), horasTrabajadas(horasTrabajadas) {}

        double calcularSalario() const override  //override para SOBRESCRIBIR el metodo virtual
        {
            return tarifaPorHora * horasTrabajadas;
        }
};

int main() {

    EmpleadoTiempoCompleto empleado1("Gordon Freeman", 3000.0);
    EmpleadoMedioTiempo empleado2("Barney Calhoun", 20.0, 80);

    // Mostrar salarios
    cout << "Salario de " << "Gordon Freeman S/: " << empleado1.calcularSalario() << endl;
    cout << "Salario de " << "Barney Calhoun S/: " << empleado2.calcularSalario() << endl;

    return 0;
}
