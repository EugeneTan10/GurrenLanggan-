#include <iostream>
#include <boost/filesystem.hpp>

void test1() {
	const char dir_path[] = "E:\Luqman\Desktop\nth";

	boost::filesystem::path dir(dir_path);
	if(boost::filesystem::create_directory(dir)) {
		std::cout << "Success" << "\n";
	}
}

void test2() {
	const char dir_path[] = "E:\Luqman\Desktop\nth\uu";

	boost::filesystem::path dir(dir_path);
	if(boost::filesystem::create_directories(dir)) {
		std::cout << "Success" << "\n";
	}
}

int main() {
	test1();
	test2();

	return 0;
}
