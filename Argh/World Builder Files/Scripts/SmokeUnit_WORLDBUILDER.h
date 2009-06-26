// WORLDBUILDER Smoke Script
// Subject to the terms of the WORLDBUILDER License.

#ifndef SMOKEUNIT_WORLDBUILDER_H_
#define SMOKEUNIT_WORLDBUILDER_H_

// Very, very, VERY IMPORTANT!!!
// You must define SMOKEPIECE1 through SMOKEPIECE4...
//  I don't care, and neither does Spring, if you define them all as "base", but you MUST DEFINE THEM.
// For the ultra-newbie, here's an example:
// #define SMOKEPIECE1 base
// #define SMOKEPIECE2 body
// #define SMOKEPIECE3 foot
// #define SMOKEPIECE4 someotherthing.

#define SMOKEPUFF_WORLDBUILDER 1024
SMOKEUNIT_WORLDBUILDER()
{
/*while(TRUE)
	{
	// First, we sleep.  No point in checking this all the time, right? 2 times a second is good enough.
	//But we don't want to sleep the same amount for every unit- we need to de-sync things.  So let's randomize it.
	var RandomNumber;
	RandomNumber = Rand(400,1500);
	sleep RandomNumber;
	// We do not want our units to smoke when they're not done building, do we?  This part prevents that.
	while( get BUILD_PERCENT_LEFT )
	{
		sleep 1000;
	}
//
// Now we want to emit smoke from a random SMOKEPIECE.
// The following variables are used to determine which SMOKEPIECE gets used (RollTheDice)
// What level of Health to emit Smoke (HealthLevel)
// What the named effect is that we're calling (SmokePuff)
// ...and a number we're assigning a random value to keep things interesting (SmokeNumber).
// You could vary things even more, but this will produce pretty interesting smoke, and it's cheap on lines of code.
//
//
	var RollTheDice, HealthLevel, SmokePuff, SmokeNumber;
//
//
// Now we get HealthLevel, which is just the current value of HEALTH.
HealthLevel = get HEALTH;
	if(HealthLevel < 66)
	{
		if(HealthLevel < 66 || HealthLevel >= 45)
		{
			sleep (RandomNumber - 200);
		}
		if(HealthLevel < 45 || HealthLevel >= 15)
		{
			sleep (RandomNumber - 250);
		}
		if(HealthLevel < 15 || HealthLevel >= 0)
		{
			sleep (RandomNumber - 300);
		}
		RollTheDice = Rand(0,10);
		if(RollTheDice > 0 || RollTheDice <= 1)
		{
			emit-sfx SMOKEPUFF_WORLDBUILDER from SMOKEPIECE1;
		}
		if(RollTheDice > 1 || RollTheDice <= 2)
		{
			emit-sfx SMOKEPUFF_WORLDBUILDER from SMOKEPIECE2;
		}
		if(RollTheDice > 2 || RollTheDice <= 3)
		{
			emit-sfx SMOKEPUFF_WORLDBUILDER from SMOKEPIECE3;
		}
		if(RollTheDice > 3 || RollTheDice <= 4)
		{
			emit-sfx SMOKEPUFF_WORLDBUILDER from SMOKEPIECE4;
		}
	}
}*/
}
#endif // if SMOKEUNIT_WORLDBUILDER_H_