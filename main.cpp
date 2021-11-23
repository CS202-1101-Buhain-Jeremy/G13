#include <iostream>

using namespace std;

int main(){

	//variables
	int option;

	//present start menu
	cout << "---------------------" << endl;
	cout << "WAV START" << endl;
	cout << "---------------------" << endl;
	cout << "1. Begin" << endl;
	cout << "2. Exit" << endl;
	cout << "Enter the corresponding number: " << endl;

	cin << option;

	if (option == 2){
		//exit program
	}

	cout << "Enter filename: " << endl;
	cin << FILE;

	if (//filename DNE or is not a wav)
	{
		cout <<  "The file does not exist or is not in the right format, try again!" << endl;
		//exit program
	}

	//read file metadata
	//(1) diplay metadata to user 
	//If user selects processor option
		//request output filenames
		//run processor
		//save file
		//go back to start



	return 0;
}
