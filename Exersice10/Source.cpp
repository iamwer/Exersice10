#include <iostream>
#include <vector>
#include <string>
using namespace std;


int GetMin(int numbers[], int size)
{
	int min = numbers[0];
	for (int i = 1; i < size; i++)
	{
		if(numbers[i] < min)
			min = numbers[i];
	}
	return min;
}


int GetMax(int numbers[], int size)
{
	int max = numbers[0];
	for (int j = 1; j < size; j++)
	{
		if (numbers[j] > max)
			max = numbers[j];
	}
	return max;
}

void getMinandMax(int numbers[], int size, int* min, int* max)
{
	for (int i = 1; i < size; i++)
	{
		if (numbers[i] > *max)
			*max = numbers[i];
		if (numbers[i] < *min)
			*min = numbers[i];
	}
}


int main()
{
	int numbers[5] = { 5,4,-2,29,3 };
	cout << "Min is " << GetMin(numbers, 5) << endl;

	cout << "Max is " << GetMax(numbers, 5) << endl;

	int min = numbers[0];
	int max = numbers[0];
	getMinandMax(numbers, 5, &min, &max);
	cout << "Min is " << min << endl;
	cout << "Max is " << max << endl;





	system("pause>0");
	return 0;
}