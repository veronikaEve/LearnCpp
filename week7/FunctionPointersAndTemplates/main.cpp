#include <iostream>

void HelloMessage() {
	std::cout << "Hello" << std::endl;
}

void Goodbye() {
	std::cout << "Goodbye" << std::endl;
}

int main() {
	void(*message)();
	message=HelloMessage;
	message();
	message=Goodbye;
	message();
}
