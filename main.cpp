#include <iostream>

using namespace std;

double calculos(double nota,int uv) {
    double valor;
    valor = nota * uv;

    return valor;
};

void uvcalculator(double CUM){

    if(CUM>7.0){
        cout<<"Usted puede llevar 21 UV el proximo ciclo"<<endl;
    }
    if(CUM>6.0 and CUM<6.99){
        cout<<"Usted puede llevar 16 UV el proximo ciclo"<<endl;
    }
    if(CUM<6.0){
        cout<<"Usted puede llevar 10 UV el proximo ciclo"<<endl;
    }
};


int main() {
    int cont,uvcounter;
    cout<<"Ingrese cuantas materias a cursado: "<<endl;
    cin>>cont;

    double arreglo[cont],UM,CUM;

    for (int i = 0; i < cont; ++i) {
        int uv;
        double nota;
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Ingrese la nota con la que termino su materia: "<<endl;
        cin>>nota;
        cout<<"Ingrese la cantidad de Unidades Valorativas tenia su materia: "<<endl;
        cin>>uv;
        uvcounter+=uv;
        arreglo[i]=calculos(nota,uv);
    }

    for (int j = 0; j < cont; ++j) {
        UM += arreglo[j];
    }

    CUM = UM/uvcounter;
    cout<<"Su CUM es :" << CUM<<endl;
    uvcalculator(CUM);
    return 0;
}