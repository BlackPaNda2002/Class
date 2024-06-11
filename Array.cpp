#include "Header.h"

template <typename T> Array<T>:: Array(unsigned Size)
{
	_Size = Size;
	_Data = new T [_Size];
}

template <typename T> Array<T>::~Array()
{
	delete[] _Data;
}

template<typename X>
Array<X>::Array(const Array& p)
{
	_Size = p._Size;
	_Data = new X[_Size];
	for (auto i = 0; i < _Size; i++)
	{
		_Data[i] = p._Data[i];
	}
}

template<typename X>
Array<X>& Array<X>::operator=(Array const& A)
{
	if (this != &A)
	{
		_Size = A._Size;
		delete[] _Data;
		_Data = new X[_Size];
		for (auto i = 0; i < _Size; i++)
		{
			_Data[i] = A._Data[i];
		}
		return *this;
	}
}

template<typename X>
void Array<X>::set(int ind, X val)
{
	if (ind >= 0 && ind < _Size)
		_Data[ind] = val;

}

template<typename X>
X Array<X>::get(int i)
{
	if (i>=0 && i<_Size )
	{
		return _Data[i];
	}
	else
	{
		return 0;
	}
}

template<typename X>
unsigned Array<X>::getSize()
{
	return _Size;
}





