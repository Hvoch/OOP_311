#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "cstdio"

using namespace std;

int main() {

	FILE* myfile;
	const char* adress = { "MyText.txt" };
	double start{ 0.01 };
	double end{ 10.00 };
	double step{ 0.025 };

	double size{ end / step };
	int total_size{ (int)size };

	double* arr_x = new double [total_size];
	double* arr_y = new double[total_size];

	double res{ start };

	for (int i{ 0 }; i < total_size; ++i) {
		res += step;
		arr_x[i] = res;
		arr_y[i] = pow(res, 2);
	}
	  if ((fopen_s(&myfile, adress, "w")) != NULL) {
		  cout << "\n The file could not be created";
	  }
	  else {
		  fprintf_s(myfile, " x\t y = x*x\n");
		  for (int i{ 0 }; i < total_size; ++i) {

			fprintf(myfile, "%.3f", arr_x[i]);
			fprintf_s(myfile, "\t");
			fprintf(myfile, "%f", arr_y[i]);
			fprintf_s(myfile, "\n");

		  }
		    fclose(myfile);
	  }

	delete[]arr_x;
	delete[]arr_y;

	return 0;
}