#include <iostream>

int main(int argc, char **argv)
{
	int a[] = {1,3,5,6};
	for (int b : a) {
		std::cout << b;
	}
	return 0;
}
