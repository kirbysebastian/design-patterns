#include "MicrowaveFactory.hpp"
#include "Microwave.hpp"

using namespace patterns::creational::factorymethod;
namespace factorymethod {

MicrowaveFactory::MicrowaveFactory() {}

IProduct* MicrowaveFactory::createProduct() {
	static Microwave m;
	return &m;
}

} // namespace factorymethod

