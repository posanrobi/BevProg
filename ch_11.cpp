#include "std_lib_facilities.h"

//Test-output.cpp
//setw() == set field width, numbers of spaces
//oct - use base - 8 notation
//dec - use ...  - 10 ...
//hex - use ...  - 16 ...
//showbase - prefix 0 for octal and 0x for hexadecimal
//noshowbase - no prefix
//floating-point formats: fixed,scientific,defaultfloat

int main()
try {
    int birth_year = 2001;

    cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    cout << dec << 20 << '\n';

    cout << '|' << setw(8) << "Pál" << '|' << setw(8) << "Inka" 
         << '|' << setw(24) << "palinka@gmail.com"
         << '|' << setw(16) << "(822) 921-4244" << "|\n"
         << '|' << setw(8) << "Vicc" << '|' << setw(8) << "Elek"
         << '|' << setw(24) << "viccelek@gmail.com"
         << '|' << setw(16) << "(222) 111-1234" << "|\n";
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}