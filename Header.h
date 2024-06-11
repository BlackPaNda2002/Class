#pragma once
template <typename X> class Array
{
	X _Size;     //Размер массива
	X* _Data;    //Указатель на массив
public:
	Array(unsigned Size);   // Конструктор +
	virtual ~Array();         // Деструктор + 
	Array(const Array& p);     // Конструктор копирования +
	Array& operator =(Array const& A);    // Оператор присваивания 
	void set(int i, X val);		// Запись элемента в массив +
	X get(int i);			// Получение элемента массива +
	unsigned getSize();		// Получение размера массива +

};