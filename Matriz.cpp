#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int matriz[3][3];
	for(int a=0; a<3; a++){
		for(int b=0; b<3; b++){
			matriz[a][b]= rand()%9+1;
		}
	} 
	cout<<"Matriz: "<<endl;
	for(int a=0; a<3; a++) {
        for(int b=0; b<3; b++) {
            cout << matriz[a][b] << "\t";
        }
        cout << endl;
    }
    int det_matriz;
    det_matriz= 
	  (matriz[0][0]*matriz[1][1]*matriz[2][2])
	 +(matriz[0][1]*matriz[1][2]*matriz[2][0])
	 +(matriz[0][2]*matriz[1][0]*matriz[2][1])
	 -(matriz[0][2]*matriz[1][1]*matriz[2][0])
	 -(matriz[0][0]*matriz[1][2]*matriz[2][1])
	 -(matriz[0][1]*matriz[1][0]*matriz[2][2]);

	
	cout<<"La determinante de la Matriz es :"<<det_matriz<<endl;
	
	
	return 0;
}

