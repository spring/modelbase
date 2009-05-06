--[[
mine!
]]--

unitDef = {
-------------------------------------------------------------------
-- Description
-------------------------------------------------------------------

	unitname 			= "m-bot",
	name				= "M-Bot",
	description			= "Military Gatling Robot of DOOM! Made by maackey.",
	side				= "CORE",
	
-------------------------------------------------------------------
-- Appearance
-------------------------------------------------------------------

	objectName			= "m-bot-mkII.s3o",
	corpse				= "dead",
	explodeAs			= "SMALL_UNITEX",
	selfDestructAs		= "SMALL_UNITEX",
	iconType			= "kbotraider",
	--scale				= "0.5", 	-- isn't needed, and why a string if the parameter is a float?
	smoothAnim			= true,

-------------------------------------------------------------------
-- Abilities and Orders
-------------------------------------------------------------------

	canAttack			= true,
	canGuard			= true,
	canLoad				= false,
	canMove				= true,
	canPatrol			= true,
	canStop				= true,

-------------------------------------------------------------------
-- Movement
-------------------------------------------------------------------

	acceleration		= .385,
	maxVelocity			= 3.3,
	movementClass		= "medium_mech",
	bmcode				= "1",
	brakeRate			= .25,
	--floater				= false,	-- not needed?
	footprintX			= 2,
	footprintZ			= 2,
	--holdsteady			= true, 	-- not needed
	maneuverleashlength	= "640",	-- why a string???
	mass				= 37.5,
	maxWaterDepth		= 22,
	steeringmode		= "2",
	turnRate			= 1200,

-------------------------------------------------------------------
-- Categories
-------------------------------------------------------------------

	category			= "LAND",
	TEDClass			= "KBOT",
	
-------------------------------------------------------------------
-- LOS
-------------------------------------------------------------------
	
	seismicSignature	= 4,
	sightDistance		= 440,
	minCloakDistance	= 75,
	
-------------------------------------------------------------------
-- Combat
-------------------------------------------------------------------

	maxDamage			= 250,
	idleAutoHeal		= 10,
	noAutoFire			= false,
	noChaseCategory		= "FIXEDWING SATELLITE SUB",
	
	defaultMissionType	= "Standby",
	idleTime			= 50,

-------------------------------------------------------------------
-- Corpse
-------------------------------------------------------------------

  featureDefs         = {

    DEAD  = {
		description      = "Wreckage - A.K.",
      blocking         = false,
      category         = "corpses",
      damage           = 500,
      energy           = 0,
      featureDead      = "DEAD2",
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      height           = "20",
      hitdensity       = "100",
      metal            = 22.5,
      object           = "CORAK_DEAD",
      reclaimable      = true,
      reclaimTime      = 90,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },


    DEAD2 = {
      description      = "Debris - A.K.",
      blocking         = false,
      category         = "heaps",
      damage           = 500,
      energy           = 0,
      featureDead      = "HEAP",
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      height           = "4",
      hitdensity       = "100",
      metal            = 22.5,
      object           = "2X2C",
      reclaimable      = true,
      reclaimTime      = 90,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },


    HEAP  = {
      description      = "Debris - A.K.",
      blocking         = false,
      category         = "heaps",
      damage           = 500,
      energy           = 0,
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      height           = "4",
      hitdensity       = "100",
      metal            = 11.25,
      object           = "2X2C",
      reclaimable      = true,
      reclaimTime      = 45,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },

  },
}

return lowerkeys({ m-bot-mkII = unitDef })

	