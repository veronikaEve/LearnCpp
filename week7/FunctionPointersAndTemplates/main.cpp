#include <iostream>
#include "GameObject.h"

using namespace std;

void HelloMessage() {
	cout << "Hello" << endl;
}

void Goodbye() {
	cout << "Goodbye" << endl;
}

void Message(const string param){
	cout << param << endl;
}

void Sort(int *numbers, int size, bool (*sortType)(int, int)) {
	for (int n= 0; n < size; n++) {
		int nBestIndex = n;
		for (int i = n + 1; i < size; i++){
//			if (numbers[i] < numbers[nBestIndex]) nBestIndex = i;
			if(sortType(numbers[i], numbers[nBestIndex])) nBestIndex = i;
		}
		swap(numbers[n], numbers[nBestIndex]);
	}
	for (int i=0; i < size; i++)
		cout << numbers[i] << endl;
}

bool Ascending(int nX, int nY) {
	return nY > nX;
}

bool Descending(int nX, int nY) {
	return nY < nX;
}

template <typename Temp>
Temp DisplayArray(Temp * arrayPointer, Temp sizeOfArray) {
	for (int i = 0; i < sizeOfArray; ++i) {
		cout << arrayPointer[i] << endl;
	}
}

template <typename Temp>
Temp SumArray(Temp * arrayPointer, int sizeOfArray){
	Temp sumOfArray = 0;
	//Initialising this to 0 got rid of the issue of the function returning the pointer and not the actual value
	for (int i = 0; i < sizeOfArray; ++i) {
		sumOfArray += arrayPointer[i];
	}
	return sumOfArray;
}


int main() {
	// FUNCTION POINTERS
//	void(*message)();
//	message=HelloMessage;
//	message();
//	message=Goodbye;
//	message();
//
//	void(*newMessage)(string);
//	newMessage=Message;
//	newMessage("Bunny");
//
//	int numbers[9] ={ 3, 7, 9, 5, 6, 1, 8, 2, 4 };
//
//	bool (*sortType)(int, int);
//
//	sortType = Ascending;
//	Sort(numbers,9, sortType);
//
//	sortType = Descending;
//	Sort(numbers,9, sortType);

	// MEMBER FUNCTION POINTERS
//	static GameObject newGameObject(1234, 10, 20, 30);
//
//	void (GameObject::*draw)();
//	draw = &GameObject::Draw;
//	(newGameObject.*draw)();
//
//	int *(GameObject::*move)(int, int, int);
//	move = &GameObject::Move;
//	int *newPosition = (newGameObject.*move)(1,2,3);
//	for (int i = 0; i < 3; ++i) {
//		cout << newPosition[i] << endl;
//	}

	// FUNCTION TEMPLATE
//int newArray[9] = {5,6,7,8,9,10,11,12,13};
//	DisplayArray<int>(newArray, 9);
//
//float newestArray[9] = {5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1};
//	DisplayArray<float>(newestArray, 9);
//
//	cout << SumArray<int>(newArray, 9) <<endl;
//	cout << SumArray<float>(newestArray, 9) << endl;

GameObject<int>intTemplateObject(000, 10, 20, 30);
intTemplateObject.Move(1,2,3);
intTemplateObject.Draw();

GameObject<float>floatTemplateObject(001, 10.1, 20.1, 30.1);
floatTemplateObject.Move(1.1, 2.2, 3.3);
floatTemplateObject.Draw();

}
