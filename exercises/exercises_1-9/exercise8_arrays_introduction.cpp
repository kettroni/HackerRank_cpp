#include <iostream>


int main() {
	int s,i;
	
	scanf("%d\n", &s);

	int orig_arr[s];

	for (i = 0; i < s; ++i) {
		std::cin >> orig_arr[i];		
	}

	for (i = s-1; i >= 0; --i) {
		std::cout << orig_arr[i] << " ";
	}
}
