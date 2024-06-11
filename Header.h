#pragma once
template <typename X> class Array
{
	X _Size;     //������ �������
	X* _Data;    //��������� �� ������
public:
	Array(unsigned Size);   // ����������� +
	virtual ~Array();         // ���������� + 
	Array(const Array& p);     // ����������� ����������� +
	Array& operator =(Array const& A);    // �������� ������������ 
	void set(int i, X val);		// ������ �������� � ������ +
	X get(int i);			// ��������� �������� ������� +
	unsigned getSize();		// ��������� ������� ������� +

};