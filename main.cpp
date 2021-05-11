// Ronald Chavarría Bolaños
// Randall 
// practica 3 

#include <iostream>
using namespace std;
int cant=0;
struct tipo{  //se crea una estructura en la cual se va realizar los 
  string device;
  string tipo;
  float consumo;
  float tiempo;
  
}; 




int main() {
  string disp1;
  string tipo;
  string device1;
  float consumo1=0.0;
  float tiempo1=0.0;
  cout<< "Digite la cantidad de disositivos IOT que posee"<<endl;  
  cin>>cant;
  struct tipo aparato[cant];
  for(int cant1=0;cant1<cant;cant1++){
    cout<<"Digite el nombre del dispositivo: "<<endl;
    cin>>disp1;
    cout<< disp1<<endl;
    

  }
   
}