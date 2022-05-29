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

// Trigonometry
double Sinus(){
  double number{input_number()};
  double calculation_result;
  
  calculation_result = sin(number);

  cout << "sine " << number << " = " << calculation_result << endl;
}

double Cosinus(){
  double number{input_number()};
  double calculation_result;
  
  calculation_result = cos(number);

  cout << "cosine " << number << " = " << calculation_result << endl;
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
	cout << "========================================================="<<endl;
	cout << endl;
	cout << setw(10) << "1. Penjumlahan" 
		<< setw(10) << "6. Sin" 
		<< setw(20) << "11. ArcTan" << endl;
	cout << setw(10) << "2. Pengurangan" 
		<< setw(10) << "7. Cos" << endl;
	cout << setw(10) << "3. Perkalian" 
		<< setw(12) << "8. Tan" << endl;
	cout << setw(10) << "4. Pembagian" 
		<< setw(15) << "9. ArcSin" << endl;
	cout << setw(10) << "5. Modulus" 
		<< setw(17) << "10. ArcCos" << endl;	

	cout << endl;

	START:
	cout << "Select operation: ";
	cin >> option;
	
	while(cin.fail()){
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout<<endl;
		cout<<"Selector only accept integer number (1-9)"<<endl;
		goto START; 	
	}
	
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
