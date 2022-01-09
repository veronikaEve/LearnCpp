#include <iostream>

using namespace std;

void HelloMessage() {
	cout << "Hello" << endl;
}

void Goodbye() {
	cout << "Goodbye" << endl;
}

void Message(const string param){
	cout << param << endl;
}

int main() {
	void(*message)();
	message=HelloMessage;
	message();
	message=Goodbye;
	message();

	void(*newMessage)(string);
	newMessage=Message;
	newMessage("Bunny");

}
