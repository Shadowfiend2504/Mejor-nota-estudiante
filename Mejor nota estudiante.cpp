#include <iostream>
#include <conio.h>

using namespace std;

struct Alumno{
    char nombre[20];
    int edad;
    float promedio;
}*alumnos;

main()
{
    int pos=0, posm=0, n=0;
float  mayor=0, menor=0, EP=0;

do{

cout<<"Ingrese la cantidad de alumnos :";cin>>n;
}while (n<0);

alumnos =new Alumno[n];
   
    //pedir los datos de los alumnos
    for (int i=0;i<n;i++)
    {
   
        fflush(stdin);
        cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
        cout<<"Edad: "; cin>>alumnos[i].edad;
        cout<<"Promedio: "; cin>>alumnos[i].promedio;
       
        if( i==0 ) menor=   alumnos[i].promedio;
       
        if(alumnos[i].promedio>mayor)
        {
            mayor=alumnos[i].promedio;
            pos=i;
        }
        else if(alumnos[i].promedio<menor)
        {
            mayor=alumnos[i].promedio;
            posm=i;
        }
       
        EP+=double(alumnos[n].edad)/n;
        cout<<"\n";
    }
   
    cout<<"\nAlumno con mejor promedio: \n";
    cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
    cout<<"Edad: "<<alumnos[pos].edad<<endl;
    cout<<"Promedio: "<<alumnos[pos].promedio<<endl;
   
    cout<<"\nAlumno con menor promedio: \n";
    cout<<"Nombre: "<<alumnos[posm].nombre<<endl;
    cout<<"Edad: "<<alumnos[posm].edad<<endl;
    cout<<"Promedio: "<<alumnos[posm].promedio<<endl;
   
    cout<<"\nLa edad promedio de los estudiantes es de :\n"<<EP;
}
