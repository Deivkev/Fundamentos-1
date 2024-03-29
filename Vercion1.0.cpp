#include <iostream>
#include <string>

// Definición de la estructura
struct Persona {
    std::string nombre;
    int edad;
    float altura;
};
int main() {
    // Declaración e inicialización de una variable de tipo Persona
    Persona persona1;
    persona1.nombre = "Juan";
    persona1.edad = 30;
    persona1.altura = 1.75f;
    // Accediendo a los miembros de la estructura e imprimiéndolos
    std::cout << "Nombre: " << persona1.nombre << std::endl;
    std::cout << "Edad: " << persona1.edad << std::endl;
    std::cout << "Altura: " << persona1.altura << std::endl;

    return 0;
}