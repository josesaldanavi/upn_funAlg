#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
//DEFINIENDO LAS VARIABLES NECESARIAS
string nombre, auxnombre, semestre, edad;
int clave=0, auxclave=0;
char grupo[10];
char opca;
bool encontrado = false;


void altas()
{
    ///Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;	// Para opereraciones de escritura
    ifstream consulta;	// Para operaciones de lectura

    do{
    //ios::out : Abrir para escribir (escritura)
    //ios::app : Abrir para a�adir al final (append), s�lo utilizable si se ha abierto el fichero exclusivamente para escritura
    escritura.open("alumnos.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
    //ios::in : Abrir para leer (lectura)
    consulta.open("alumnos.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo f�sico alumnos.txt
    
    // is_open: Lo usamos para comprobar si se ha podido abrir (y no intentar leer de un fichero inexistente) 
    if (escritura.is_open() && consulta.is_open()){
			// Variable booleana para determinar si se ha reptido el archivo(false: no repetido)
            bool repetido=false;
            // Salto de l�nea
            cout<<"\n";
            // Se manda el mensaje, Ingrese la clave del alumno
            cout<<"\tIngresa la clave del alumno:    ";
            // Si asigna la clave a la variale auxclave
            cin>>auxclave;
            ///A continuaci�n se aplica el tipo de lectura de archivos secuencial
            consulta>>clave;
            // eof(): Es una funi�n para determinar el final del archivo
            while (!consulta.eof()){
                consulta>>nombre>>semestre>>grupo>>edad;
                if (auxclave==clave){
                    cout<<"\t\tYa existe la clave del alumno...\n";
                    repetido=true;
                    break;
                }
                consulta>>clave;
            }

            if (repetido==false){
                cout<<"\tIngresa el nombre del alumno:   ";
                cin>>nombre;
                cout<<"\tIngresa el semestre del alumno: ";
                cin>>semestre;
                cout<<"\tIngresa el grupo del alumno:    ";
                cin>>grupo;
                cout<<"\tIngresa la edad del alumno:     ";
                cin>>edad;
                //ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
                escritura<<auxclave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
                cout<<"\n\tRegistro agregado...\n";
            }

            cout<<"\n\tDeseas ingresar otro alumno? (S/N): ";
            cin>>opca;

    }else{
        cout<<"El archivo no se pudo abrir \n";
    }

    escritura.close();
    consulta.close();

    }while (opca=='S' or opca=='s');

}

void bajas()
{
    ofstream aux;
    ifstream lectura;

    encontrado=false;

    aux.open("auxiliar.txt", ios::out);
    lectura.open("alumnos.txt", ios::in);

    if (aux.is_open() && lectura.is_open()){

        cout<<"\n";
        cout<<"\tIngresa la clave del alumno que deseas eliminar: ";
        cin>>auxclave;
            
            ///De nuevo se aplica el tipo de lectura de archivos secuencial, esto quiere decir que lee campo por campo hasta
            ///hasta llegar al final del archivo gracias a la funci�n .eof()
            lectura>>clave;
            while (!lectura.eof()){
                lectura>>nombre>>semestre>>grupo>>edad;
                if (auxclave==clave){
                        encontrado=true;
                        cout<<"\n";
                        cout<<"\tClave:    "<<clave<<endl;
                        cout<<"\tNombre:   "<<nombre<<endl;
                        cout<<"\tSemestre: "<<semestre<<endl;
                        cout<<"\tGrupo:    "<<grupo<<endl;
                        cout<<"\tEdad:     "<<edad<<endl;
                        cout<<"\t________________________________\n\n";
                        cout<<"\tRealmente deseas eliminar el registro actual (S/N)? ---> ";
                        cin>>opca;

                        if (opca=='S' or opca=='s'){
                            cout<<"\n\n\t\t\tRegistro eliminado...\n\n\t\t\a";
                        }else{
                            aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
                        }

                    }else{
                        aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
                    }
                lectura>>clave;
            }
    }else{
        cout<<"\n\tEl archivo no se pudo abrir \n";
    }

    if (encontrado==false){
                cout<<"\n\tNo se encontro ningun registro con la clave: "<<auxclave<<"\n\n\t\t\t";
            }

    aux.close();
    lectura.close();
    remove ("alumnos.txt");
    rename("auxiliar.txt", "alumnos.txt");
}


void consultas()
{
    //Lectura de archivos

    ifstream lectura;
    lectura.open("alumnos.txt", ios::out | ios::in);//CREA, ESCRIBE O LEE
    if (lectura.is_open()){
       //LEYENDO Y MOSTRANDO CADA CAMPO DEL ARCHIVO DE FORMA SECUENCIAL
       lectura>>clave;
       while (!lectura.eof()){
            lectura>>nombre>>semestre>>grupo>>edad;
            cout<<"\n";
            cout<<"\tClave:    "<<clave<<endl;
            cout<<"\tNombre:   "<<nombre<<endl;
            cout<<"\tSemestre: "<<semestre<<endl;
            cout<<"\tGrupo:    "<<grupo<<endl;
            cout<<"\tEdad:     "<<edad<<endl;
            lectura>>clave;
            cout<<"\t________________________________\n";
       }

    }else{
        cout<<"El archivo no se pudo abrir \n";
    }
    lectura.close();
}


void buscar()
{
    ifstream lectura;
    lectura.open("alumnos.txt", ios::out | ios::in);

    encontrado=false;

    if (lectura.is_open()){
        cout<<"\n\tIngresa la clave del alumno que deseas buscar: ";
        cin>>auxclave;

        lectura>>clave;
        while(!lectura.eof()){
            lectura>>nombre>>semestre>>grupo>>edad;
        //comparar cada registro para ver si es encontrado

        if(auxclave==clave){
            cout<<"\n";
            cout<<"\tClave:    "<<clave<<endl;
            cout<<"\tNombre:   "<<nombre<<endl;
            cout<<"\tSemestre: "<<semestre<<endl;
            cout<<"\tGrupo:    "<<grupo<<endl;
            cout<<"\tEdad:     "<<edad<<endl;
            cout<<"\t________________________________\n";
            encontrado=true;
            break;
        }//fin del if mostrar encontrado

        //lectura adelantada
        lectura>>clave;
        }//fin del while
        if (encontrado==false){
            cout<<"\n\n\tNo hay registros con la clave: "<<auxclave<<"\n\n\t\t\t";
        }
    }else{
        cout<<"\n\tAun no se pudo abrir el archivo...";
    }

    lectura.close();
}

void modificar()
{
    ofstream aux;
    ifstream lectura;

    encontrado=false;

    aux.open("auxiliar.txt", ios::out);
    lectura.open("alumnos.txt", ios::in);

    if (aux.is_open() && lectura.is_open()){

        cout<<"\n";
        cout<<"\tIngresa la clave del alumno que deseas modificar: ";
        cin>>auxclave;

            lectura>>clave;
            while (!lectura.eof()){
                lectura>>nombre>>semestre>>grupo>>edad;
                if (auxclave==clave){
                    encontrado=true;
                    cout<<"\n";
                    cout<<"\tClave:    "<<clave<<endl;
                    cout<<"\tNombre:   "<<nombre<<endl;
                    cout<<"\tSemestre: "<<semestre<<endl;
                    cout<<"\tGrupo:    "<<grupo<<endl;
                    cout<<"\tEdad:     "<<edad<<endl;
                    cout<<"\t________________________________\n\n";
                    cout<<"\tIngresa el nuevo nombre del alumno con la clave: "<<auxclave<<"\n\n\t---> ";
                    cin>>auxnombre;

                    aux<<clave<<" "<<auxnombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
                    cout<<"\n\n\t\t\tRegistro modificado...\n\t\t\a";
                    }else{
                    aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
                    }
                lectura>>clave;
            }
    }else{
        cout<<"\n\tEl archivo no se pudo abrir \n";
    }

    if (encontrado==false){
                cout<<"\n\tNo se encontro ningun registro con la clave: "<<auxclave<<"\n\n\t\t\t";
            }

    aux.close();
    lectura.close();
    remove ("alumnos.txt");
    rename("auxiliar.txt", "alumnos.txt");
}

int main()
{
    system ("color f0");
    int opc;

    do{
    system("cls");

    cout<<"\n\tManejo de archivos en c++\n\n";
    cout<<"\n\t1.-Altas";
    cout<<"\n\t2.-Bajas";
    cout<<"\n\t3.-Consultas";
    cout<<"\n\t4.-Buscar un registro";
    cout<<"\n\t5.-Modificaciones";
    cout<<"\n\t6.-Salir";
    cout<<"\n\n\tElige una opcion:  ";
    cin>>opc;
    switch (opc)
    {
case 1:{
    system("cls");
    altas();
    cout<<"\n\t\t";
    system ("pause");
    break;
}
case 2:{
    system("cls");
    bajas();
    cout<<"\n\t\t";
    system ("pause");
    break;
}

case 3:{
    system("cls");
    consultas();
    cout<<"\n\t\t";
    system ("pause");
    break;
}
case 4:{
    system("cls");
    buscar();
    cout<<"\n\t\t";
    system ("pause");
    break;
}
case 5:{
    system("cls");
    modificar();
    cout<<"\n\t\t";
    system ("pause");

    break;
}
case 6:{
    cout<<"\n\n\tHa elegido salir...\n\n\t\t"; system ("pause");
    break;
}
default:{
    cout<<"\n\n\tHa elegido una opcion inexistente...\n\n\t\t"; system ("pause");
    break;
}
    }//fin switch

    }while (opc!=6);

    system("cls");

    return 0;
}
