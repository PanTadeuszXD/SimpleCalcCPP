#include <iostream> //defining some includes to the project
#include <Windows.h> // defining some includes to the project

/*    Welcome to David's simple calculator. No custom functions or confusing code, this was programmed simply for educational purposes.   */

//----Arithmetic Logic-----
float multiplicationVar = 0; //defining some variables
float divisionVar       = 0; //defining some variables
float additionVar	    = 0; //defining some variables
float subtractionVar    = 0; //defining some variables

//----Other Logic-----
int userinputMain = 0;	//defining some variables
float userinputMath1st = 0; //first number user puts in
float userinputMath2nd = 0; //second number user puts in

int main() {
	SetConsoleTitleA("David's Calculator"); //<- setting the title of the console window.

	printf("Welcome to David's calculator, please select one of the following: \n\n"); //<- printing this message on the screen

	printf("[1] - Addition\n"); //<- printing this message on the screen (\n means new line in the console) 
	printf("[2] - Subtraction\n"); //<- printing this message on the screen (\n means new line in the console) 
	printf("[3] - Multiplication\n"); //<- printing this message on the screen (\n means new line in the console) 
	printf("[4] - Division\n\n"); //<- printing this message on the screen (\n means new line in the console) 

	printf("[>] "); //<- printing this message on the screen
	std::cin >> userinputMain; //<- We're asking the user to input one of the following numbers and storing it inside the userInput variable. This will set the value of the userInput variable to whatever the user puts in.

	//For the next part we can either use a switch statement, or we can use the if statements to determine what happens after whatever number the user put in.
	
	//For now, we will use a switch statement. 

	switch (userinputMain) { //<- we're creating a switch statement for the userInput variable.

	case 1: //<- if user inputs the number one (1), the following code before the "break;" will execute.
		system("CLS"); //<- we are clearing the console's screen.
		printf("Please input the first number to add:\n\n"); //<- printing this message on the screen (\n means new line in the console) 
		printf("[>] "); //<- printing this message on the screen
		std::cin >> userinputMath1st;
		system("CLS"); //<- we are clearing the console's screen.
		printf("Please input the second number to add:\n\n"); //<- printing this message on the screen (\n means new line in the console) 
		printf("[>] "); //<- printing this message on the screen
		std::cin >> userinputMath2nd; //<- inputting the second number
		system("cls"); //<- clearing the screen
		printf("Your result is: %f", userinputMath1st + userinputMath2nd); //<- adding the two numbers. %d means we are going to display the result as an integer.
		printf("\n"); //<- creating a new line
		printf("\n"); //<- creating a new line
		printf("[+] Press any key to go back to the main screen."); //<- displaying a message
		system("pause>0"); //<- pausing the program so it doesn't close. User needs to press any key to continue.
		system("CLS"); //clearing the screen.
		main();//<- going back to the start of the function!
		break; //<- the break tells the switch statement to break out of the current case.

	case 2: //<- if user inputs the number two (2), the following code before the "break;" will execute.
		system("CLS"); //<- we are clearing the console's screen.
		printf("Please input the first number to subtract:\n\n"); //<- printing this message on the screen (\n means new line in the console) 
		printf("[>] "); //<- printing this message on the screen
		std::cin >> userinputMath1st;
		system("CLS"); //<- we are clearing the console's screen.
		printf("Please input the second number to subtract:\n\n"); //<- printing this message on the screen (\n means new line in the console) 
		printf("[>] "); //<- printing this message on the screen
		std::cin >> userinputMath2nd; //<- inputting the second number
		system("cls"); //<- clearing the screen
		printf("Your result is: %f", userinputMath1st - userinputMath2nd); //<- subtracting the two numbers. %d means we are going to display the result as an integer.
		printf("\n"); //<- creating a new line
		printf("\n"); //<- creating a new line
		printf("[+] Press any key to go back to the main screen."); //<- displaying a message
		system("pause>0"); //<- pausing the program so it doesn't close. User needs to press any key to continue.
		system("CLS"); //clearing the screen.
		main();//<- going back to the start of the function!
		break; //<- the break tells the switch statement to break out of the current case.

	case 3: //<- if user inputs the number three (3), the following code before the "break;" will execute.
		system("CLS"); //<- we are clearing the console's screen.
		printf("Please input the first number to multiply:\n\n"); //<- printing this message on the screen (\n means new line in the console) 
		printf("[>] "); //<- printing this message on the screen
		std::cin >> userinputMath1st;
		system("CLS"); //<- we are clearing the console's screen.
		printf("Please input the second number to multiply:\n\n"); //<- printing this message on the screen (\n means new line in the console) 
		printf("[>] "); //<- printing this message on the screen
		std::cin >> userinputMath2nd; //<- inputting the second number
		system("cls"); //<- clearing the screen
		printf("Your result is: %f", userinputMath1st * userinputMath2nd); //<- multiplying the two numbers. %d means we are going to display the result as an integer.
		printf("\n"); //<- creating a new line
		printf("\n"); //<- creating a new line
		printf("[+] Press any key to go back to the main screen."); //<- displaying a message
		system("pause>0"); //<- pausing the program so it doesn't close. User needs to press any key to continue.
		system("CLS"); //clearing the screen.
		main();//<- going back to the start of the function!
		break; //<- the break tells the switch statement to break out of the current case.

	case 4: //<- if user inputs the number four (4), the following code before the "break;" will execute.
		system("CLS"); //<- we are clearing the console's screen.
		printf("Please input the first number to divide:\n\n"); //<- printing this message on the screen (\n means new line in the console) 
		printf("[>] "); //<- printing this message on the screen
		std::cin >> userinputMath1st;
		system("CLS"); //<- we are clearing the console's screen.
		printf("Please input the second number to divide:\n\n"); //<- printing this message on the screen (\n means new line in the console) 
		printf("[>] "); //<- printing this message on the screen
		std::cin >> userinputMath2nd; //<- inputting the second number
		system("cls"); //<- clearing the screen
		printf("Your result is: %f", userinputMath1st / userinputMath2nd); //<- adding the two numbers. %d means we are going to display the result as an integer.
		printf("\n"); //<- creating a new line
		printf("\n"); //<- creating a new line
		printf("[+] Press any key to go back to the main screen."); //<- displaying a message
		system("pause>0"); //<- pausing the program so it doesn't close. User needs to press any key to continue.
		system("CLS"); //clearing the screen.
		main();//<- going back to the start of the function!
		break; //<- the break tells the switch statement to break out of the current case.

	default: //<- if neither of the cases above match, aka if the user inputs anything that isn't supposed to be input, this will prompt the code below to execute.
		system("CLS");
		printf("[+] Invalid argument. Please press any key to go back to the main screen."); //<- displaying a message
		system("pause>0"); //<- pausing the program so it doesn't close. User needs to press any key to continue.
		system("CLS"); //clearing the screen.
		main();
		break;
	}
}