#include <iostream>
using namespace std;

int main()
{
///Declaração de Variavel
    long long int CdeBarras,n12,n11,n10,n9,n8,n7,n6,n5,n4,n3,n2,n1,n0,DVerificadorCal,DVerificadorCal2,DVerificador;
///Entrada de Dados
    cout<<"Digite o codigo de barras"<<endl;
    cin>>CdeBarras;
///checar se o número tem 13 dígitos
    if (CdeBarras >=1000000000000 && CdeBarras <=9999999999999){
///Separando os dígitos
        n12=CdeBarras/1000000000000;
        n11=CdeBarras%1000000000000/100000000000;
        n10=CdeBarras%100000000000/10000000000;
        n9=CdeBarras%10000000000/1000000000;
        n8=CdeBarras%1000000000/100000000;
        n7=CdeBarras%100000000/10000000;
        n6=CdeBarras%10000000/1000000;
        n5=CdeBarras%1000000/100000;
        n4=CdeBarras%100000/10000;
        n3=CdeBarras%10000/1000;
        n2=CdeBarras%1000/100;
        n1=CdeBarras%100/10;
        n0=CdeBarras%10;
///Calculo do número verificador
        DVerificadorCal=(n1*3)+(n3*3)+(n5*3)+(n7*3)+(n9*3)+(n11*3)+n2+n4+n6+n8+n10+n12;
        DVerificadorCal2=(DVerificadorCal/10+1)*10;
        DVerificador=DVerificadorCal2-DVerificadorCal;
///Se o número for divisivel por 10 seu mod e 0
        if (DVerificador%10==0){
            DVerificador = 0;
            }
///Saída de Dados
        if (DVerificador == n0){
                cout<<("O codigo de barras foi digitado corretamente")<<endl;
        }
                else {
             cout<<("O codigo de barras  foi digitado incorretamente")<<endl;
                }
        }

        else {
             cout<<("O codigo de barras  nao contem 13 digitos")<<endl;
        }

    return 0;
}



