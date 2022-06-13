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

int back_to_menu(){
	char input;
	int option;
	
	BACK:
	cout << "Are you sure to use this menu?[Y/N] ";
	cin >> input;
	cout << endl;
	
	if (input == 'Y' || input == 'y'){
		option = 1;
	} else if(input == 'N' || input == 'n') {
		option = 0;
	} else {
		goto BACK;
	}
	
	return option;
}

int reuse_or_not(){
	char input;
	int choice;
	
	ASK:
	
	cout << endl;
	cout << "Do you want to continue to use the calculator?[Y/N] ";
	cin >> input;
	cout << endl;
	
	if (input == 'Y' || input == 'y'){
		system ("CLS");
		choice = 1;
	} else if(input == 'N' || input == 'n') {
		choice = 0;
	} else {
		cout << endl << "Only accept Y/N "<< endl;
		goto ASK;
	}
	
	return choice;
} 
class Standard {
	public:
		
		double calculation_result;
						
		double addition(){
			
			//INPUT NUMBER TO BE CALCULATED
			double first_number{input_number()};
			double second_number{input_number()};
			
			// DO MATH OPERATION
			calculation_result = first_number + second_number;
			cout <<"Calculation result: " << first_number << " + " << second_number << " = " 
				<< setprecision(4) << calculation_result;
		};
		
		double subtraction(){
			
			//INPUT NUMBER TO BE CALCULATED	
			double first_number{input_number()};
			double second_number{input_number()};
			
			// DO MATH OPERATION	
			calculation_result = first_number - second_number;
			cout <<"Calculation result: " << first_number << " - " << second_number << " = "
				<< setprecision(4) << calculation_result;
		};
		
		double multiplication(){
			
			//INPUT NUMBER TO BE CALCULATED	
			double first_number{input_number()};
			double second_number{input_number()};
			
			// DO MATH OPERATION	
			calculation_result = first_number * second_number;
			cout <<"Calculation result: " << first_number << " x " << second_number << " = " 
				<< setprecision(4) << calculation_result;
		};	
		
		double division(){
			
			//INPUT NUMBER TO BE CALCULATED	
			double first_number{input_number()};
	
			DIV:
			double second_number{input_number()};	
			try {
				if (second_number == 0){
				//throw runtime_ERROR("Math ERROR: Attempted to divide by Zero\n");
				cout << endl << "Math ERROR: Divide by Zero!" <<endl;	
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
				cout <<"Calculation result: " << first_number << " : " << second_number << " = " 
					<< setprecision(4) << calculation_result;
		};
			
		double modulo(){
			
			//INPUT NUMBER TO BE CALCULATED	
			cout << "INPUT NUMBER WILL BE ROUNDED!" << endl;
			cout << "Operation format is : first_number MOD second_number " << endl;
			
			double first_number{input_number()};
			
			MOD:
			double second_number{input_number()};
			try {
				if (second_number == 0){
				//throw runtime_error("Math ERROR: Attempted to divide by Zero\n");
				cout << endl << "Math ERROR: Divide by Zero!" <<endl;	
				throw(second_number);
				}
			}
			catch(double denominator){
				cout << endl << "The denominator is: " << denominator << endl;
				cout << "Please input the new second number" <<endl;
				goto MOD;
				}
			
			int rounded_first, rounded_second;
			rounded_first = round(first_number);
			rounded_second = round(second_number);
			
			// DO MATH OPERATION
			calculation_result = rounded_first % rounded_second;
			cout <<"Calculation result: " 
			<< rounded_first << " mod " 
			<< rounded_second << " = " 
			<< calculation_result;
		};
		
};

class Exponential {
	public:
		
		double calculation_result;
		
		//Exponential calculation
		double exp_number(){
			
			cout << "Input base and exponent number!" <<endl;
	
			BEGIN:
			double base_number{input_number()};
			double exponent_number{input_number()};

			try {
				if (base_number == 0){
					if(exponent_number < 0){
					cout << endl << "Math ERROR: Attempted to divide by Zero" <<endl;
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
			cout <<"Calculation result: " << base_number << " ^ " << exponent_number << " = " 
				<< setprecision(4) << calculation_result;
		};
		
		double square_root(){
	
			cout << "Input base number!" <<endl;
	
			BEGIN:
			double base_number{input_number()};
	
			try {
				if (base_number < 0){
				cout << endl << "Math ERROR: The number is imaginer" <<endl;
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
				cout <<"Calculation result: " << base_number << " ^0.5 " << " = " 
					<< setprecision(4) << calculation_result;
			};
};

class Trigonometry {
	public:
		double calculation_result;
		
		// Normal trigonometry operation (in rad)
		double Sinus(){	
			
			double number{input_number()};
  			calculation_result = sin(number);
			cout << "Sine " << number << " = " << calculation_result << " rad " << endl;
		};

		double Cosinus(){
			
			double number{input_number()};
  			calculation_result = cos(number);
			cout << "Cosine " << number << " = " << calculation_result << " rad " << endl;
		};

		double Tangen(){
			
			double number{input_number()};
  			calculation_result = tan(number);
			cout << "Tangen " << number << " = " << calculation_result << " rad " << endl;
		};
		
		double InversSinus(){
			
			BEGIN:
			try {
				double number{input_number()};
				
				if (number < -1.0){
					cout << endl << "Math ERROR: Domain [-1,1] only" <<endl;			
					throw(number);
				}else if(number > 1.0){
					cout << endl << "Math ERROR: Domain [-1,1] only" <<endl;
					throw(number);
				}else{	
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
		};

		double InversCosinus(){
			
			BEGIN:
			try {
				double number{input_number()};
				if (number < -1.0){
					cout << endl << "Math ERROR: Domain [-1,1] only" <<endl;
					throw(number);
		
				}else if(number > 1.0){
				
					cout << endl << "Math ERROR: Domain [-1,1] only" <<endl;
					throw(number);
				}else{
					
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
		};

		double InversTangen(){
			
			cout << "Input for Y " <<endl;
			double y_number{input_number()};
			
			BEGIN:
				
			cout << "Input for X " <<endl;
			double x_number{input_number()};
			try {
				
				if (x_number == 0){
					
				//throw runtime_ERROR("Math ERROR: Attempted to divide by Zero\n");
				cout << endl << "Math ERROR: Divide by Zero!" <<endl;	
				
				throw(x_number);
				}
				
			}
			catch(double denominator){
				cout << endl << "The denominator is: " << denominator << endl;
				cout << "Please input the new second number" << endl;
				goto BEGIN;
			}
			
			calculation_result = atan2(y_number, x_number);
			
			cout << endl << "ArcTan of y = " << y_number << " and x = "<< x_number << " = " << calculation_result << " rad " << endl;
						
		};	
};

class Logarithm{
	public:
		
		double calculation_result;
		
		double natural_log(){
			
			BEGIN:
			double base_number{input_number()};
	
			try {
				if (base_number == 0){
				
					cout << endl << "Math ERROR: Base number is 0" <<endl;
					throw(base_number);
				
				}else if(base_number < 0){
				
					cout << endl << "Math ERROR: Base number is negative" <<endl;
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
		};

		double base_10_log(){
			
			BEGIN:
			double base_number{input_number()};
	
			try {
				if (base_number == 0){
				
					cout << endl << "Math ERROR: Base number is 0" <<endl;
					throw(base_number);
					
				}else if(base_number < 0){
				
				cout << endl << "Math ERROR: Base number is negative" <<endl;
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
		
		};	
};

int main(){
	
	Standard basicOps;
	Exponential expOps;
	Trigonometry trigonOps;
	Logarithm logOps; //clearly log stands for logarithm not america's heavy metal Lamb of Gods
	
	char continue_key;
	int repick, option, done;
	
	MENU:
	
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
		
		case 0 :
			cout << endl << "Do you want to exit?[Y/N] ";
			cin >> continue_key;
			
			if(continue_key == 'Y' || continue_key == 'y'){
				
				exit(0);
				
			}else if(continue_key == 'N' || continue_key == 'n'){
				
				system("cls");
				goto MENU;
				
			}
				
			break;
			
	    case 1 :
	    	
			repick = back_to_menu();
			
			if(repick == 0){
				goto START;
			}else{
				
				basicOps.addition();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
			}

			break;

		case 2 : 
		
			repick = back_to_menu();
			
			if(repick == 0){
				goto START;
			}else{
				
				basicOps.subtraction();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
			}
			break;

		case 3 :
			
			repick = back_to_menu();
			
			if(repick == 0){
				goto START;
			}else{
				
				basicOps.multiplication();	
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
			}
			break;

		case 4 :
			
			repick = back_to_menu();
			
			if(repick == 0){
				goto START;
			}else{
				
				basicOps.division();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}		
			}
			break;

		case 5 :
		
			repick = back_to_menu();
	
			if(repick == 0){
				goto START;
			}else{
				
				basicOps.modulo();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}	
			}
			break;
			
		case 6 :
			
			repick = back_to_menu();
			
			if(repick == 0){
				goto START;
			}else{
				
				expOps.exp_number();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}	
			}
			break;

		case 7 :
			
			repick = back_to_menu();
			
			if(repick == 0){
				goto START;
			}else{	
			
				expOps.square_root();	
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
			}
			break;
			
	    case 8 :
	    	
	    	repick = back_to_menu();

			if(repick == 0){
				goto START;
			}else{		
			
				trigonOps.Sinus();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
				
			}
			break;

		case 9 :
			
			repick = back_to_menu();

			if(repick == 0){
				goto START;
			}else{
				
				trigonOps.Cosinus();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
			}
			break;

		case 10 :
			
			repick = back_to_menu();

			if(repick == 0){
				goto START;
			}else{
				
				trigonOps.Tangen();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}	
								
			}
			break;

		case 11 :
			
			repick = back_to_menu();

			if(repick == 0){
				goto START;
			}else{		
					
				trigonOps.InversSinus();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
				
			}
			break;

		case 12 :
			
			repick = back_to_menu();

			if(repick == 0){
				goto START;
			}else{
				
				trigonOps.InversCosinus();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
				
			}
			break;

		case 13 :
			
			repick = back_to_menu();

			if(repick == 0){
				goto START;
			}else{
				
				trigonOps.InversTangen();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
				
			}
			break;
			
		case 14 :
			
			repick = back_to_menu();

			if(repick == 0){
				goto START;
			}else{
				
				logOps.natural_log();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
				
			}
			break;

		case 15 :
			
			repick = back_to_menu();

			if(repick == 0){
				goto START;
			}else{
				
				logOps.base_10_log();
				done = reuse_or_not();
				
				if(done == 1){
					goto MENU;
				}
				
			}
			break;
			
		default:
			
			cout << endl;
			cout<<"Selector only accept number within range 1 to 15"<<endl;
			
			cout << "Do you want to retry? (Y/N): ";
			
			cin >> continue_key;
			
			if(continue_key == 'Y' || continue_key == 'y'){
				
				goto START;
			}
			else{
				
				exit(0);
				
			}
			goto START;
			break;
	}
	cout<<endl;
	
	cout << "End of program, press any key to close program..." <<endl;
	getch();
}
