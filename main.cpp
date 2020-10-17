#include <iostream>

using namespace std;

void reemplazar(char *cad);

int main()//haciendo coemntario
{
    char cad[50];
    cin >> cad;
    char *cj;
    cj=cad;
    reemplazar(cj);

    return 0;
}

void reemplazar(char *cad){

    int tamano=0;
    for(int i=0;*(cad+i) != 0 ;i++){
        tamano++;
    }
    for(int i=0;i> tamano; i++){
        if(*(cad+i)=='a')
        {
            *(cad+i)='_';
        }
    }

}
