#include <iostream>
using namespace std; 
void rellenarMatriz(int matriz[][100],int m){
	 for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<"Ingrese la cantidad para la posicion["<< i+1 <<"]["<< j+1 <<"]:";
            cin >> matriz[i][j];
        }
    }
}
void imprimirMatriz(int matriz[][100], int m){
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            cout << matriz[i][j] << " ";
        }
        cout<<endl;
    }
}
double calcularPromedio(int matriz[][100],int m){
    int suma= 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {
            suma += matriz[i][j];
        }
    }
    double promedio=(double)suma/ (m*m);
    return promedio;
	}
	
    int main(){
    	int m;
    	cout<<"Ingrese canidad de filas y columnas: ";
    	cin>>m; 
    	 int matriz[100][100];
         rellenarMatriz(matriz, m);
         cout<<endl<<"La matriz ingresada es:"<<endl;
         imprimirMatriz(matriz, m);
        double promedio = calcularPromedio(matriz, m);
        cout<<endl<< "El promedio de los elementos de la matriz es: " << promedio << endl;
    return 0;
	}
    
    


