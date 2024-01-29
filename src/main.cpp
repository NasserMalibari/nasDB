// #include "word_ladder.h"

#include <iostream>
#include <string>
#include "db.h"



auto main() -> int {
	std::string line;

	nasDB::INT i1;
	std::cout << i1.size() << " " << i1.name() << "\n";

	auto s1 = nasDB::STRING(3);
	std::cout << s1.size() << " " << s1.name() << "\n";

	auto i2 = new(nasDB::INT);
	(void) i2;
	std::cout << i2->size() << " " << i2->name() << "\n";

	// while (true) {

	// 	// print startpoint: e.g. : ">"
	// 	std::cout << ">";

	// 	// take line of input
	// 	std::getline(std::cin, line);

	// 	if (line.length() == 0) {
	// 		break;
	// 	}

	// 	// parse


	// 	// send to db


	// 	// print output
	// 	std::cout << line << "\n";

	// }




	// std::cout << "Hello World\n" << nasDB::add(42, 42) << "\n";

	return 0;
}
