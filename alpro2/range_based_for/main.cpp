#include <iostream>

int main(int argc, char **argv)
{
	int data[] = {5,2,3,1,4};
	for(int a : data) {
		std::cout << a;
	}
	return 0;
}
