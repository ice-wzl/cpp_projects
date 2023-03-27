#include <iostream>
#include <string>
using namespace std;


main() {
	float result;
	float number_one;
	int number_two;
	char math_operator;
	result = 0;
	
	while (1) {
	cout << "Enter number, math operator, and second number:  " << "\n";
	cin >> number_one >> math_operator >> number_two;
	if (math_operator == '+'){
		result = number_one + number_two;
		cout << "Result: " << number_one << math_operator << number_two << " = " << result << "\n";
	}	
	else if (math_operator == '-'){
		result = number_one - number_two;
		cout << "Result: " << number_one << math_operator << number_two << " = " << result << "\n";
	}
	else if (math_operator == '*'){
		result = number_one * number_two;
		cout << "Result: " << number_one << math_operator << number_two << " = " << result << "\n";
	}
	else if (math_operator == '/'){
		if (number_one == 0){
			cout << "Divide by zero error!" << "\n";
			return(1);
		}
		else
			result = number_one /  number_two;
			cout << "Result: " << number_one << math_operator << number_two << " = " << result << "\n";
		}
	}




	return(0);
}
