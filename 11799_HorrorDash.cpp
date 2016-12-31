#include <iostream>
#include <vector>

using namespace std;

int main()
{
 
	int n_cases=0; // Sin inicializar, distinta ejecución en Sublime y en consola

	cin >> n_cases;

	int output[n_cases];

	for(int i=1; i< (n_cases+1); i++)		// n_cases loop
	{
		int n_students;
		cin >> n_students;
		
		vector <int> speed_students;

		for(int j=0; j< n_students; j++)	// n_students loop
		{
			int input;
			cin>> input;

			speed_students.push_back(input);
		}

		int max_speed=1;

		for(int k=0; k< n_students; k++)	// n_students loop
		{
			if(speed_students[k]> max_speed)
				max_speed= speed_students[k];
		}

		output[i]= max_speed;
	}


	for(int l=1; l< (n_cases+1); l++)		// n_cases loop
	{
		cout<< "Case " << l << ": " << output[l] <<endl; 
	}

}