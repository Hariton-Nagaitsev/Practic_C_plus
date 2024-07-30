#include <iostream>

int* max_vect(const int, const int a[], const int b[]);

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8 };
	int b[] = { 8,7,6,5,3,2,1,3 };
	int kc = sizeof(a) / sizeof(a[0]);
	int* c;
	c = max_vect(kc, a, b);
	for (int i = 0; i < kc; i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;
	delete[]c;
}

int* max_vect(const int kc, const int a[], const int b[]) {
	int* c = new int[kc];

	for (int i = 0; i < kc; i++) {
		a[i] > b[i] ? c[i] = a[i] : c[i] = b[i];
	}

	return c;
}