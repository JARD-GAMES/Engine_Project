#ifndef VELOCITY
#define VELOCITY

#include "IComponent.h"

class cVelocity : public IComponent
{
private:
	float velocity;
	float maxVelocity;
	float acceleration;

	bool gravity;

public:
	cVelocity(float velocity, float maxVelocity, float acceleration, bool gravity);
	~cVelocity();
	float GetVelocity();
	void SetVelocity(float velocityIn);
	float GetMaxVelocity();
	void SetMaxVelocity(float maxVelocityIn);
	float GetAcceleration();
	void SetAcceleration(float accelerationIn);
	bool GetGravity();
	void SetGravity(bool gravityIn);
	ComponentMasks ComponentMask() override;
};

#endif
