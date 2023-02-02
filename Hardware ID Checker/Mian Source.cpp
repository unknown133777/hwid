#include <iostream>
#include <Windows.h>
#include "func.h"

void textcolor(int foreground, int background);

int main() {
	system("mode con: cols=85 lines=55");

	system("cls");
	std::cout << std::endl;
	textcolor(YELLOW, BLACK);
	std::cout << "https://github.com/lee-d-g2222" << std::endl;

	std::cout << std::endl;
	
	textcolor(GREEN, BLACK);
	std::cout << "< diskdrive serialnumber >" << std::endl;
	textcolor(LIGHTRED, BLACK);
	system("wmic diskdrive get serialnumber");

	std::cout << std::endl;

	textcolor(GREEN, BLACK);
	std::cout << "< bios serialnumber >" << std::endl;
	textcolor(LIGHTRED, BLACK);
	system("wmic bios get serialnumber");
	
	std::cout << std::endl;

	textcolor(GREEN, BLACK);
	std::cout << "< baseboard serialnumber >" << std::endl;
	textcolor(LIGHTRED, BLACK);
	system("wmic baseboard get serialnumber");

	std::cout << std::endl;

	textcolor(GREEN, BLACK);
	std::cout << "< windows system uuid >" << std::endl;
	textcolor(LIGHTRED, BLACK);
	system("wmic csproduct get uuid");

	std::cout << std::endl;

	textcolor(GREEN, BLACK);
	std::cout << "< cpu processorid >" << std::endl;
	textcolor(LIGHTRED, BLACK);
	system("wmic cpu get processorid");

	std::cout << std::endl;

	textcolor(GREEN, BLACK);
	std::cout << "< volume serialnumber >" << std::endl;
	textcolor(LIGHTRED, BLACK);
	system("vol");
	
	std::cout << std::endl;

	textcolor(GREEN, BLACK);
	std::cout << "< Mac adress >" << std::endl;
	textcolor(LIGHTRED, BLACK);
	system("getmac");

	std::cout << std::endl;

	textcolor(GREEN, BLACK);
	std::cout << "< ARP >" << std::endl;
	textcolor(LIGHTRED, BLACK);
	system("arp -a");

	std::cout << "\n\n";
	system("PAUSE");

	return 0;
}
