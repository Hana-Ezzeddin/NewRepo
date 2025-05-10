#include<iostream>
#include <assert.h>
#include "ArrListt.h"
using namespace std;

template <class T>
ArrList<T>::ArrList() {
	size = 10;
	counter = 0;
	Arr = new T[size];
}
template <class T>
int ArrList<T>::length() {
	return counter;
}
template <class T>
T ArrList<T>::At(int pos) {
	assert(pos>0 && pos<counter);
	return Arr[pos];
}
template <class T>
void ArrList<T>::Append(T val) {
	if (counter == size)
		Expand();
	Arr[counter] = val;
	counter++;
}

template <class T>
void ArrList<T>::InsertAt(int pos, T element) {
	assert(pos >= 0 && pos <= counter);
	if (counter == size)
		Expand();
	for (int i = counter;i>pos;i--)
		Arr[i] = Arr[i-1];
		Arr[pos] = element;
	counter++;
}

template <class T>
void ArrList<T>::DeleteAt(int pos) {
	assert(pos > 0 && pos < counter);
	for (int i = pos; i < counter-1; i++) {
		Arr[i] = Arr[i + 1];
	}
	counter--;
}
template <class T>
void ArrList<T>::Expand() {
	size += 10;
	T* newArr = new T[size];
	for (int i = 0; i < counter; i++)
		newArr[i] = Arr[i];
	delete []Arr;
	Arr = newArr;
}
template <class T>
void ArrList<T>::Display() {
	for (int i = 0; i < counter; i++)
		cout << Arr[i] << endl;
}
template <class T>
ArrList<T>::~ArrList(void) {
	delete[]Arr;
 }