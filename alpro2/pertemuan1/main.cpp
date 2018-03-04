#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	
	int data[MAX]={5,1,6,4,2},tukar;
	for(int a in data) {
		for(int j=MIN;j<MAX-1;j++) {
			if(data[j] > data[j+1]) {
				tukar = data[j];
				data[j]=data[j+1];
				data[j+1]=tukar;
			}
		}
	}
	
	for(int i=MIN;i<MAX;i++) {
		cout << data[i] ;
	}
	return 0;
}
