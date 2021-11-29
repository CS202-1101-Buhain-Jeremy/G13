#include <iostream>
#include <fstream>
#include <string>
#include <utility>

using namespace std;

uint16_t bitsPerSample;

int main(){

	//variables
	int option;

	//present start menu
	cout << "---------------------" << endl;
	cout << "WAV START" << endl;
	cout << "---------------------" << endl;
	cout << "1. Metadata" << endl;
	cout << "2. Processor" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter the corresponding number: " << endl;

	cin << option;

	if (option == 3){
		//exit program
	}

	cout << "Enter filename: " << endl;
	cin << FILENAME;

	//opening file
	FILENAME* wavFile = fopen(file, "r");

	if (wavFile = nullptr)
	{
		cout <<  "The file does not exist or is not in the right format, try again!" << endl;
		//exit program
	}

	//read file metadata
	//filename
	//sample rate
	//bits per sample
	//stereo or mono
	
	//diplay metadata to user
	//filename
	cout << "The filename name is " << FILENAME << "." << endl;
	//sample rate
	cout << "The sample rate is " << sampleRate << "." << endl;
	//bits per sample
	cout << "The bits per sample is " << bitsPerSample << "." << endl;
	//stereo or mono
	cout << "The file is a " << stereoOrMono << " file." << endl;
	
	//If user selects processor option
		//request output filenames
		//run processor - normalization, echo, gain adjustment 
		//save file
		//go back to start



	return 0;
}
