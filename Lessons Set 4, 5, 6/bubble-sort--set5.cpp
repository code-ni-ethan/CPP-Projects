#include <iostream>

void sort(int jumbled[], int size);

int main(){

	int jumbled[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
	int size = sizeof(jumbled)/sizeof(jumbled[0]);

	sort(jumbled, size);

	for(int element : jumbled){
		std::cout << element << " ";
	}

	return 0;
}
void sort(int jumbled[], int size){

	int temp;
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++)
		if(jumbled[j] > jumbled[j + 1]){
		temp = jumbled[j];
		jumbled[j] = jumbled[j + 1];
		jumbled[j + 1] = temp;
		}
	}

}
