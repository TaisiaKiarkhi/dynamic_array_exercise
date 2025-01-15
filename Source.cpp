#include <iostream>

int main() {

	size_t array_size{ 0 };
	std::cout << "Please, enter the array size: ";
	std::cin >> array_size;

	float* dyn_arr{ new float[array_size] };
	float sum{ 0 };

	for (int i = 0; i < array_size; i++) {
		*(dyn_arr + i) = static_cast<float>(1 / pow((i + 1), 2));
		sum += dyn_arr[i];
	}
	std::cout << sum<<"\n";
	std::cout << sqrt((sum * 6));


	return 0;
}