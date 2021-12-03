#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << a[i] << " ";
	os << '\n';
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << " ";
	os << '\n';
}

void print_vector(ostream& os, vector<int> a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << " ";
	os << '\n';
}

int main(){
try{

	int* a = new int[10];
	cout << "Values of a: ";
	for (int i = 0; i < 10; ++i)
		cout << a[i] << " ";
	cout << '\n';
	cout << "Values of a again: ";
	print_array10(cout,a);

	int* b = new int[10]{101,102,103,104,105,106,107,108,109,110};
	cout << "Values of b: ";
	print_array10(cout,b);

	int* c = new int[11]{101,102,103,104,105,106,107,108,109,110,111};
	cout << "Values of c: ";
	for (int i = 0; i < 11; ++i)
		cout << c[i] << " ";
	cout << '\n';
	cout << "Values of c again: ";
	print_array(cout,c,11);

	int* d = new int[20]{101,102,103,104,105,106,107,108,109,110,111,
						 112,113,114,115,116,117,118,119,120};
	cout << "Values of d: ";
	print_array(cout,d,20);

	vector<int> vector_a{101,102,103,104,105,106,107,108,109,110};
	cout << "Values of vector_a: ";
	print_vector(cout,vector_a,vector_a.size());

	vector<int> vector_b{101,102,103,104,105,106,107,108,109,110,111};
	cout << "Values of vector_b: ";
	print_vector(cout,vector_b,vector_b.size());

	vector<int> vector_c{101,102,103,104,105,106,107,108,109,110,111,
						   112,113,114,115,116,117,118,119,120};
	cout << "Values of vector_c: ";
	print_vector(cout,vector_c,vector_c.size());

	delete[] a;
	delete[] b;
	delete[] c;
	delete[] d;

	return 0;
}
catch(exception& e){
	cerr << e.what() << endl;
}
catch(...){
	cerr << "Unknown exception" << endl;
}
}