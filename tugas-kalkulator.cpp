#include <conio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <iomanip>

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
//INPUT NUMBER TO BE CALCULATED	
	double first_number{input_number()};
	
	DIV:
		
	double second_number{input_number()};
	
	double calculation_result;
	
	try {
		if (second_number == 0){
//		throw runtime_error("Math error: Attempted to divide by Zero\n");
		cout << endl << "Math error: Attempted to divide by Zero" <<endl;
			
		throw(second_number);
		
		}
	}
	catch(double denominator){
		cout << endl << "The denominator is: " << denominator << endl;
		
		cout << "Please input the new second number" <<endl;
		
		goto DIV;
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

//Exponential calculation
double exp_number(){
	
	cout << "Input base and exponent number!" <<endl;
	
	BEGIN:
	double base_number{input_number()};
	
	double exponent_number{input_number()};
	
	double calculation_result;
	
	
	try {
		if (base_number == 0){
			if(exponent_number < 0){
			
			cout << endl << "Math error: Attempted to divide by Zero" <<endl;
			
			throw(base_number, exponent_number);
		
			}
		}
	}
	catch(double base){
		
		cout << endl << "The base is: " << base << endl;
		
		cout << "The exponent is: " << exponent_number << endl;
		
		cout << "Please input the new base number" <<endl;
		
		cout << endl;
		
		goto BEGIN;
	}
	
	calculation_result = pow(base_number, exponent_number);
	
	cout <<"Calculation result: " << base_number << " ^ " << exponent_number << " = " << calculation_result;
}

double square_root(){
	
	cout << "Input base number!" <<endl;
	
	BEGIN:
	double base_number{input_number()};
	
	double calculation_result;
	
	try {
		if (base_number < 0){
		
		cout << endl << "Math error: The number is imaginer" <<endl;
			
		throw(base_number);
		
			}
		}
		
	catch(double base){
		
		cout << endl << "The base is: " << base << endl;
		
		cout << "Please input a number" <<endl;
		
		cout << endl;
		
		goto BEGIN;
	}
	
	calculation_result = sqrt(base_number);
	
	cout <<"Calculation result: " << base_number << " ^0.5 " << " = " << calculation_result;
}

// Trigonometry operation (in rad)
double Sinus(){
	
	double number{input_number()};
	
	double calculation_result;
  
	calculation_result = sin(number);

	cout << "Sine " << number << " = " << calculation_result << " rad " << endl;
}

double Cosinus(){
	
	double number{input_number()};
	
	double calculation_result;
  
	calculation_result = cos(number);

	cout << "Cosine " << number << " = " << calculation_result << " rad " << endl;
}

double Tangen(){
	
	double number{input_number()};
	
	double calculation_result;
  
	calculation_result = tan(number);

	cout << "Tangen " << number << " = " << calculation_result << " rad " << endl;
}

double InversSinus(){
	
	BEGIN:
	
	try {
		double number{input_number()};
		double calculation_result;
		
			if (number < -1.0){
				
				cout << endl << "Math error: Domain [-1,1] only" <<endl;
			
				throw(number);
		
			}
			else if(number > 1.0){
				
				cout << endl << "Math error: Domain [-1,1] only" <<endl;
			
				throw(number);
			}
			else{
				
				calculation_result = asin(number);
				
				cout << endl << "arcsin " << number << " = " << calculation_result << " rad " << endl;
			}
		}
		catch(double error_number){
			
			cout << endl << "The input is: " << error_number << endl;
			
			cout << endl;
			
			cout << "Please input a new number" <<endl;
			
			goto BEGIN;
		}
}

double InversCosinus(){
	
	BEGIN:
	
	try {
		double number{input_number()};
		double calculation_result;
		
			if (number < -1.0){
				
				cout << endl << "Math error: Domain [-1,1] only" <<endl;
			
				throw(number);
		
			}
			else if(number > 1.0){
				
				cout << endl << "Math error: Domain [-1,1] only" <<endl;
			
				throw(number);
			}
			else{
				
				calculation_result = acos(number);
				
				cout << endl << "ArcCos " << number << " = " << calculation_result << " rad " << endl;
			}
		}
		catch(double error_number){
			
			cout << endl << "The input is: " << error_number << endl;
			
			cout << endl;
			
			cout << "Please input a new number" <<endl;
			
			goto BEGIN;
		}
}

double InversTangen(){

	BEGIN:
	
	try {
		double number{input_number()};
		double calculation_result;
		
			if (number < -1.0){
				
				cout << endl << "Math error: Domain [-1,1] only" <<endl;
			
				throw(number);
		
			}
			else if(number > 1.0){
				
				cout << endl << "Math error: Domain [-1,1] only" <<endl;
			
				throw(number);
			}
			else{
				
				calculation_result = atan(number);
				
				cout << endl << "ArcTan " << number << " = " << calculation_result << " rad " << endl;
			}
		}
		catch(double error_number){
			
			cout << endl << "The input is: " << error_number << endl;
			
			cout << endl;
			
			cout << "Please input a new number" <<endl;
			
			goto BEGIN;
		}
}

double natural_log(){
	
	BEGIN:
	double base_number{input_number()};
	
	double calculation_result;
	
	try {
			if (base_number == 0){
				
				cout << endl << "Math error: Base number is 0" <<endl;
			
				throw(base_number);
		
			}
			else if(base_number < 0){
				
				cout << endl << "Math error: Base number is negative" <<endl;
			
				throw(base_number);
			}
		}
		catch(double error_number){
			
			cout << endl << "The base number is: " << error_number << endl;
			
			cout << endl;
			
			cout << "Please input a new number" <<endl;
			
			goto BEGIN;
		}
	
	calculation_result = log(base_number);
	
	cout <<"Calculation result: " << " ln(" << base_number << ")" << " = " << calculation_result;
}

double base_10_log(){
	
	BEGIN:
	double base_number{input_number()};
	
	double calculation_result;
	
	try {
			if (base_number == 0){
				
				cout << endl << "Math error: Base number is 0" <<endl;
			
				throw(base_number);
		
			}
			else if(base_number < 0){
				
				cout << endl << "Math error: Base number is negative" <<endl;
			
				throw(base_number);
			}
		}
		catch(double error_number){
			
			cout << endl << "The base number is: " << error_number << endl;
			
			cout << endl;
			
			cout << "Please input a new number" <<endl;
			
			goto BEGIN;
		}
	
	calculation_result = log10(base_number);
	
	cout <<"Calculation result: " << " log(" << base_number << ")" << " = " << calculation_result;
}

int main(){
	
	char continue_key;
	int option;
	
	cout << "SELECT THE CALCULATION MENU"<<endl;
	cout << "========================================================================"<<endl;
	cout << endl;
	cout << setw(10) << "1. Addition" 
		<< setw(21) << "6. Exponent" 
		<< setw(16) << "11. ArcSin" << endl;
	cout << setw(10) << "2. Subtraction"
		<< setw(21) << "7. Square Root"  
		<< setw(13) << "12. ArcCos" << endl;
	cout << setw(10) << "3. Multiplication"
		<< setw(10) << "8. Sin" 
		<< setw(21) << "13. ArcTan" << endl;
	cout << setw(10) << "4. Division"
		<< setw(16) << "9. Cos" 
		<< setw(37) << "14. Natural Logarithm (ln)" << endl;
	cout << setw(10) << "5. Modulus"
		<< setw(17) << "10. Tan" 
		<< setw(32) << "15. Base 10 Logarithm"<< endl;
	cout << endl;
	cout << "To close the program, input 0" << endl; 
	cout << "========================================================================"<<endl;

	cout << endl;

	START:
	cout << "Select operation: ";
	cin >> option;
	
// INCASE USER INPUT IS NOT AN INTEGER
	while(cin.fail()){
		
		cin.clear();
		
		cin.ignore(INT_MAX, '\n');
		
		cout<<endl;
		
		cout<<"Selector only accept integer number (i.e. 1, 2, 3,...)"<<endl;
		
		goto START; 	
	}

//SELECT THE FROM CALCULATION MENU
	switch(option){
		case 0	:
			exit(0);
			break;
	    case 1	: 
			
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
			
		case 6:
			
			exp_number();
			
			break;

		case 7:
			
			square_root();
			
			break;
			
	    case 8 :

			Sinus();
			break;

		case 9 :

			Cosinus();
			break;

		case 10 :

			Tangen();
			break;

		case 11 :

			InversSinus();
			break;

		case 12 :

			InversCosinus();
			break;

		case 13 :

			InversTangen();
			break;
			
		case 14 :

			natural_log();
			
			break;
		case 15 :

			base_10_log();

			break;
			
		default:
			cout << endl;
			cout<<"Selector only accept number within range 1 to 15"<<endl;
			
			cout << "Do you want to retry? (Y/N): ";
			
			cin >> continue_key;
			
			if(continue_key == 'Y' || continue_key == 'y'){
				
//				system ("CLS");
				
				goto START;
			}
			else{
				
				exit(0);
				
			}
			goto START;
			break;
	}
	cout<<endl;
	
	cout << "End of program, press any key to close window..." <<endl;
	getch();
}
