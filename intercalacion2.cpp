#include<iostream>
#include<vector>
#include<algorithm>

void ordenarPorInsercion(int arreglo[], int longitud); // Prototipo de funcion de ordenacion

using namespace std;

int main() {
 // Declarar nuestros arreglos a utilizar.
 int numeros[] = {1,9, 3, 5, 11, 9, 7, 9};
 int numeros2[] = {5, 2, 4, 10, 6, 8};
 vector<int> resultado;
 
 int  longitudNumeros = sizeof(numeros)/sizeof(int);
 int  longitudNumeros2 = sizeof(numeros2)/sizeof(int);
 
 ordenarPorInsercion(numeros, longitudNumeros);
 ordenarPorInsercion(numeros2, longitudNumeros2);
 
 // Variables de iteracion.
 int i = 0, j = 0;
 while(i < longitudNumeros && j < longitudNumeros2){
    if(count(resultado.begin(), resultado.end(), numeros[i])){
        i++;
        continue;
    }
    
    if(count(resultado.begin(), resultado.end(), numeros2[j])){
        j++;
        continue;
    }
     
  if (numeros[i] < numeros2[j]){
   resultado.push_back(numeros[i]);
   i++;
  } else if (numeros[i] > numeros2[j]){
   resultado.push_back(numeros2[j]);
   j++;
  } else {
    resultado.push_back(numeros2[j]);
    i++;
    j++;
  }
 } // Fin del while.
 
 for( ; i < longitudNumeros; i++){
     resultado.push_back(numeros[i]);
 }

 // Ciclo para agregar elementos restantes del segundo arreglo.
 for( ; j < longitudNumeros2; j++){
   resultado.push_back(numeros2[j]);
 }
 
 cout << "Numeros arreglados en una estructura de datos intercalada: ";
 cout << "[ ";
 for(i = 0; i < resultado.size(); i++){
  cout << resultado[i] << " ";   
 }
 cout << "]";
 
 return 0;   
}

void ordenarPorInsercion(int arreglo[], int longitud){
	int i, posicion, aux;
	for (i = 0; i < longitud; i++){
		posicion = i;
		aux = arreglo[i];
		
		while(posicion > 0 && arreglo[posicion - 1] > aux){
			arreglo[posicion] = arreglo[posicion - 1];
			posicion--;
		}
		arreglo[posicion] = aux;
	}
}
