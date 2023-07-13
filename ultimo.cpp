#include <iostream>
#include <fstream>
using namespace std;
void datos(string nombre[],int edad[])
{
   for (int i=0; i<3; i++)
   {
      cout<<"Ingresar nombre: ";
      cin>>nombre[i];
      cout<<"Ingresar edad: ";
      cin>>edad[i];
   }
}
void agregar_archivo(string nombre[], int edad[])
{
   ofstream archivo;
   archivo.open("kjsd.txt", ios::app);
   for (int i=0; i<3; i++)
   {
      archivo<<"nombre:"<<nombre[i]<<"   ";
      cout<<endl;
	  archivo<<"edad:  "<<edad[i] << endl;
   }
   archivo.close();
}
int main()
{
   string nombre[3];
   int edad[3];
   datos(nombre, edad);
   agregar_archivo(nombre, edad);
}




