#include "pol.h"
#include <iostream>


using namespace std;


int main()
{
	int k, p;
	double c;
	List a, b;
	cout << "Entering 1-st polynomial" << endl;
	cout << "Enter number of monomials" << endl;
	cin >> k; cout << endl;
	for (int i = 0; i < k; i++)
	{
		cout << "Enter power of monom" << " " << i + 1 << endl;
		cin >> p; cout << endl;
		while (p > 999)
		{
			cout << "Incorrect power, try again" << endl;
			cin >> p; cout << endl;
		}
		cout << "Enter coefficient of monom" << " " << i + 1 << endl;
		cin >> c; cout << endl;
		a.Insert_end(p, c);
	}
	cout << "Entering 2-nd polynomial" << endl;
	cout << "Enter number of monomials" << endl;
	cin >> k; cout << endl;
	for (int i = 0; i < k; i++)
	{
		cout << "Enter power of monom" << " " << i + 1 << endl;
		cin >> p; cout << endl;
		while (p > 999)
		{
			cout << "Incorrect power, try again" << endl;
			cin >> p; cout << endl;
		}
		cout << "Enter coefficient of monom" << " " << i + 1 << endl;
		cin >> c; cout << endl;
		b.Insert_end(p, c);
	}
	cout << "Entering of polynomials is complited";

	cout << endl;
	cout << "Choose operation" << endl;
	cout << "1.Add polynomials" << endl;
	cout << "2.Subtract polynomials" << endl;
	cout << "3.Multiply polynomials" << endl;
	cout << "4.Multiply 1-st polynomial on const" << endl;
	pol b1(a);
	pol b2(b);
	pol b3;
	cin >> k; cout << endl;
	switch (k)
	{
	case 1:
	{
		cout << "(";
		for (int i = 0; i < b1.a.n; i++)
		{
			b1.a.Print(i);
			if (i != b1.a.n - 1)
				cout << "  +  ";
		}
		cout << ")";
		cout << "  +  ";
		cout << "(";
		for (int i = 0; i < b2.a.n; i++)
		{
			b2.a.Print(i);
			if (i != b2.a.n - 1)
				cout << "  +  ";
		}
		cout << ")";
		cout << "  =  ";
		b3 = b1 + b2;
		for (int i = 0; i < b3.a.n; i++)
		{
			b3.a.Print(i);
			if (i != b3.a.n - 1)
				cout << "  +  ";
		}
		break;
	}
	case 2:
	{
		cout << "(";
		for (int i = 0; i < b1.a.n; i++)
		{
			b1.a.Print(i);
			if (i != b1.a.n - 1)
				cout << "  +  ";
		}
		cout << ")";
		cout << "  -  ";
		cout << "(";
		for (int i = 0; i < b2.a.n; i++)
		{
			b2.a.Print(i);
			if (i != b2.a.n - 1)
				cout << "  +  ";
		}
		cout << ")";
		cout << "  =  ";
		b3 = b1 - b2;
		for (int i = 0; i < b3.a.n; i++)
		{
			b3.a.Print(i);
			if (i != b3.a.n - 1)
				cout << "  +  ";
		}
		break;
	}
	case 3:
	{
		cout << "(";
		for (int i = 0; i < b1.a.n; i++)
		{
			b1.a.Print(i);
			if (i != b1.a.n - 1)
				cout << "  +  ";
		}
		cout << ")";
		cout << "  *  ";
		cout << "(";
		for (int i = 0; i < b2.a.n; i++)
		{
			b2.a.Print(i);
			if (i != b2.a.n - 1)
				cout << "  +  ";
		}
		cout << ")";
		cout << "  =  ";
		b3 = b1 * b2;
		for (int i = 0; i < b3.a.n; i++)
		{
			b3.a.Print(i);
			if (i != b3.a.n - 1)
				cout << "  +  ";
		}
		break;
	}
	case 4:
	{
		cout << "Enter constant" << endl;
		cin >> c; cout << endl;
		cout << "(";
		for (int i = 0; i < b1.a.n; i++)
		{
			b1.a.Print(i);
			if (i != b1.a.n - 1)
				cout << "  +  ";
		}
		cout << ")";
		cout << "  *  " << c << "  =  ";
		b3 = b1.Mull(c);
		for (int i = 0; i < b3.a.n; i++)
		{
			b3.a.Print(i);
			if (i != b3.a.n - 1)
				cout << "  +  ";
		}
		break;
	}
	default:
		break;
	}
	cin >> k;


	return 0;
}