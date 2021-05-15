// Ronald Chavarría Bolaños
// Randall 
// practica 3 

#include <iostream>
#include "string"
using namespace std;
int cant=0;
/* Se crea una estructura en la que se almacena los datos*/
struct componentes{ 
  string device;
  string tipo;
  float consumo;
  float tiempo;
  
}; 


int main() {
  
  
  using namespace std;
  float consumo1=0.0;
  float tiempo1=0.0;
  int x=0;
  //struct componentes iot[cant];

  cout<< "Digite la cantidad de disositivos IOT que posee"<<endl;  
  cin>>x;
  cant=x;  
  struct componentes iot[cant];

      for(int cant1=0;cant1<cant;++cant1){
    
    cout<<"Digite el nombre del dispositivo: "<<endl;
    getline(cin,iot[cant1].device);
    cout<<"Digite el tipo de dispositivo que es: "<<endl;
    getline(cin,iot[cant1].tipo);
    cout<<"Digite el consumo del dispositivo: "<<endl;
    cin>>iot[cant1].consumo;
  
    
  


  }

   
}