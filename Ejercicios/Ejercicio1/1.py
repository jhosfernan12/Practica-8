
PI = 3.1415

# Clase abstracta Figura
class Figura:
    def dibujar(self):
        raise NotImplementedError("Debe implementar el metodo dibujar")

    def calcularArea(self):
        raise NotImplementedError("Debe implementar el metodo calcularArea")

# Clase derivada Circulo
class Circulo(Figura):
    def __init__(self, radio):
        self.radio = radio

    def dibujar(self):
        print(f"Dibujando un circulo con radio {self.radio}")

    def calcularArea(self):
        return PI * self.radio * self.radio

# Clase derivada Rectangulo
class Rectangulo(Figura):
    def __init__(self, ancho, alto):
        self.ancho = ancho
        self.alto = alto

    def dibujar(self):
        print(f"Dibujando un rectangulo de {self.ancho} x {self.alto}")

    def calcularArea(self):
        return self.ancho * self.alto

# Clase derivada Triangulo
class Triangulo(Figura):
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura

    def dibujar(self):
        print(f"Dibujando un triangulo con base {self.base} y altura {self.altura}")

    def calcularArea(self):
        return 0.5 * self.base * self.altura


circulo01 = Circulo(5.0)
rectangulo01 = Rectangulo(4.0, 6.0)
triangulo01 = Triangulo(3.0, 7.0)

circulo01.dibujar()
rectangulo01.dibujar()
triangulo01.dibujar()
