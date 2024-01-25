// #include "word_ladder.h"

#include <iostream>
#include <string>
#include "db.h"

auto main() -> int {
	std::string line;

	while (true) {

		// print startpoint: e.g. : ">"
		std::cout << ">";

		// take line of input
		std::getline(std::cin, line);

		if (line.length() == 0) {
			break;
		}

		// parse


		// send to db


		// print output
		std::cout << line;

	}




	// std::cout << "Hello World\n" << nasDB::add(42, 42) << "\n";

	return 0;
}
