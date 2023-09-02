#include <iostream>

#include "Microwave.hpp"

using namespace patterns::creational::factorymethod;

namespace factorymethod {

Microwave::Microwave() {}

void Microwave::run() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

} // namespace factorymethod

