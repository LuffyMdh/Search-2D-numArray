#include <iostream>

using namespace std;

int main()
{
	int numArray[10][2] = {{4324,50},
						   {5621,62},
						   {6922,70},
						   {7241,90},
						   {7732,88},
						   {7924,0},
						   {8120,65},
						   {8448,89},
						   {8921,100},
						   {9201,71}};
						   
	int stuNum;
	int row = 0;
	bool found = false;
	
	
	cout << "Enter student number :";
	cin >> stuNum;
	
	while(row<10 && not found)
	{
		if(stuNum == numArray[row][0]){
			cout << numArray[row][1] << endl;
			found = true;
			}
		row++;
	}
	
	if(found == false)
	{
		cout << "Student Number is invalid" << endl;
	}
	
	
	return 0;
}