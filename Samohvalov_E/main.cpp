#include <iostream>
#include <iomanip>

using namespace std;

class W
{
	int Z[10];
public:
	W(int mas[10])
	{
		for (int i = 0; i < 10; i++)
		{
			Z[i] = mas[i];
		}
	}

	int P()
	{
		int p = Z[0];
		for (int i = 1; i < 10; i += 2)
		{
			p *= Z[i];
		}
		return p;
	}

	void write()
	{
		cout << "Z: ";
		for (int i = 0; i < 10; ++i)
		{
			cout << Z[i] << " ";
		}
		cout << "\n";
	}
};

W* read()
{
	int mas[10];
	for (int i = 0; i < 10; ++i)
	{
		cin >> mas[i];
	}
	return new W(mas);
}

int main()
{
	setlocale(LC_ALL, "russian");

	W* w1 = read();
	W* w2 = read();
	w1->write();
	w2->write();

	if (w1->P() > w2->P())
	{
		cout << "Первый объект имеет большее произведение\n";
	}
	else
	{
		cout << "Второй объект имеет большее произведение\n";
	}

	delete w1;
	delete w2;

	system("pause");
}
