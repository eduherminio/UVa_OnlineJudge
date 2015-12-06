#include <iostream>
#include <list>
#include <vector>

using namespace std;

bool Orden(unsigned long&, unsigned long&);

int main()
{
    list<unsigned long> Contenedor;
    list<unsigned long>::iterator it;
    vector<int> Solucion;

    unsigned long aux;
    int pos;

    while(cin>>aux)
    {
        Contenedor.push_back(aux);
        Contenedor.sort(Orden);

        pos=Contenedor.size() / 2;

        it=Contenedor.begin();
        advance(it,pos);

        if(Contenedor.size()%2 ==1)
            Solucion.push_back(*it);
        else
        {
            int aux=*it;
            it--;
            Solucion.push_back( (aux + *(it) ) / 2);

    /*  NO VALE:

                int median= (*it + *(it--) ) / 2;
                Solucion.push_back(median;)

        Ya que Primero imprime el *it final, y luego decrementa


    */
        }
    }

    for(int i=0;i<Solucion.size();i++)
        cout<<Solucion[i]<<endl;

    return 0;
}

bool Orden(unsigned long &first, unsigned long &second)
{
    return(first<second);
}
