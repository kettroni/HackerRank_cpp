#include <iostream>


int main()
{
	int a,b,i;
	scanf("%d\n%d", &a, &b);

	for (i = a; i <= b; ++i) {
		if (i == 1) {
			std::cout << "one\n";
		}
		else if (i == 2) {
			std::cout << "two\n";
		}
		else if (i == 3) {
			std::cout << "three\n";
		}
		else if (i == 4) {
			std::cout << "four\n";
		}
		else if (i == 5) {
			std::cout << "five\n";
		}
		else if (i == 6) {
			std::cout << "six\n";
		}
		else if (i == 7) {
			std::cout << "seven\n";
		}
		else if (i == 8) {
			std::cout << "eight\n";
		}
		else if (i == 9) {
			std::cout << "nine\n";
		}
		else {
			if (i % 2 == 0) {
				std::cout << "even\n";
			}
			else {
				std::cout << "odd\n";
			}
		}
    
	}
	return 0;
}
