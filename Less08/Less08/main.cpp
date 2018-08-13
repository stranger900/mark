#include<iostream>

using namespace std;

int main()
{
	int size = 0, rows =0, cols = 0;
	cout << "Enter size of array:" << endl;
	cin >> size;
	rows = cols = size;

	//create array1
	int **arr1 = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		arr1[i] = new int[cols];
	}
	//create array2
	int **arr2 = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		arr2[i] = new int[cols];
	}
	//create array3
	int **arr3 = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		arr3[i] = new int[cols];
	}
	///////////////////////////////////////////////////
	//Ente data array1
	cout << "Ente data array1 : " << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << "arr1[" << i << "][" << j << "] = ";
			cin >> arr1[i][j];

		}
	}
	//Ente data array2
	cout << "Ente data array2 : " << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << "arr2[" << i << "][" << j << "] = ";
			cin >> arr2[i][j];

		}
	}
	///////////////////////////////////////////////////
	//multiplication arrays
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			for (int k = 0; k < size; ++k) {
				arr3[i][j] = arr1[i][k] * arr2[k][j];
			}

		}
	}
	//Output arr3
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << arr3[i][j] << "   ";
			
		}
		cout << endl;
	}

	///////////////////////////////////////////////////
	//delete array1
	for (int i = 0; i < rows; ++i)
	{
		delete[] arr1[i];
	}
	delete[] arr1;

	//delete array2
	for (int i = 0; i < rows; ++i)
	{
		delete[] arr2[i];
	}
	delete[] arr2;

	//delete array3
	for (int i = 0; i < rows; ++i)
	{
		delete[] arr3[i];
	}
	delete[] arr3;
	return 0;
}