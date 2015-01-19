#include <WPILib.h>
class Claw
{
public:
	Claw();
	bool is_in() const;
	void close();
	void open();
	void toggle();
private:
	bool claw_state;
};
