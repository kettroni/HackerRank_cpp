#include <iostream>
#include <vector>


int main()
{
	int n,q;
    std::cin >> n >> q;

	std::vector<std::vector<int>> a;

	a.resize(n);
	
	int i;
	for (i = 0; i < n; ++i) {
		int k;
		std::cin >> k;

		int j;
		for (j = 0; j < k; ++j) {
			int temp;
			std::cin >> temp;
			a[i].push_back(temp);
		}
	}

	std::vector<int> queries;
	queries.resize(q);
	
	for (i = 0; i < q; ++i) {
		int first_i,second_i;
		std::cin >> first_i >> second_i;
		queries[i] = a[first_i][second_i];
	}

	for (i = 0; i < q; ++i) {
		std::cout << queries[i] << "\n";
	}

	return 0;
}
