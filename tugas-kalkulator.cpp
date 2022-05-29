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
	int option;
	
//	division();
	
	modulo();
	
//	sum();
//	double calculation_result;
//	cout << "Input the first number: ";
//	cin >> first_number;
//	cout << endl;
//	cout << "Input the second number: ";
//	cin >> second_number;
//	cout << endl;
//	sum(first_number, second_number, calculation_result);
//	subtraction(first_number, second_number, calculation_result);
//	times(first_number, second_number, calculation_result);
//	divide(first_number, second_number, calculation_result);
//	int bil1,bil2, pil;
//	float hasil;
//	string operasi;
//	
//	cout << "PILIH OPERATOR ARITMATIKA"<<endl;
//	cout << "1. Penjumlahan" << endl;
//	cout << "2. Pengurangan" << endl;
//	cout << "3. Perkalian" << endl;
//	cout << "4. Pembagian" << endl;
//	cout << "5. Modulus" << endl;
//	cout << endl;
//	
//	START:
//	cout << "Select operation: ";
//	cin >> option;
//	cout << endl;
//	cout<<"Masukan Bilangan pertama : ";
//	cin>>bil1;
//	cout<<"Masukan Bilangan kedua : ";
//	cin>>bil2;	
////	
//	switch(option){
//	        case 1 : 
//			
//			hasil=bil1+bil2;
//			
//			operasi='+';
//			
//			break;
//		case 2 : 
//		
//			hasil=bil1-bil2;
//			
//			operasi='-';
//			
//			break;
//		case 3 :
//			hasil=bil1*bil2;
//			
//			operasi='*';
//			
//			break;
//		case 4 : 
//			hasil=bil1/bil2;
//			
//			operasi='/';
//			
//			break;
//		case 5 : 
//			hasil=bil1%bil2;
//			
//			operasi='%';
//			
//			break;
//			
//		default :
//			
//			cout<<"Selector only accept number (1-9)"<<endl;
//			
//			cout << "Apakah ingin memulai lagi? (Y/N)";
//			
//			cin >> opsi_lanjut;
//			
//			if(opsi_lanjut == 'Y'){
//				
//				system ("CLS");
//				
//				goto START;
//	}
//	cout<<"-----------------------------"<<endl;
//	cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
//	cout<<"-----------------------------"<<endl;
//	
//	getch();
}
