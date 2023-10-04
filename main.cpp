#include <iostream>
#include <cmath>
#include <vector>


// classe abstrata

class Forma {
public:
    virtual double area() = 0;

    virtual double perimetro() = 0;

};

// herança e polimorfismo

class Circulo : public Forma {
// encapsulamento
private:
    double raio;
public:
    Circulo(double raio) : raio(raio) {}

    double area() override {
        return M_PI * raio * raio;
    }

    double perimetro() override {
        return 2 * M_PI * raio;
    }

};

class Retangulo : public Forma {
private:
    double base, altura;
public:
    Retangulo(double base, double altura) : base(base), altura(altura) {}

    double area() override {
        return base * altura;
    }

    double perimetro() override {
        return 2 * (base + altura);
    }

};

int main() {

  std::cout<<"Cálculo de áreas e períemtros usando classes, herança e polimorfismo"<<std::endl;

  std::cout<<"Informe o raio do círculo: ";
  double raio;
  std::cin>>raio;

  std::cout<<"Informe a base do retângulo: ";
  double base;
  std::cin>>base;

  std::cout<<"Informe a altura do retângulo: ";
  double altura;
  std::cin>>altura;


  Circulo circulo(raio);
  Retangulo retangulo(base, altura);


  std::cout<<"Área do círculo: "<<circulo.area()<<std::endl;
  std::cout<<"Perímetro do círculo: "<<circulo.perimetro()<<std::endl;


  std::cout<<"Área do retângulo: "<<retangulo.area()<<std::endl;
  std::cout<<"Perímetro do retângulo: "<<retangulo.perimetro()<<std::endl;

  return 0;
}
