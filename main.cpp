#include <iostream>
#include <locale>
#include <string>
#include <stdio.h>

using namespace std;

string total;

bool revisa(string actual){
	if(actual[0]!=total[0]){
		return false;
	}
	if (actual[1]!=total[1]){
        return false;
	}
	if (actual[2]!=total[2]){
        return false;
	}
	if (actual[3]!=total[3]){
     return false;
     }
	return true;
}


bool vocal(char caracter){
    if(caracter=='a'){
        return true;
    }
    if(caracter=='e'){
        return true;
    }
    if(caracter=='i'){
        return true;
    }
    if(caracter=='o'){
        return true;
    }
    if(caracter=='u'){
        return true;
    }
    return false;
}


int main()
{
    char nombre[40];
    cout << "Nombre: ";
    cin >>  nombre;

    wchar_t apellido_pat[40];
    cout << "Apellido paterno:";
    wcin >> apellido_pat;
    int pos;
    for(pos=1;!vocal(apellido_pat[pos]);pos++);

    char apellido_mat[40];
    cout << "Apellido materno:" ;
    cin >> apellido_mat;

    int year;
    cout <<"Año de nacimiento:" ;
    cin >> year;

    int mes;
    cout <<"Mes de nacimiento:(en número)" ;
    cin >> mes;

    int dia;
    cout <<"Día de nacimiento:" ;
    cin >> dia;

    if (apellido_pat[0]==165){
        apellido_pat[0]='X';
    }
    total[0]=apellido_pat[0];
    total[1]=apellido_pat[pos];
    total[2]=apellido_mat[0];
    total[3]=nombre[0];
    for (int i = 0; i < 4; i++) {
        total[i] = toupper(total[i]);
    }

    string cadena;
    freopen ("inconvenientes.txt","r",stdin);
    while(cin >> cadena){
        if(revisa(cadena)){
            total[1]='X';
            break;
        }
    }

    cout << total[0] << total[1] << total[2] << total[3] <<year%100;
    if (mes<10) {
        cout <<0 <<mes;
    }
    if (mes>=10) {
    cout <<mes;
    }

    if (dia<10){
        cout <<0 <<dia;
    }
    if (dia>=10){
        cout <<dia << endl;
    }


    return 0;

}

