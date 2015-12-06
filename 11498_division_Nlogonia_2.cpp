#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> Pantalla;

    int tam, x_axis, y_axis;
    int NORTE, OESTE;

    while(1)                        // Introducción de datos
    {
        cin>>tam;

        if(tam==0)
            break;

        cin>>x_axis;
        cin>>y_axis;

        for(int i=0;i<tam;i++)      // Introducción una secuencia
        {
            int x;
            int y;

            NORTE=0;
            OESTE=0;

            cin>>x;
            cin>>y;

            if(x == x_axis)
            {
                Pantalla.push_back("divisa");
                continue;
            }
            else if ( x < x_axis)
                OESTE=1;

            if(y == y_axis)
            {
                Pantalla.push_back("divisa");
                continue;
            }
            else if(y > y_axis)
                NORTE=1;


            if(NORTE && OESTE)                     // Almacenamiento de los resultados en otra cadena
                Pantalla.push_back("NO");
            else if(NORTE && !OESTE )
                Pantalla.push_back("NE");
            else if(!NORTE && OESTE)
                Pantalla.push_back("SO");
            else
                Pantalla.push_back("SE");
        }

    }

    vector<string>::const_iterator aux=Pantalla.begin();

    while(aux!=Pantalla.end())                  // Output
    {
        cout<<(*aux)<<endl;
        aux++;
    }

    return 0;
}
