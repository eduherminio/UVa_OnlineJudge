#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <math.h>
#include <list>

using namespace std;

class clase
{
public:
    
    int m;
    int n;
};

int main()
{
    list<clase> lista;
    clase objeto;
    
    while(cin>>objeto.m)
     {
        cin>>objeto.n;
        lista.push_back(objeto);
     }
    
    list<clase>::iterator it=lista.begin();
    
    while(it!=lista.end())
    {
        int piezas= (*it).m + (*it).n;      // Piezas necesito
        
        int cortes;
         
         cortes= (*it).m -1 + ( (*it).n -1 )* (*it).m;
         
         cout<<cortes<<endl;
         
         it++;
    }

}