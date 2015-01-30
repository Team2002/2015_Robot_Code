#include "WPILib.h"

class shopping_cart_drive
{
public:
	Talon* left_motor;
	Talon* right_motor;

	shopping_cart_drive(int left, int right)
	{
		left_motor = new Talon(left),
		right_motor = new Talon(right);
	}
	~shopping_cart_drive()
	{
		delete left_motor;
		delete right_motor;
	}

	void drive(Joystick &Joystick1){
		// Cache Joystick Values
		float y = Joystick1.GetY(),
		z = Joystick1.GetZ(),
		slider = Joystick1.GetThrottle();

		// Drive
		left_motor->Set(-((slider+1)/2) * (y - z));
		right_motor->Set(((slider+1)/2) * (y + z));
	}
};
