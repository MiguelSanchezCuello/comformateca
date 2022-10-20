#include<iostream>

using namespace std;

int main() {
 // Declarar nuestros arreglos a utilizar.
 int numeros[] = {1, 3, 5, 7};
 int numeros2[] = {2, 4, 6, 8};
 int resultado[8];

 // Variables de iteracion.
 int i = 0, j = 0;
 while(i < 4 && j < 4){
  if (numeros[i] < numeros2[j]){
   resultado[i + j] = numeros[i];
   i++;
  } else if (numeros[i] > numeros2[j]){
   resultado[i + j] = numeros2[j];
   j++;
  } 
 } // Fin del while.
 
 // Ciclo para agregar elementos restantes del segundo arreglo.
 for( ; j < 4; j++){
   resultado[i + j] = numeros2[j];
 }
 
 cout << "Numeros arreglados en una estructura de datos intercalada: ";
 cout << "[ ";
 for(i = 0; i < 8; i++){
  cout << resultado[i] << " ";   
 }
 cout << "]";
 
 
 return 0;   
}
