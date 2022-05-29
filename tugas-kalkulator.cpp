#include <conio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>

using namespace std;

double input_number(){
	
	double number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	return number;
}

double sum(){

//INPUT NUMBER TO BE CALCULATED
	double first_number{input_number()};
	double second_number{input_number()};
	double calculation_result;
	
// DO MATH OPERATION
	calculation_result = first_number + second_number;
	cout <<"Calculation result: " << first_number << " + " << second_number << " = " << calculation_result;

}

double subtraction(){

//INPUT NUMBER TO BE CALCULATED	
	double first_number{input_number()};
	double second_number{input_number()};
	double calculation_result;
	
// DO MATH OPERATION	
	calculation_result = first_number - second_number;
	cout <<"Calculation result: " << first_number << " - " << second_number << " = " << calculation_result;
	
}

double multiplication(){

//INPUT NUMBER TO BE CALCULATED	
	double first_number{input_number()};
	double second_number{input_number()};
	double calculation_result;
	

// DO MATH OPERATION	
	calculation_result = first_number * second_number;
	cout <<"Calculation result: " << first_number << " x " << second_number << " = " << calculation_result;
	
}

double division(){
	DIV:
//INPUT NUMBER TO BE CALCULATED	
	double first_number{input_number()};
	double second_number{input_number()};
	double calculation_result;
	
	if (second_number == 0){
		throw runtime_error("Math error: Attempted to divide by Zero\n");
	}
	
// DO MATH OPERATION
	calculation_result = first_number / second_number;
	cout <<"Calculation result: " << first_number << " : " << second_number << " = " << calculation_result;

}

double modulo(){
	
//INPUT NUMBER TO BE CALCULATED	
	cout << "INPUT NUMBER WILL BE ROUNDED!" << endl;
	double first_number{input_number()};
	double second_number{input_number()};
	double calculation_result;
	int rounded_first, rounded_second;
	
	rounded_first = round(first_number);
	rounded_second = round(second_number);
	
// DO MATH OPERATION
	calculation_result = rounded_first % rounded_second;
	cout <<"Calculation result: " << rounded_first << " mod " << rounded_second << " = " << calculation_result;

}
int main(){
	char continue_key;
	int option;
	
	cout << "PILIH OPERATOR ARITMATIKA"<<endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "5. Modulus" << endl;
	cout << endl;
	
	START:
	cout << "Select operation: ";
	cin >> option;
	
	if(option==)

	
	switch(option){
	        case 1 : 
			
			sum();

			break;
		case 2 : 
		
			subtraction();
			
			break;
		case 3 :
			
			multiplication();
			
			break;
		case 4 : 
		
			division();

			break;

		case 5 : 
		
			modulo();
			break;
			
		default:
			
			cout << endl;
			cout<<"Selector only accept number (1-9)"<<endl;
			
			cout << "Apakah ingin memulai lagi? (Y/N)";
			
			cin >> continue_key;
			
			if(continue_key == 'Y'){
				
				system ("CLS");
				
				goto START;
			}
			else{
				
				exit(0);
				
			}
			break;
	}
}
