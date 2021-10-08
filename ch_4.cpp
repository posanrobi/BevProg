#include "std_lib_facilities.h"

int main(){
	
	//1-6.FELADAT KI VAN KOMMENTEZVE

	int a = 0, b = 0;
	int i = 0;
	int sum = 0;
	int count = 0;
	string unit = "";
	double lenght = 1;
	double max = 0, min = 9999;
	vector<double> v;

	cout << "Please enter a lenght followed by a unit!" << endl;
	while(cin >> a >> unit){

		/*
	while(a != '|' || b != '|'){
		cout << "Please type in two ints to continue or type in '|' to exit!" << endl;
		cin >> a >> b;
		if (cin '|'){
			break;
		}
		else { 
		cout << "a = " << a << '\n' << "b = " << b << endl;
	}

	if (a < b) {
		cout << "the smaller value is: " << a << endl;
		cout << "the larger value is: " << b << endl;
	}
	else if (a > b) {
		cout << "the smaller value is: " << b << endl;
		cout << "the larger value is: " << a << endl;
	}
	else if(a == b) cout << "the numbers are equal" << endl;*/

	/*cout << "Please type in two doubles to continue or type in '|' to exit!" << endl;
	double a = 0 b = 0;
	cin >> a >> b;
		
	cout << "a = " << a << '\n' << "b = " << b << endl;
		++i;

	if (a < b) {
		cout << "the smaller value is: " << c << endl;
		cout << "the larger value is: " << d << endl;
	}
	else if (a > b) {
		cout << "the smaller value is: " << b << endl;
		cout << "the larger value is: " << a << endl;
	}
	else if(a - b || b - a < (1 / 100))
		cout << "the numbers are almost equal" << endl;
		}

	cout << "Please type in one double to continue or type in '|' to exit!" << endl;
	while (cin >> a){
	if (max < a)
		max = a;
	else if (min > a)
		min = a;
	cout << "the largest number so far: " << max << endl;
	cout << "the smallest number so far: " << min << endl;
	i++;
	}*/

	if(unit == "cm"){
		sum += a/100;
		v.push_back(a/100);
	}
	else if(unit == "m"){
		sum += a;
		v.push_back(a);
	}
	else if(unit == "in"){
		sum += a*2.54/100;
		v.push_back(a*2.54/100);
	}
	else if(unit == "ft"){
		sum += a*12*2.54/100;
		v.push_back(a*12*2.54/100);
	}
	
	if (max < a)
		max = a;
	else if (min > a)
		min = a;

	cout << "only the numbers count! " << endl;
	cout << "the largest number so far: " << max << endl;
	cout << "the smallest number so far: " << min << endl;

	if(unit == "cm" || unit == "m" || unit == "in" || unit == "ft"){
		cout << "Please enter a lenght followed by a unit!" << endl;
		i++;
	}
	else {
		cout << "Illegal\nGive an other unit!" << endl;
	}
	
	i++;
}
	cout << "the largest number: " << max << 'm' << endl;
	cout << "the smallest number: " << min << 'm' << endl;
	cout << "the number of values: " << v.size() << endl;
	cout << "the sum of values: " << sum << 'm' << endl;

	for(int j = 0;j < v.size();j++){
		sort(v);
	}
	cout << "The ordered numbers: " << endl;
	for(double number:v){
		cout << number << "m, ";
	}
	cout << endl;

	return 0;
}
