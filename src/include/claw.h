#include "WPILib.h"

class claw
{
public:
	DoubleSolenoid* piston;

	claw(int piston_port_1, int piston_port_2)
	{
		piston = new DoubleSolenoid(piston_port_1, piston_port_2);
		arm_state = false;
	}
	~claw()
	{
		delete piston;
	}

	bool is_up() const;
	void up();
	void down();
	void toggle();

private:
	bool arm_state;
};
