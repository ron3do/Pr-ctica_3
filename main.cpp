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
  string disp1; // se crea una string para guar
  string tipo1;
  string device1;
  float consumo1=0.0;
  float tiempo1=0.0;
  
  

  cout<< "Digite la cantidad de disositivos IOT que posee"<<endl;  
  cin>>cant;
  struct componentes iot[cant];  
  

  
  for(int cant1=0;cant1<cant;cant1++){
    
    cout<<"Digite el nombre del dispositivo: "<<endl;
    getline(cin,disp1);
    iot[cant1].device=disp1;
    cout<<"Digite el nombre del tipo: "<<endl;
    getline(cin,tipo1);
    iot[cant1].tipo=tipo1;


  }
  for (int cant2=0;cant2<cant;cant2++){
    cout<<iot[cant2].device<<endl;
    cout<<iot[cant2].tipo<<endl;
  }
   
}