#include <iostream>
#include <list>
using namespace std;

int main(){
	int misnumeros[] = {1,2,3,4,5};
	list<int> milista (misnumeros, misnumeros+5);
	list<int>::iterator it = milista.begin();
	
	for(; it != milista.end(); it++){
		cout<< (*it) << endl;
	}
	
	return 0;
}
