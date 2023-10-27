#pragma once
class Time
{
public:
	Time();

	~Time();

	void Update();

	float DeltaTime() { return deltaTime; }

private:
	float nowTime;
	float deltaTime;
	float prevTime;
	float palypos;
};

