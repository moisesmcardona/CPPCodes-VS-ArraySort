#include <iostream>
using namespace std;

void bubbleSort(int array[], int size);
void selectionSort(int array[], int size);
void showArray(int array[], int size);
void getArray(int array[], int size);
int getmethod();

int main()
{
	int array[10];
	int size = 10;
	getArray(array, size);
	if (getmethod() == 1)
		bubbleSort(array, size);
	else
		selectionSort(array, size);
	showArray(array, size);
	system("pause");
}

void bubbleSort(int array[], int size)
{
	int temp;
	bool swap;
	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}
void selectionSort(int array[], int size)
{
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] > minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}
void showArray(int array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;


}

void getArray(int array[], int size)
{
	for (int count = 0; count < size; count++)
	{
		cout << " Array[" << count << "]:";
		cin >> array[count];
	}
	cout << endl;
}

int getmethod()
{
	int method;
	cout << "Enter 1 for bubble sort or 2 for selection sort: ";
	cin >> method;
	return method;
}