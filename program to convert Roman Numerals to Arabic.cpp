#include <iostream>
#include <string>
using namespace std;
int main()
{
	string rypeat = "";

	//welcome user
	cout << "welcome to program to convert Roman Numerals to Arabic !";

	//Defining a variable to return the program 
	while (rypeat != "x")
	{
		string romanNumeral = "";   //display output
		int arabicNumber = 0;   //To enter the number to convert
		int theRest = 0;     //To calculate the remainder of the output

		//To enter the number to convert
		cout << "\nplease, type a Arabic valid number: \n";
		cin >> arabicNumber;

		//To ensure that the number is among the Roman numerals
		if ((arabicNumber >= 4000) || (arabicNumber <= 0))
		{
			cout << "invalied Arabic valid number, please trye again \n\n";
		}
		else
		{
			//Get rid of the thousand numbers
			if (arabicNumber >= 1000)
			{
				theRest = (arabicNumber / 1000);

				//print (M) numbers to (1000)
				//print (M) numbers to (2000)
				//print (M) numbers to (3000)
				for (int i = 0; i < theRest; i++)
				{
					romanNumeral += 'M';
				}

				//Move to hundreds
				arabicNumber %= 1000;
			}
			if (arabicNumber >= 100)
			{
				theRest = (arabicNumber / 100);

				//print (CM) numbers to (900)
				if (theRest == 9)
				{
					romanNumeral += "CM";
				}

				//print (D) numbers to (500)
				else if (theRest >= 5)
				{
					romanNumeral += 'D';

					//print (C) numbers to (600 after adding M)  
					//print (CC) numbers to (700 after adding M) 
					//print (CCC) numbers to (800 after adding M)
					for (int i = 0; i < theRest - 5; i++)
					{
						romanNumeral += 'C';
					}
				}

				//print (CD) numbers to (400)
				else if ((theRest == 4))
				{
					romanNumeral += "CD";
				}

				//print (C) numbers to (100)
				//print (CC) numbers to (200)
				//print (CC) numbers to (300)
				else if ((theRest >= 1))
				{
					for (int i = 0; i < theRest; i++)
					{
						romanNumeral += 'C';
					}
				}

				//Move to tens numbers
				arabicNumber %= 100;
			}
			if (arabicNumber >= 10)
			{
				theRest = (arabicNumber / 10);

				//print (XC) numbers to (90)
				if (theRest == 9)
				{
					romanNumeral += "XC";
				}

				//print (L) numbers to (50)
				else if (theRest >= 5)
				{
					romanNumeral += 'L';

					//print (X) numbers to (60 after adding L)  
					//print (XX) numbers to (70 after adding L) 
					//print (XXX) numbers to (80 after adding L)
					for (int i = 0; i < theRest - 5; i++)
					{
						romanNumeral += 'X';
					}
				}

				//print (XL) numbers to (40)
				else if ((theRest == 4))
				{
					romanNumeral += "XL";
				}

				//print (X) numbers to (10 )
				//print (XX) numbers to (20)
				//print (XXX) numbers to (30)
				else if ((theRest >= 1))
				{
					for (int i = 0; i < theRest; i++)
					{
						romanNumeral += 'X';
					}
				}

				//Move to the ones digits
				arabicNumber %= 10;
			}
			if (arabicNumber >= 1)
			{
				theRest = arabicNumber;

				//print (XI) numbers to (9)
				if (theRest == 9)
				{
					romanNumeral += "IX";
				}

				//print (V) numbers to (5)
				else if (theRest >= 5)
				{
					romanNumeral += 'V';

					//print (I) numbers to (6 after adding V)  
					//print (II) numbers to (7 after adding V) 
					//print (III) numbers to (8 after adding V)
					for (int i = 0; i < theRest - 5; i++)
					{
						romanNumeral += 'I';
					}
				}

				//print (IV) numbers to (4 )
				else if ((theRest == 4))
				{
					romanNumeral += "IV";
				}

				//print (I) numbers to (6 )  
				//print (II) numbers to (7 ) 
				//print (III) numbers to (8 )
				else if ((theRest >= 1))
				{
					for (int i = 0; i < theRest; i++)
					{
						romanNumeral += 'I';
					}
				}
			}

			// print a result:
			cout << "A roman numeral: " << romanNumeral << "\n\n\n";
		}
		// If you want to continue in a program 
		cout << "If you want to continue, press anything, and if you want to exit, press 'x' : \n";
		cin >> rypeat;
	}

	return 0;
}