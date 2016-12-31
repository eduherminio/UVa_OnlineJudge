#include <iostream>
#include <string>
#include <vector>

using namespace std;

class lovers
{
	public:
	string _country;
	int _n_women;

	lovers(string country, int n);
	lovers(string country);
};

lovers::lovers(string country, int n)
{
	_country= country;
	_n_women= n;
}

lovers::lovers(string country)
{
	_country= country;
	_n_women= 1;
}

int main()
{	
	bool coincidence;
	int n_lines;
	vector <lovers> women;

	cin>> n_lines;

	for(int i=0; i<n_lines; i++)
	{
		string country;
		cin>> country;
		
		string crap_name; // Useless :D
		getline(cin, crap_name);


		coincidence= false;

		for(int j=0; j< women.size(); j++)		// Calculates number of women
		{

			if(women[j]._country != country)
				coincidence= false;
			else
			{
				women[j]._n_women+= 1;
				coincidence= true;
				break;
			}
		} 
		if(!coincidence)							// Adds new country
		{
			lovers objeto(country, 1);
			women.push_back(objeto);
		}
												// Orders alphabetically the elements according to its country

		for(int k=0; k<women.size(); k++)				// element k
		{
			int l= k-1;									// previous element

			if(l<0)
				continue;

			if(women[k]._country < women[l]._country)
			{
				lovers objeto_aux(women[k]._country, women[k]._n_women);

				women[k]= women[l];
				women[l]= objeto_aux;
				k-=2;	// k++ de inmediato con el for, y hay que comprobar si el número que hemos
						// desplazado hacia la izq. es menor que el que están aún más a la izq.
			}				
	 	}	
	}

	for(int i=0; i<women.size(); i++)
	{
		cout<<women[i]._country<<" "<<women[i]._n_women<<endl;
	}
}