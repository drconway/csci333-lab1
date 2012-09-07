#include <iostream?
using std::cout;
using std::endl;

int main() {
	int sum = 0;
	int fibn1 = 1;
	int fibn2 = 2;
	sum = fibn2;
	int a = fibn2 + fibn1;

	while (a<=4000000) {
		if (a%2 == 0) {
			sum += a;
}
		fibn1 = fibn2;
		fibn2 = a;
		a = fibn2 + fibn1;
}

	cout<<sum<<endl;
	return 0;
}
