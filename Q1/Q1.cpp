#include <iostream>
#include "Data.h"

using namespace std;

int main(){
	Data hoje(11,4,2018);

	cout << "Data de hoje: " << hoje.getDia()
			<< "\\" << hoje.getMes()
			<< "\\" << hoje.getAno() << endl;
}
