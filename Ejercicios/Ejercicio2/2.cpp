#include <iostream>
#include <string>

using namespace std;


class Reproductor 
{
    public:
        virtual void reproducir(string archivo) = 0; //Metodos virtuales
        virtual void pausar() = 0;
        virtual void detener() = 0;
        virtual ~Reproductor() = default; //destructor
};


class ReproductorMP3 : public Reproductor 
{
    private:
        bool reproduciendo;
        string archivoActual;
    public:
        ReproductorMP3() : reproduciendo(false), archivoActual("") {}

        void reproducir(string archivo) override  //override para SOBRESCRIBIR el metodo virtual
        {
            if (reproduciendo) 
            {
                cout << "Ya hay una cancion en reproduccion. detenga  primero la cancion actual." << endl;
            } 
            else 
            {
                archivoActual = archivo;
                reproduciendo = true;
                cout << "Reproduciendo la cancion: " << archivo << endl;
            }
        }

        void pausar() override  //override para SOBRESCRIBIR el metodo virtual
        {
            if (reproduciendo) 
            {
                reproduciendo = false;
                cout << "Pausando la cancion: " << archivoActual << endl;
            } else 
            {
                cout << "No hay ninguna cancion en reproduccion para pausar" << endl;
            }
        }

        void detener() override  //override para SOBRESCRIBIR el metodo virtual
        {
            if (reproduciendo) 
            {
                reproduciendo = false;
                cout << "Deteniendo la cancion: " << archivoActual << endl;
                archivoActual = "";
            } else 
            {
                cout << "No hay ninguna la cancion en reproduccion para detener" << endl;
            }
        }
};

int main() 
{

    ReproductorMP3 miReproductor;

    miReproductor.reproducir("cancion1.mp3");
    miReproductor.pausar();
    miReproductor.detener();

    miReproductor.detener(); // Prueba para detener sin reproduccion
    miReproductor.pausar(); // Prueba para pausar sin reproduccion

    miReproductor.reproducir("cancion2.mp3");
    miReproductor.reproducir("cancion3.mp3"); // Prueba para reproducir con archivo cuando hay otro

    return 0;
}
