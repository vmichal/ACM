
#include <vector>
#include <iostream>

enum face {

	front, 
	back, 
	left, 
	right, 
	top,
	bottom,
	face_count
};

struct cube {
	int colors[face_count];
};

void solve(int N) {
	std::vector<cube> cubes(N);

	for (int i = 0; i < N; ++i)
		for (int& face : cubes[i].colors)
			std::cin >> face;

	std::vector<





}


int main() {

	for (int i = 1;;++i) {
		int N;
		std::cin >> N;
		if (N == 0)
			break;
		std::cout << "Case #" << i <<std::endl;
		solve(N);
		std::cout << std::endl;
	}


}