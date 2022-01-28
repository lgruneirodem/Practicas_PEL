


#include <iostream>
#include <fstream>
using namespace std;
struct nodo{
    string fecha;
    string hora;
    string email;
    string nombre;
    string apellido;
    bool repite;     //Si = 0 - No = 1
    int numExp;
    string github;
    int nivel ;
    bool expo;      //Si = 0 - No = 1
    bool act1;      //Si = 0 - No = 1
    int mes;
    int year;
    bool presencial; //Presencial = 0 - Online = 1

  nodo *sgt;
};

void leerArchivos (nodo *&lista);
void leerArchivos (nodo *&lista) {   //el & es porque quieres hacer una modificación en la lista
    ifstream fin("../Alumnos.txt");
    try {
        while (!fin.eof()) {
            nodo *recorrer = new nodo();
            fin >> recorrer->fecha >> recorrer->hora >> recorrer->email >> recorrer->nombre >> recorrer->apellido >> recorrer->repite >> recorrer->numExp >> recorrer->github >>
            recorrer->nivel >> recorrer->expo >> recorrer->act1 >> recorrer->mes >> recorrer->year >> recorrer->presencial;
            //una vez leido el fichero imprimimos los datos
            cout <<recorrer->fecha<<" "<<recorrer->hora<<" "<<recorrer->email<<" "<<recorrer->nombre<<" "<<recorrer->apellido<<" "<<recorrer->repite<<" "<<recorrer->numExp<<" "<<
            recorrer->github<<" "<<recorrer->nivel <<" "<<recorrer->expo<<" "<<recorrer->act1<<" "<<recorrer->mes<<" "<<recorrer->year<<" "<<recorrer->presencial<<endl;

            if (lista==NULL){
                lista = recorrer;
                recorrer->sgt = NULL;
            }else{
                recorrer->sgt = lista;
                lista = recorrer;
            }
        }
    }
    catch(...){
        fin.close();
    }
}

void alumnoMayor(nodo *lista);
void alumnoMayor(nodo *lista){

    do{
        if(){

        }
        lista = lista->sgt;
    }while (lista != NULL);

}

void birthday (nodo *lista);
void birthday (nodo *lista){
    do{
        int mes;
        cin>>mes;
        if(mes == 11){


            cout<< mes  << "";

        }
        lista = lista->sgt;
    }while (lista != NULL);

}

void ExpImpar (nodo *lista);
void ExpImpar (nodo *lista){
    int impares = 1;
    int d;
    cin>>d;
    do{
        int impares = 1;
        int d;
        cin>>d;
        if(impares <= d){

            cout <<"los alumnos impares son ";
            impares +=2;
            cout<< impares << " ";

        }
        lista = lista->sgt;
    }while (lista != NULL);

}

void ExPar (nodo *lista);
void ExPar (nodo *lista){
    int pares =2;
    int n;
    cin>>n;
    do{

        if(pares <= n){
             pares +=2;
             cout<< pares <<" ";

        }
        lista = lista->sgt;
    }while (lista != NULL);

};
void Act1 (nodo *lista);
void Act1 (nodo *lista){
    bool act1;
    int porcentaje;
    int entrega_act;
    int cantidadTotal=18;
    do{
        if(act1 ==0 ){

            porcentaje = ((entrega_act)/100)*cantidadTotal;
            cout<< " El porcentaje es del "<< porcentaje <<"% ";
        }
        lista = lista->sgt;
    }while (lista != NULL);

};

void Presencial (nodo *lista);
void Presencial (nodo *lista){
     int totalAlumnos;
     bool presencial;
     int alum_presencial;
     int alum_online;

     do{
        if(presencial==0){



        }
        lista = lista->sgt;
    } while (lista != NULL);

}
int main() {
    nodo *inicio=NULL;
    leerArchivos(inicio);
    int opc;

    //menú

cout<<"eliga una opcion: ";
cout<<"\t1. ¿Quien es el alumno más viejo?"<<endl;
cout <<"\t2. ¿Cuanto alumnos cumple años este mes?"<<endl;
cout <<"\t3. listado de alumnos con expediente impar "<<endl;
cout <<"\t4. listadode alumno con expediente par "<<endl;
cout <<"\t5. porcentaje de alumnos que entregaron la actividad 1: "<<endl;
cout <<"\t6. Numero y listado de gente que acudio a clase online y a clase presencial "<<endl;

cin>>opc;

switch (opc){
    case 1:
        alumnoMayor(inicio);
        break;
    case 2:
        birthday(inicio);
        break;
    case 3:
        ExpImpar(inicio);
        break;
    case 4:
        ExPar(inicio);
        break;
    case 5:
        Act1 (inicio);
        break;
    case 6:
        Presencial(inicio);
        break;


}

}



