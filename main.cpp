// Ronald Chavarría Bolaños
// Randall 
// practica 3 

#include "iostream"
#include "string"
using namespace std;
int cant=0;
struct componentes{  //se crea una estructura en la cual se va realizar los 
  string device;
  string tipo;
  float consumo;
  float tiempo;
  
}; 




int main() {
   
  float consumo1=0.0;
  float tiempo1=0.0;
  
  

  cout<< "Digite la cantidad de disositivos IOT que posee"<<endl;  
  cin>>cant;
  struct componentes iot[cant];  
  

  
  for(int cant1=0;cant1<cant;cant1++){
    
    cout<<"Digite el nombre del dispositivo: "<<endl;
    getline(cin,iot[cant1].device);
    cout<<iot[cant1].device<<endl;
    
    cout<<"Digite el nombre del tipo: "<<endl;
    getline(cin,iot[cant1].tipo);
    cout<<iot[cant1].tipo<<endl;
    


  }

   
}