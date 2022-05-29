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

// Trigonometry
double Sinus(){
  double number{input_number()};
  double calculation_result;
  calculation_result = sin(number);

  cout << "sin " << number << " = " << calculation_result << endl;
}

double Cosinus(){
  double number{input_number()};
  double calculation_result;
  calculation_result = cos(number);

  cout << "cos " << number << " = " << calculation_result << endl;
}

double Tangen(){
  double number{input_number()};
  double calculation_result;
  calculation_result = tan(number);

  cout << "tan " << number << " = " << calculation_result << endl;
}

double InversSinus(){
  double number{input_number()};
  double calculation_result;
  calculation_result = asin(number);

  if (number < -1 && number > 1){
		throw runtime_error("Math error: Domain [-1,1] only\n");
	}
  
  cout << "arcsin " << number << " = " << calculation_result << endl;;
}

double InversCosinus(){
  double number{input_number()};
  double calculation_result;
  calculation_result = acos(number);
  
  if (number < -1 && number > 1){
		throw runtime_error("Math error: Domain [-1,1] only\n");
	}

  cout << "arccos " << number << " = " << calculation_result << endl;;
}

double InversTangen(){
  double number{input_number()};
  double calculation_result;
  calculation_result = atan(number);
  
  if (number < -1 && number > 1){
		throw runtime_error("Math error: Domain [-1,1] only\n");
	}

  cout << "arctan " << number << " = " << calculation_result << endl;;
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
	cout << "6.  Sin" << endl;
	cout << "7.  Cos" << endl;
	cout << "8.  Tan" << endl;
	cout << "9.  Arcsin" << endl;
	cout << "10. Arccos" << endl;
	cout << "11. Arctan" << endl;
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
		
	      	case 6 :

			Sinus();
			break;

		case 7 :

			Cosinus();
			break;

		case 8 :

			Tangen();
			break;

		case 9 :

			InversSinus();
			break;

		case 10 :

			InversCosinus();
			break;

		case 11 :

			InversTangen();
			break;
			
		default:
			
			cout << endl;
			cout<<"Selector only accept number (1-9)"<<endl;
			
			cout << "Apakah ingin memulai lagi? (Y/N): ";
			
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
