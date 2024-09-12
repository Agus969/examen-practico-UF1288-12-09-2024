#include <iostream>
#include "haversine.h"
#include <fstream>


int main() {    
    // Sagrada Familia
    double lat1 = 41.4036;
    double lon1 = 2.1744;

    // Parque Güell
    double lat2 = 41.4145;
    double lon2 = 2.1527;

    double distancia = calcularDistancia(lat1, lon1, lat2, lon2);
    std::ofstream archivoSalida("salida.txt");
    archivoSalida.open("salida.txt");
    std::cout << "La distance entre Sagrada Familia et Park Güell est:  "
              << distancia << " km." << std::endl;
       archivoSalida << "La distance entre Sagrada Familia et Park Güell est:  "
              << distancia << " km." << std::endl; 
         archivoSalida.close();           
    std::cout << "La distancia entre Sagrada Familia y Parque Güell es: "
              << distancia << " km." << std::endl;
    std::cout << "The distance between Sagrada Familia and Park Güell is: "
              << distancia << " km." << std::endl;
           archivoSalida.close();
    return 0;
}
