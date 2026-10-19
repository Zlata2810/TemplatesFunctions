#include <iostream>
using namespace std;

//перегруженные функции для инициализацыы масивов





template <class T>
void MinElement(T mas[], int size) {
	int min = mas[0];
	for(int i = 1; i < size; i++) 
	{
		if(mas[i] < min) {
			min = mas[i];
		}
	}
	cout << "Minimum element: " << min << endl;
}
template <class T>
void MinElementIndex(T mas[], int size) {
	int min = mas[0];
	int minIndex = 0;
	for (int i = 1; i < size; i++)
	{
		if (mas[i] < min) {
			min = mas[i];
			minIndex = i;
		}
	}
	cout << "Minimum element index: " << minIndex << endl;
}
template <class T>
void Sum(T mas[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += mas[i];
	}
	cout << "Sum of elements: " << sum << endl;
}
template <class T>
void PositivElements(T mas[], int size) {
	
	
	for (int i = 0; i < size; i++)
	{
		if (mas[i] > 0) {
			cout << mas[i] << " ";
		}
	}
	cout << endl;
}


int main() {
	int arr[5]{ 1,5,8,-9,10 };
	MinElement(arr, 5);
	MinElementIndex(arr, 5);
	Sum(arr, 5);
	PositivElements(arr, 5);
	
}