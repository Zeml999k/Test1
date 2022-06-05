#include <iostream> // ������:  �������� ������ ����� ����� �� 50 ���������.

//��������� ���������� ������� � ��������� �� - 1000 �� 1000.

//����� ������� ������������� � ������������ ���������.

//������� ��������, �����������  ����� ����.
#include <ctime>
#include<random>
void Rand(int arr[], int size)
{
	int max = 0, min = 0, indexMAX = 0, indexMIN = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 2000 - 1000;// ��������� ������ ���������� �������
		if (arr[i] > max)
		{
			max = arr[i];
			indexMAX = i;
		}// �������� ����� ������������� � ������������ ���������
		if (arr[i] < min)
		{
			min = arr[i];
			indexMIN = i;
		}
		std::cout << arr[i] << " | ";
	}
	std::cout << "\nmax:\t" << max << "\n";
	std::cout << "\nmin:\t" << min << "\n";
	std::cout << "\n\t����� ���������� ����� ���c ���� � ���:\n\t";
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