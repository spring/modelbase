// World Builder Explosion Library
// Subject to the terms of the World Builder License.

#ifndef ExplosionIncludes_WORLDBUILDER_H_
#define ExplosionIncludes_WORLDBUILDER_H_

Boom()
{
		var RandomLocation, RandomType;
		RandomLocation = RAND(1,8);
		RandomType = RAND(1025,1028);
		if (RandomLocation == 1)
		{
			emit-sfx RandomType from explode_point01;
		}
		if (RandomLocation == 2)
		{
			emit-sfx RandomType from explode_point02;
		}
		if (RandomLocation == 3)
		{
			emit-sfx RandomType from explode_point03;
		}
		if (RandomLocation == 4)
		{
			emit-sfx RandomType from explode_point04;
		}
		if (RandomLocation == 5)
		{
			emit-sfx RandomType from explode_point05;
		}
		if (RandomLocation == 6)
		{
			emit-sfx RandomType from explode_point06;
		}
		if (RandomLocation == 7)
		{
			emit-sfx RandomType from explode_point07;
		}
		if (RandomLocation == 8)
		{
			emit-sfx RandomType from explode_point08;
		}
}

//////////////////////////////////////////////////EXPLOSION
Explosion()
{
var RandomTime, RandomExplosions, RandomRoll;
RandomRoll = RAND(1029,1032);
RandomExplosions = RAND(MinExplosions,MaxExplosions);

	While(RandomExplosions > 0)
	{
		RandomTime = RAND(60,240);
		call-script Boom();
		sleep RandomTime;
		--RandomExplosions;
	}
	emit-sfx RandomRoll from center;
}

#endif // if ExplosionIncludes_WORLDBUILDER_H_