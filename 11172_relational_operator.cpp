#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number;
    vector<double> v1, v2;

    cin>>number;

    for(int i=0;i<number;i++)       // Almacenamiento de los números
    {
        double n1, n2;

        cin>>n1;
        v1.push_back(n1);

        cin>>n2;
        v2.push_back(n2);
    }

    for(int i=0;i<number;i++)
    {
        if(v1[i]>v2[i])
        {
            cout<<">"<<endl;
        }
        else if(v1[i]<v2[i])
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }


    return 0;
}
