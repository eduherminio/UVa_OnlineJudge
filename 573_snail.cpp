#include <iostream>
#include <vector>
#include <list>
#include <stdlib.h>

using namespace std;

class Caracol
{
    public:
    float H=1;
    float U;
    float D;
    float F;
};

int main()
{
    list<Caracol> Lista;
    list<Caracol>::iterator it= Lista.begin();
    (*it).H=1;

    while((*it).H!=0)
    {
        Caracol objeto;
        cin>>objeto.H;
        cin>>objeto.U;
        cin>>objeto.D;
        cin>>objeto.F;

        Lista.push_back(objeto);
        it++;
    }
    Lista.erase(it);            // Borra la línea que marca el final

    it= Lista.begin();

    vector<int> n_days;
    vector<bool> success;

    while(it!=Lista.end())
    {
        float height= (*it).H;
        float climb= (*it).U;
        float fall= (*it).D;
        float fatigue= (*it).F / 100;

        int cont=0;
        float increment;
        int i;
        float pos=0;

        while(1)
        {
            increment= climb-(cont*fatigue)*climb;

            if(increment>0)
                pos+= increment;

            cont++;         // Antes de que caiga la noche
            if(pos>height)
            {
                success.push_back(1);
                break;
            }

            pos-= fall;
            if(pos<0)
            {
                success.push_back(0);
                break;
            }
        }

        n_days.push_back(cont);

        it++;
    }

    it= Lista.begin();
    int j=0;
    while(it!=Lista.end())
    {
        //int i=distance(Lista.begin(), it);
        if(success[j])
        {
            cout<<"success on day "<<n_days[j]<<endl;;
        }
        else
        {
             cout<<"failure on day "<<n_days[j]<<endl;
        }
        j++;
        it++;

    }

    return 0;
}
