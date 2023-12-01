#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ClubFutbol { //utilizo clase, agrego distintos atributos
   public:              
    string nombre;
    string directorTecnico;
    string presidente;
    string jugadores[11]; //creo una lista, max 11 jugadores
};

int main() {
    ClubFutbol club;

 
    cout << "Ingrese el nombre del club: ";  
    getline(cin, club.nombre);    //guarda la linea que se ingreso, cin en club

    cout << "Ingrese el nombre del director técnico: ";
    getline(cin, club.directorTecnico); //el getline te toma el espacio

    cout << "Ingrese el nombre del presidente: ";
    getline(cin, club.presidente);

    // Ingreso nombres de jugadores
    cout << "Ingrese los nombres de los jugadores \n";
  
   for (int i=0; i<11; i++){ //recorre los 11 jugadores y suma a la lista
     cout << "Ingrese el nombre de jugador: " << i+1 << "\n";
     getline (cin, club.jugadores[i]); //se guarda en la lista
    }

    // se imprime la información completa del club
    cout << "\nInformación del Club de Fútbol:\n";
    cout << "Nombre: " << club.nombre << "\n";
    cout << "Director Técnico: " << club.directorTecnico << "\n";
    cout << "Presidente: " << club.presidente << "\n";
    cout << "Jugadores:\n";
    
    for (int i=0; i<11; i++){ 
     cout << club.jugadores[i]  << "\n" ;
     
    }

    return 0;
}
