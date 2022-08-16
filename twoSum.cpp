#include <iostream>
using namespace std;
int main(){

int a=579, b=124;

while(b != 0){
	int c = a&b;
	a = a^b;
	b = c<<1;
}

cout<<a;


}
