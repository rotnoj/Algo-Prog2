#include <iostream>

int main(int argc, char **argv)
{
	int c[]={1,2,3,4,6};
	for (int d : c) {
		std::cout << d;
	}
	return 0;
}
