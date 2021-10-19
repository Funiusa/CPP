
#include "replace.hpp"

int main(int argc, char **argv) {
	if (argc < 4) {
		ft_error("After file \".replace\" \x1B[33minsert "
				 "file name, mutable and substitute strings.\033[0m");
	}
	std::string	fileName = argv[1],
				mutableStr = argv[2],
				substituteStr = argv[3];
	std::fstream  inFile(fileName.c_str(), std::ios::in);
	if (!inFile) {
		ft_error("Error! File for changes is missing.");
	}

	std::string		fileReplace = fileName + ".replace";
	std::ofstream	outFile(fileReplace.c_str(), std::ios::out);

	if (!outFile) {
		ft_error("Error! Out file doe's not create.");
	}

	std::string strInput;
	while (getline(inFile, strInput))
			outFile << replace(mutableStr, substituteStr, strInput) << std::endl;
	outFile.close();
	std::cout << "\x1B[32mDone!\033[0m" << std::endl;
	return 0;
}