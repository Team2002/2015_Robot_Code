#include <WPILib.h>
class Arm
{
public:
	Arm();
	bool is_up() const;
	void up();
	void down();
	void toggle();
private:
	bool arm_state;
};
