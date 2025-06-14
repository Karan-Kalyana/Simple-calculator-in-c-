#include <iostream>

using namespace std;

int main(){
	double num1,num2;
	char operation;
	
	cout << "\t\t***************************************************************************************" << endl;
    cout << "\t\t**   #####                                                                           **" << endl;
    cout << "\t\t**  #     #     ##    #        ####   #    #  #          ##     ###   ####   #####   **" << endl;
    cout << "\t\t**  #          #  #   #       #    #  #    #  #         #  #     #   #    #  #    #  **" << endl;
    cout << "\t\t**  #         #    #  #       #       #    #  #        #    #    #   #    #  #    #  **" << endl;
    cout << "\t\t**  #         ######  #       #       #    #  #        ######    #   #    #  #####   **" << endl;
    cout << "\t\t**  #     #  #      # #       #    #  #    #  #       #      #   #   #    #  #   #   **" << endl;
    cout << "\t\t**   #####   #      #  ######  ####    ####   ######  #      #   #    ####   #    #  **" << endl;
    cout << "\t\t***************************************************************************************" << endl;
    cout << "\t\t**                           **   By : Karan kalyana   **                            **" << endl;
    cout << "\t\t**                          ******************************                           **" << endl;
    cout << "-------------------------------------------------------------------------------------------------------"
         << endl;
	
	cout<<"Enter 1st number,enter the 2nd number : "<<endl;
	cin>>num1>>num2;
	cout<<"Enter the opertion (+,-,*,/) : "<<endl;
	cin>>operation;
	
	switch(operation){
		case '+':
			cout<<num1<<" + "<<num2<<" = "<<num1+num2;
			break;
		case '-':	
			cout<<num1<<" - "<<num2<<" = "<<num1-num2;
			break;
		case '*':
			cout<<num1<<" * "<<num2<<" = "<<num1*num2;
			break;
		case '/':
			if(num2!=0)
				cout<<num1<<" / "<<num2<<" = "<<num1/num2;
			
			else
					cout<<"Error!,Not divisilbe by 0";
			break;
			
	default:
		cout<<"Invaild operation.";
	}
	return 0;
}
