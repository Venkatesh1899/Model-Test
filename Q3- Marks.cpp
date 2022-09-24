#include <iostream>
#include <cmath>

using namespace std;

class Marks {
public:
	int rollNumber;
	char *name;
	int *marks; 

	int num_marks; 

	void GenerateMarks(int num) {
		num_marks = num;
		marks = new int[num];

		for (int i = 0; i < num; i++)
			marks[i] = rand() % 5 + 1;
	}

	int sum_of_marks() {
		int sum = 0;

		for (int i = 0; i < num_marks; i++)
			sum += marks[i];

		return sum;
	}

	double avarage() {
		return round(((double)sum_of_marks() / num_marks) * 100) / 100;
	}

	void set_marks(int number_of_marks, int newmarks) { 
		marks[number_of_marks] = newmarks;
	}

	int get_marks(int number_of_marks) {
		return marks[number_of_marks];
	}

	void set_num_marks(int num) {
		num_marks = num;
		
		delete[]marks;

		marks = new int[num];
	}

	~Marks() {
		delete[]marks;
	}

};
