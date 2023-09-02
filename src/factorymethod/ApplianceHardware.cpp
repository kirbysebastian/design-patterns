#include "ApplianceHardware.hpp"

namespace factorymethod {

ApplianceHardware::ApplianceHardware() {
}

void ApplianceHardware::run() {

	const auto& microwave{m_microwaveFactory.createProduct()};
	microwave->run();
}

} // namespace factorymethod

