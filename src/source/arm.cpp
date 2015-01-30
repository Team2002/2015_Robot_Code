#include "arm.h"

arm::arm(int piston_port_1, int piston_port_2)
{
	piston = new DoubleSolenoid(piston_port_1, piston_port_2);
	arm_state = false;
}
arm::~arm()
{
	delete piston;
}

bool arm::is_up() const {return arm_state;}

void arm::up()
{
	piston->Set(DoubleSolenoid::kForward);
	arm_state = true;
}

void arm::down()
{
	piston->Set(DoubleSolenoid::kReverse);
	arm_state = false;
}
void arm::toggle()
{

}
