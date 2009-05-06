unitDef = {
  unitname              = "aaaspider",
  name                  = "Flame Spider",
  description           = "Assault Jumpjet Walker",
  acceleration          = 0.1,
  bmcode                = "1",
  brakeRate             = 0.25,
  buildCostEnergy       = 1000,
  buildCostMetal        = 1000,
  builder               = false,
  buildPic              = "CORPYRO.png",
  buildTime             = 220,
  canAttack             = true,
  canGuard              = true,
  canMove               = true,
  canPatrol             = true,
  canstop               = "1",
  category              = "LAND FIREPROOF",
  corpse                = "DEAD",

  customParams          = {
    canjump   = "1",
    fireproof = "1",
    helptext  = "No help for you",
  },

  defaultmissiontype    = "Standby",
  explodeAs             = "CORSKTL_DEATH",
  footprintX            = 4,
  footprintZ            = 4,
  iconType              = "kbotriot",
  idleAutoHeal          = 5,
  idleTime              = 1800,
  leaveTracks           = true,
  maneuverleashlength   = "640",
  mass                  = 1200,
  maxDamage             = 5000,
  maxSlope              = 36,
  maxVelocity           = 1.0,
  maxWaterDepth         = 55,
  minCloakDistance      = 75,
  movementClass         = "KBOT4",
  noAutoFire            = false,
  noChaseCategory       = "FIXEDWING SATELLITE GUNSHIP SUB",
  objectName            = "aaaspider.s3o",
  seismicSignature      = 8,
  selfDestructAs        = "CORSKTL_DEATH",
  selfDestructCountdown = 5,

  sfxtypes              = {

    explosiongenerators = {
      "custom:PILOT",
      "custom:PILOT2",
      "custom:RAIDMUZZLE",
      "custom:VINDIBACK",
    },

  },

  side                  = "CORE",
  sightDistance         = 600,
  smoothAnim            = true,
  steeringmode          = "1",
  TEDClass              = "KBOT",
  trackOffset           = 5,
  trackStrength         = 8,
  trackStretch          = 10,
  trackType             = "ComTrack",
  trackWidth            = 100,
  turnRate              = 500,
  upright               = true,
  workerTime            = 0,

  weapons               = {

    {
      def                = "FLAMETHROWER",
      badTargetCategory  = "FIREPROOF",
      onlyTargetCategory = "SWIM LAND SINK FLOAT SHIP HOVER",
    },

  },


  weaponDefs            = {

    FLAMETHROWER = {
      name                    = "FlameThrower",
      areaOfEffect            = 164,
      avoidFeature            = false,
      collideFeature          = false,
      craterBoost             = 0,
      craterMult              = 0,

      damage                  = {
        default       = 30,
        flamethrowers = 15,
        planes        = 30,
        subs          = 0.0015,
      },

      explosionGenerator      = "custom:SMOKE",
      fireStarter             = 100,
      flameGfxTime            = 1.6,
      impulseBoost            = 0,
      impulseFactor           = 0,
      intensity               = 0.3,
      interceptedByShieldType = 1,
      lineOfSight             = true,
      noExplode               = true,
      noSelfDamage            = true,
      range                   = 580,
      reloadtime              = 0.16,
      renderType              = 5,
      sizeGrowth              = 1.85,
      soundStart              = "Flamhvy1",
      soundTrigger            = true,
      sprayAngle              = 70000,
      tolerance               = 2500,
      turret                  = true,
      weaponType              = "Flame",
      weaponVelocity          = 180,
    },

  },


  featureDefs           = {

    DEAD  = {
      description      = "Wreckage - Pyro",
      blocking         = false,
      category         = "heaps",
      damage           = 1400,
      energy           = 0,
      featureDead      = "DEAD2",
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      height           = "4",
      hitdensity       = "100",
      metal            = 64.62,
      object           = "2X2C",
      reclaimable      = true,
      reclaimTime      = 258.48,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },


    DEAD2 = {
      description      = "Debris - Pyro Spider",
      blocking         = false,
      category         = "heaps",
      damage           = 1400,
      energy           = 0,
      featureDead      = "HEAP",
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      hitdensity       = "100",
      metal            = 64.62,
      object           = "2X2F",
      reclaimable      = true,
      reclaimTime      = 258.48,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },


    HEAP  = {
      description      = "Debris - Pyro Spider",
      blocking         = false,
      category         = "heaps",
      damage           = 1400,
      energy           = 0,
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      hitdensity       = "100",
      metal            = 32.31,
      object           = "2X2F",
      reclaimable      = true,
      reclaimTime      = 129.24,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },

  },

}

return lowerkeys({ aaaspider = unitDef })
