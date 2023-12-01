#include <iostream>

using namespace std;

class Cartuchera{         //definimos la clase base
public:
  void encontrar();
};

class Lapiz : public Cartuchera{   //la clase lapiz hereda lo de la clase cartuchera
  public:
      void escribir(); //metodos
      void dibujar();
      void romper();


};

class Goma : public Cartuchera{
  public:
    void borrar();
    void gastar();
};

class Regla : public Cartuchera{
  public:
     void medir();
     void doblar();

  
};

void Cartuchera::encontrar(){  //encontrar es un metodo de cartuchera
  cout << "El útil se encuentra en la cartuchera" << endl;
}
void Lapiz::escribir(){
 cout << "El lapiz puede escribir" << endl;
}
void Lapiz::dibujar(){
    cout << "El lapiz puede dibujar" << endl;
}
void Lapiz::romper(){
    cout << "El lapiz se puede romper" << endl;
}
void Goma::borrar(){
    cout << "La goma puede borrar" << endl;
}
  void Goma::gastar(){
    cout << "La goma se puede gastar" << endl;
  }
  void Regla::medir(){
    cout << "La regla se usa para medir" << endl;
  }
  void Regla::doblar(){ //cuando se llama al metodo doblar se ejecuta 
     cout << "La regla se puede doblar" << endl;
  }

int main(){
  Lapiz lapiz;
  Goma goma;
  Regla regla;

cout << "Seleccione un útil: 1= Lápiz, 2= Goma, 3= Regla: ";
int opcion;
cin >> opcion;

switch (opcion){
  case 1:
    cout << "Características del Lápiz:" << endl;
    lapiz.encontrar();
    lapiz.escribir();
    lapiz.dibujar();
    lapiz.romper();
    break;

  case 2:
    cout << "Características de la Goma:" << endl;
    goma.encontrar();
    goma.borrar();
    goma.gastar();
    break;

  case 3:
    cout << "Características de la Regla:" << endl;
    regla.encontrar();
    regla.medir();
    regla.doblar();
    break;

  default:
    cout << "Opción no válida." << endl;
}

  return 0;
}
