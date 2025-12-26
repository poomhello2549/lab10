#include<iostream>
#include<string>
using namespace std;

int main () {

	
	int A = 0 ;
	int B = 0 ;
	int C = 0 ;
	int D = 0 ;
	int F = 0 ;

	int numberStudent = 1 ;

	char grade ;

	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl ;

	do {

		cout << "Student [" << numberStudent << "]: ";
		cin >> grade ;

		if (grade == 'A') {

			A = A + 1 ;
		}

		else if (grade == 'B') {
			B = B + 1 ;
		}

		else if (grade == 'C') {

			C = C + 1 ;
		}

		else if (grade == 'D') {

			D = D + 1 ;
		}

		else if (grade == 'F') {

			F = F + 1 ;
		}

		else if (grade != 'A' && grade != 'B' && grade != 'C'&& grade != 'D' && grade != 'F' && grade != '0') {
			
			numberStudent = numberStudent-1 ;
			cout << "Wrong input. Please input again." << endl;
		}
		

		 if (grade == '0') {
			
			break ;
		}
	numberStudent = numberStudent + 1;

		
		
		
	}while (grade != '0' ) ;


	cout << "In total " << numberStudent-1 << " students." << endl;

	cout << "A = " << A << ", " << "B = " << B << ", " << "C = " << C << ", " << "D = " << D << ", " << "F = " << F ;










	return 0 ;
}
