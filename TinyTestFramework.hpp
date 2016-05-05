#ifndef TINYTESTFRAMEWORK_HPP
#define TINYTESTFRAMEWORK_HPP

#include <iostream>
#include <chrono>

#define TEST(function){\
	std::cout << #function << "\twas started" << std::endl;\
	const auto startTime = std::chrono::steady_clock::now();\
	function();\
	const auto endTime = std::chrono::steady_clock::now();\
	const auto elapsed = endTime - startTime;\
	const auto elapsedMicroseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();\
	std::cout << #function << "\t[PASSED]. duration: " << std::fixed << elapsedMicroseconds / 1000000. << "s" << std::endl << std::endl;\
}\

#endif // TINYTESTFRAMEWORK_HPP

