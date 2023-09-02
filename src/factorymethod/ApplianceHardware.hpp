#ifndef _APPLIANCE_HARDWARE_HPP_
#define _APPLIANCE_HARDWARE_HPP_

#include "IApplication.hpp"
#include "MicrowaveFactory.hpp"

namespace factorymethod {

class ApplianceHardware final : public IApplication {
public:
	ApplianceHardware();
	void run() override;
private:
	MicrowaveFactory m_microwaveFactory;
};

} // namespace factorymethod
#endif // _APPLIANCE_HARDWARE_HPP_

