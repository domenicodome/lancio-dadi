#include <iostream> //a.d.//
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int puntata;

    cout<<"inserire il numero da gicare ---> ";
    cin>>puntata;

    srand(time(NULL));

    int numerocasuale = rand();
    int lanciodado = numerocasuale%6 +1;

    cout<<"Lancio dado ---> "<<lanciodado<<endl;
    cout<<""<<endl;

    if (lanciodado==puntata){
        cout<<"HAI VINTO 1 EURO!!!!!!";
        
    }else{
        cout<<"Hai PERSO, ritenta sarai PIU' FORTUNATO!!!!"<<endl;
        
        }
    return 0;
}
