#include <iostream>
#include"Array.cpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	
	Array<int> Grud(6);
	for (auto i = 0; i < Grud.getSize(); i++)
	{
		Grud.set(i, i * 2);
	}
	
	cout << "Массив" << endl;

	for (auto i = 0; i < Grud.getSize(); i++)
	{
		cout << i << ". " << Grud.get(i) << endl;
	}
	
	return 0;
}