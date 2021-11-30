#include <iostream>
using namespace std;
//Program created by Jeremy Bill as part of Lab 1.

int main()
{
	//declaring some variables
	bool check = true;
	
	char ans;
	char op;
		//do while loop
		do {
			cout << "Enter a calculation in the form X + Y\n";
			//initializing number variables to avoid issues later
			int num1=0, num2=0;
			int result=0;
			int truth = 0;
			//takes in num 1 the operator and num 2
			cin >> num1 >> op >> num2;
			//switch statement thats looks at the operator.
			switch (op)
			{
			//+ case
			case '+':
			{
				//Makes result num 1 + num 2
				result = num1 + num2;

				//prints out num 1 op num2 and result
				cout << num1 << op << num2 << '=' << result << "\n";
				//if statements to compare result and print out the number of stars based on what result is
				if (result == 1)
				{
					cout << '*' << "\n";
				}
				if (result == 2)
				{
					cout << "**" << "\n";
				}
				if (result == 3)
				{
					cout << "***" << "\n";
				}
				if (result == 4)
				{
					cout << "****" << "\n";
				}
				if (result == 5 || result > 5)
				{
					cout << "*****" << "\n";
				}
				//Asks the user if they want to do another calculation and takes in answer 
				cout << "Do you want to enter another calculation? Enter y or n.\n";
				cin >> ans;
				//while loop to loop if what they enter is not a n or y 
				while (truth != 1)
				{
					if (ans != 'y' && ans != 'n')
					{
						cout << "That is not a valid y or n please try again\n";
						cout << "Do you want to enter another calculation? Enter y or n.\n";
						cin >> ans;
						truth = 0;
					}
					else
					{
						truth = 1;
					}
				}
				//if answer is no it will break the do while and end the program
				if (ans == 'n')
				{
					check = false;
					break;
				}
				//if answer is yes it will loop through the do while again. 
				else if (ans == 'y')
				{
					check = true;
				}
				break;
			}
			//subtraction case 
			case '-':
			{
				//Makes result num 1 - num 2
				result = num1 - num2;
				//prints out num 1 op num2 and result
				cout << num1 << op << num2 << '=' << result << "\n";
				//if statements to compare result and print out the number of stars based on what result is
				if (result == 1)
				{
					cout << '*' << "\n";
				}
				if (result == 2)
				{
					cout << "**" << "\n";
				}
				if (result == 3)
				{
					cout << "***" << "\n";
				}
				if (result == 4)
				{
					cout << "****" << "\n";
				}
				if (result == 5 || result > 5)
				{
					cout << "*****" << "\n";
				}
				//Asks the user if they want to do another calculation and takes in answer 
				cout << "Do you want to enter another calculation? Enter y or n.\n";
				cin >> ans;
				//while loop to loop if what they enter is not a n or y 
				while (truth != 1)
				{
						//if ans is not a y or n it does this 
					if (ans != 'y' && ans != 'n')
					{
						cout << "That is not a valid y or n please try again\n";
						cout << "Do you want to enter another calculation? Enter y or n.\n";
						cin >> ans;
						truth = 0;
					}
					else
					{
						truth = 1;
					}
				}
				//if answer is no it will break the do while and end the program
				if (ans == 'n')
				{
					check = false;
					break;
				}
				//if answer is yes it will loop through the do while again. 
				else if (ans == 'y')
				{
					check = true;
				}
				break;

			}
			// multiplication case 
			case '*':
			{
				//Makes result num 1 * num 2
				result = num1 * num2;
				//prints out num 1 op num2 and result
				cout << num1 << op << num2 << '=' << result << "\n";
				//if statements to compare result and print out the number of stars based on what result is
				if (result == 1)
				{
					cout << '*' << "\n";
				}
				else if (result == 2)
				{
					cout << "**" << "\n";
				}
				else if (result == 3)
				{
					cout << "***" << "\n";
				}
				else if (result == 4)
				{
					cout << "****" << "\n";
				}
				else if (result == 5 || result > 5)
				{
					cout << "*****" << "\n";
				}
				//Asks the user if they want to do another calculation and takes in answer 
				cout << "Do you want to enter another calculation? Enter y or n.\n";
				cin >> ans;
				//while loop to loop if what they enter is not a n or y 
				while (truth != 1)
				{

					//if ans is not a y or n it does this 
					if (ans != 'y' && ans != 'n')
					{
						cout << "That is not a valid y or n please try again\n";
						cout << "Do you want to enter another calculation? Enter y or n.\n";
						cin >> ans;
						truth = 0;
					}
					else
					{
						truth = 1;
					}
				}
				//if answer is no it will break the do while and end the program
				if (ans == 'n')
				{
					check = false;
					break;
				}
				//if answer is yes it will loop through the do while again. 
				else if (ans == 'y')
				{
					check = true;
				}
				break;
			}
			//Division case
			case '/':
			{
			//If num2 is not 0 it will do the following else it will do the else case i wrote.
				if (num2 != 0)
				{

					//Makes result num 1 / num 2
					result = num1 / num2;
					//prints out num 1 op num2 and result
					cout << num1 << op << num2 << '=' << result << "\n";
					//if statements to compare result and print out the number of stars based on what result is
					if (result == 1)
					{
						cout << '*' << "\n";
					}
					if (result == 2)
					{
						cout << "**" << "\n";
					}
					if (result == 3)
					{
						cout << "***" << "\n";
					}
					if (result == 4)
					{
						cout << "****" << "\n";
					}
					if (result == 5 || result > 5)
					{
						cout << "*****" << "\n";
					}
					//Asks the user if they want to do another calculation and takes in answer 
					cout << "Do you want to enter another calculation? Enter y or n.\n";
					cin >> ans;
					//while loop to loop if what they enter is not a n or y 
					while (truth != 1)
					{
						//if ans is not a y or n it does this 
						if (ans != 'y' && ans != 'n')
						{
							cout << "That is not a valid y or n please try again\n";
							cout << "Do you want to enter another calculation? Enter y or n.\n";
							cin >> ans;
							truth = 0;
						}
						else
						{
							truth = 1;
						}
					}
					//if answer is no it will break the do while and end the program
					if (ans == 'n')
					{
						check = false;
						break;
					}
					//if answer is yes it will loop through the do while again. 
					else if (ans == 'y')
					{
						check = true;
					}
					break;



				}
				else
					//Made a divide by 0 case which is the same as the other cases except it says it cannot divide by 0 and proceeds to do the same prompts from before.
				cout << "Cannot divide by 0 \n";
				cout << "Do you want to enter another calculation? Enter y or n.\n";
				cin >> ans;
				while (truth != 1)
				{
					//if ans is not a y or n it does this 
					if (ans != 'y' && ans != 'n')
					{
						cout << "That is not a valid y or n please try again\n";
						cout << "Do you want to enter another calculation? Enter y or n.\n";
						cin >> ans;
						truth = 0;
					}
					else
					{
						truth = 1;
					}
				}
				//if answer is no it will break the do while and end the program
				if (ans == 'n')
				{
					check = false;
					break;
				}
				//if answer is yes it will loop through the do while again. 
				else if (ans == 'y')
				{
					check = true;
				}
				break;

			}
			







			}

			

		} while (check == true); //boolean that if false will end the program







	
}