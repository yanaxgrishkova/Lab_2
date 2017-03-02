#include <iostream>

using namespace std;

class Complex
{
private:
	float real;
	float imaginary;
public:
	Complex() : real(0.0), imaginary(0.0)
	{}

	Complex(float rl, float img) : real(rl), imaginary(img)
	{}

	void get();

	void print(ostream&cout);

	Complex add(Complex c2) const;

	Complex sub(Complex c2) const;

	Complex multiply(int mpl) const;

	Complex div(int div) const;
};

void Complex::get()
{
	cout << "Please enter the real part of a complex number:" << endl;
	cin >> real;
	cout << "Please enter the imaginary part of a complex number:" << endl;
	cin >> imaginary;
	cout << endl;
}

void Complex::print(ostream&cout)
{
	if (imaginary < 0)
	{
		cout << real << imaginary << "i" << endl;
	}
	else
		cout << real << "+" << imaginary << "i" << endl;
}

Complex Complex::add(Complex c2) const
{
	Complex result(real + c2.real, imaginary + c2.imaginary);
	return result;
}

Complex Complex::sub(Complex c2) const
{
	Complex result(real - c2.real, imaginary - c2.imaginary);
	return result;
}

Complex Complex::multiply(int mpl) const
{
	Complex result(real*mpl, imaginary*mpl);
	return result;
}

Complex Complex::div(int div) const
{
	Complex result(real / div, imaginary / div);
	return result;
}

int main()
{
	Complex c1, c2, result;
	int mpl, div;
	c1.get();
	c2.get();
	result = c1.add(c2);
	cout << "Result (add): "; result.print(cout);
	result = c1.sub(c2);
	cout << "Result (sub): "; result.print(cout);
	cout << "\nPlease enter a number (multiply): " << endl;
	cin >> mpl;
	result = c1.multiply(mpl);
	cout << "Result (multiply): ";	result.print(cout);
	cout << "\nPlease enter a number (div): " << endl;
	cin >> div;
	result = c1.div(div);
	cout << "Result (div): ";  result.print(cout);
	system("pause");
	return 0;
} 
