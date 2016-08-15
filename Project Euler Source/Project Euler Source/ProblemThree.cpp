#include <iostream>
#include <vector>

using namespace std;

//Test Edit

//Create a vector fibVec to hold the fibonacci sequence
vector <unsigned int> fibVec;

//Declare the sum variable to be zero initially
//unsigned for efficiency and clarity
unsigned int fibEvenSum = 0;

void fibCount()
{
	//enter the loop at the third element
	//this makes more sense later
	for (size_t i = 3; ; i++)
	{
		//push back an element because it doesn't exist at this point, failing to push back
		//creates a null point exception
		fibVec.push_back(0);

		//This is the fibonacci sum
		fibVec[i] = fibVec[i - 1] + fibVec[i - 2];

		//If fib# is even and less than four million 
		if (fibVec[i] % 2 == 0 && fibVec[i] < 4000000)
		{
			//increment the sum by the value of the number 
			fibEvenSum += fibVec[i];
		}

		//if the value is greater than four million, break out of the loop
		if (fibVec[i] > 4000000)
		{
			break;
		}
	}
}

int main()
{
	//Push back the initial conditions for the fibonacci sequence
	//This gives us elements @indices 0, 1, &2
	fibVec.push_back(0);
	fibVec.push_back(1);
	fibVec.push_back(1);

	//Call the fibCount function which is defined above 
	fibCount();

	//Print the answer to the console
	cout << fibEvenSum;

	//Hold the console open
	cin.get();

	//Standard return 0 at the end of the main thread
	return 0;
}



