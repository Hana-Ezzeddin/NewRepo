#pragma once
template <class T1>
class ArrList {
	int counter;
	int size;
	T1* Arr;
public:
	ArrList();
	int length();
	T1 At(int pos);
	void Append(T1 element);
	void DeleteAt(int pos);
	void InsertAt(int pos, T1 element);
	void Display();
	void Expand();
	~ArrList(void);
};
