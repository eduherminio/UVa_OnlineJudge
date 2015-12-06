#include <iostream>
#include <vector>


using namespace std;

class Coordenadas
{
    public:
    int x;
    int y;
};

int main()
{
    vector<string> Pantalla;

    int tam, x_axis, y_axis;
    int NORTE, OESTE;

    string NO="NO";
    string NE="NE";
    string SO="SO";
    string SE="SE";
    string divisa="divisa";

    while(1)                        // Introducción de datos
    {
        vector<Coordenadas> Contenedor;              // Reinicialización de Contenedor, para hacer uso efectivo de push_back()

        cin>>tam;
        if(tam==0)
            break;


        cin>>x_axis;
        cin>>y_axis;

        Coordenadas objeto;

        for(int i=0;i<tam;i++)      // Introducción una secuencia
        {
            cin>>objeto.x;
            cin>>objeto.y;

            Contenedor.push_back(objeto);
        }

        vector<Coordenadas>::iterator it=Contenedor.begin();

        while(it!=Contenedor.end())      // Cálculo de una secuencia
        {
            NORTE=0;
            OESTE=0;

            if(( *it).x == x_axis)
            {
                Pantalla.push_back(divisa);
                it++;
                continue;
            }
            else if ( (*it).x < x_axis)
                OESTE=1;

            if(( *it).y == y_axis)
            {
                Pantalla.push_back(divisa);
                it++;
                continue;
            }
            else if(( *it).y > y_axis)
                NORTE=1;


            if(NORTE && OESTE)                     // Almacenamiento de los resultados en otra cadena
                Pantalla.push_back(NO);
            else if(NORTE && !OESTE )
                Pantalla.push_back(NE);
            else if(!NORTE && OESTE)
                Pantalla.push_back(SO);
            else
                Pantalla.push_back(SE);

            it++;
        }
    }

    vector<string>::iterator aux=Pantalla.begin();

    while(aux!=Pantalla.end())                  // Output
    {
        cout<<(*aux)<<endl;

        aux++;
    }

    return 0;
}
