#include "Time.h"
#include "DxLib.h"
Time::Time()
    :nowTime((float)GetNowCount())
    ,prevTime(nowTime)
    ,deltaTime()
{

}

Time::~Time()
{

}

void Time::Update()
{
    nowTime =(float) GetNowCount();
    deltaTime = (nowTime - prevTime) / 1000.0f;
    prevTime = nowTime;
}

