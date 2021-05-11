// Ronald Chavarría Bolaños
// Randall 
// practica 3 

#include "iostream"
#include "string"
using namespace std;
int cant=0;
struct tipo{  //se crea una estructura en la cual se va realizar los 
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
  struct tipo iot[cant];

  
  for(int cant1=0;cant1<cant;cant1++){
    
    cout<<"Digite el nombre del dispositivo: "<<endl;
    //cin>> disp1;
    getline (cin,disp1);
    iot[cant1].device=disp1;
    cout<<"Digite el nombre del tipo: "<<endl;
    cin>> tipo1;
    iot[cant1].tipo=tipo1;
    //cout<< iot[cant1].device<<endl;
    //cout<< iot[cant1].tipo<<endl;
    

  }
  for (int cant2=0;cant2<cant;cant2++){
    cout<<iot[cant2].device<<endl;
    cout<<iot[cant2].tipo<<endl;
  }
   
}