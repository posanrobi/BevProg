#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << " ";
	os << '\n';
}

void print_vector(vector<int>& v){
	for (int i = 0; i < 10; ++i)
		cout << v[i] << " ";
	cout << "\n";
}

int main(){
try
{

	int a = 7;
	int* p1 = &a;
	cout << "p1 pointer: " << p1 << " points to " << a << endl;

	cout << "--arrays--" << endl;
	int* array = new int[7]{1,2,4,5,16,32,64};
	int* p2 = array;
	cout << "p2 pointer: " << p2 << " points to "; print_array(cout,array,7);

	int* p3 = p2;
	p1 = p2;
	p3 = p2;

	cout << "p1 pointer: " << p1 << " points to " << *p1 << endl;
	cout << "p2 pointer: " << p2 << " points to "; print_array(cout,array,7);

	delete[] p3;

	int* array2 = new int[10]{1,2,4,8,16,32,64,128,256,512};
	p1 = array2;
	print_array(cout,array2,10);

	int* array3 = new int[10]{1,2,3,4,5,6,7,8,9,10};
	p2 = array3;
	print_array(cout,array3,10);

	for (int i = 0; i <= 10; ++i)
		array3[i] = array2[i];

	cout << "copied array: " << endl;
	print_array(cout,array3,10);

	delete[] array2;
	delete[] array3;

	cout << "--vectors--" << endl;

	vector<int>vector1{1,2,4,8,16,32,64,128,256,512};
	print_vector(vector1);

	vector<int>vector2{1,2,3,4,5,6,7,8,9,10};
	print_vector(vector2);

	for (int i = 0; i < 10; ++i){
		vector2[i] = vector1[i];
	}

	cout << "copied vector: " << endl;
	print_vector(vector2);

	return 0;
}
catch(exception& e)
{
	cerr << e.what() << endl;
	return 1;
}
catch(...)
{
	cerr << "Unknown exception" << endl;
	return 2;
}
}