#include "WPILib.h"

class arm
{
public:
	DoubleSolenoid* piston;

	arm(int piston_port_1, int piston_port_2);
	~arm();

	bool is_up() const;
	void up();
	void down();
	void toggle();

private:
	bool arm_state;
};
