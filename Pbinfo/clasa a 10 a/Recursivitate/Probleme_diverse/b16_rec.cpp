#include <iostream>
#include <cstdint>
#include <string>
#include <sstream>
#include <algorithm>

int main()
{
	uint32_t n;
	std::cin >> n;
	std::ostringstream ss;
	ss << std::hex << n;

	std::string base16 = ss.str();
	std::transform(base16.begin(), base16.end(), base16.begin(), ::toupper);

	std::cout << base16;
	return 0;
}