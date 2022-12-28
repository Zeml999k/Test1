
//Declare an array of integers with 50 elements.

//Fill with random numbers in the range from -1000 to 1000.

//Find the indices of the maximum and minimum elements.

//Output the elements between them.


#include<iostream>
#include<ctime>
#include<random>
void Rand(int arr[], int size)
{
	int max = 0, min = 0, indexMAX = 0, indexMIN = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 2000 - 1000;
		if (arr[i] > max)
		{
			max = arr[i];
			indexMAX = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			indexMIN = i;
		}
		std::cout << arr[i] << " | ";
	}
	std::cout << "\nmax:\t" << max << "\n";
	std::cout << "\nmin:\t" << min << "\n";
	std::cout << "\n\tâûâîä ïðîìåæóòêà ìåæäó ìàêc ýëåì è ìèí:\n\t";
	for (int i = 0; i < size; i++)
	{
		if (i > indexMIN && i < indexMAX) std::cout << arr[i] << " | ";
	}
}
int main()
{
	std::locale loc("Russian");
	std::locale::global(loc);
	srand(time(NULL));
	const int size = 50;
	int arr[size]{};
	Rand(arr, size);
}
