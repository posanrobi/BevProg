#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

vector<int> gv{1,2,4,8,16,32,64,128,256,512};

void f(vector<int> v){

	vector<int> lv(10);
	gv = lv;

	cout << "lv elements: " << endl;
	for(int i = 0; i < lv.size(); ++i)
		cout << lv[i] << " ";
	cout << '\n';

	vector<int>lv2 = v;

	cout << "lv2 elements: " << endl;
	for(int i = 0; i < lv2.size(); ++i)
		cout << lv2[i] << " ";
	cout << '\n';
}

int main()
try{

	f(gv);
	vector<int> vv{1,2*1,3*2*1,4*3*2*1,5*4*3*2*1,6*5*4*3*2*1,7*6*5*4*3*2*1,
			  			  8*7*6*5*4*3*2*1,9*8*7*6*5*4*3*2*1,10*9*8*7*6*5*4*3*2*1};
	f(vv);

	return 0;
}
catch(std::exception&e){
	std::cerr << "Exception: " << e.what() << endl;
	return 1;
}
catch(...){
	std:cerr << "Unkown exception" << endl;
	return 2;
}