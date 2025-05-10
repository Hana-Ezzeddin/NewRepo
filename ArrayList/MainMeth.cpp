#include<iostream>
#include <assert.h>
#include "ArrListt.cpp"
using namespace std;

void removeDupes(ArrList<int>& arr) {
	for (int j = 1; j < arr.length(); j++) {
		for (int i = j+1; i < arr.length(); i++) {
			if (arr.At(j) == arr.At(i)) {
				arr.DeleteAt(i);
				i--;
			}
		}
	}
}
void main() {
	cout << "helloz" << endl;;
	ArrList<int> L1;
	L1.Append(1);
	L1.Append(2);
	L1.Append(3);
	L1.Append(3);
	L1.Append(4);
	//L1.Append(5);
	removeDupes(L1);
	L1.Display();
	/*L1.InsertAt(1, 200);
	L1.InsertAt(3, 125);*/
	/*L1.DeleteAt(2);
	L1.Display();
	L1.length();*/
}