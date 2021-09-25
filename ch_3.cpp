#include "std_lib_facilities.h"

int main() {

	//1.
	cout << "Please, enter your first name!" << endl;
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << endl;
	cout << "Enter the name of the person you want to write to!" << endl;
	string person;
	cin >> person;
	cout << "Dear " << person << ',' << endl;

	//2.
	cout << "\tI couldn't wait for that moment to write you." << endl;
	
	//3.
	string friend_name;
	cout << "Please, enter another friend name!" << endl;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << endl;

	//4.
	char friend_sex;
	cout << "Enter 'm' if the friend is male an 'f' if the friend is female!" << endl;
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	else cout << "If you see " << friend_name << " please ask her to call me." << endl;

	//5.
	cout << "Please enter the age of the recipient!" << endl;
	int age;
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
	if(age <= 0 || age >= 110)
		simple_error("you're kidding!");

	//6.
	if(age < 12)
		cout << "Next year you will be " << age + 1 << '.' << endl;
	else if (age == 17)
		cout << "Next year you wil be able to vote." << endl;
	else if (age > 70)
		cout << "I hope you are enjoying retirement." << endl;

	//7.
	cout << "Yours sincerely, " << '\n' << '\n' << endl;
	cout << first_name << endl;

	return 0;
}