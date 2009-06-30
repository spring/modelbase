unitDef = {
  unitname            = "armstiletto_laser",
  name                = "Stiletto II",
  description         = "EMP Lightning Bomber",
  acceleration        = 0.48,
  amphibious          = true,
  attackrunlength     = "180",
  bankscale           = "1",
  bmcode              = "1",
  brakeRate           = 2.5,
  buildCostEnergy     = 577.698,
  buildCostMetal      = 577.698,
  buildPic            = "CORGRIPN.png",
  buildTime           = 577.698,
  canAttack           = true,
  canDropFlare        = false,
  canFly              = true,
  canGuard            = true,
  canMove             = true,
  canPatrol           = true,
  canstop             = "1",
  canSubmerge         = false,
  category            = "UNARMED VTOL MOBILE",
  collide             = false,
  corpse              = "HEAP",
  cruiseAlt           = 220,

  customParams        = {
    helptext = "A more exotic laser bomber variant, the Stiletto II is actually armed with a lightning generator that paralyzes units.",
  },

  defaultmissiontype  = "VTOL_standby",
  explodeAs           = "BIG_UNIT",
  fireState           = 1,
  floater             = true,
  footprintX          = 3,
  footprintZ          = 3,
  iconType            = "bomber",
  idleAutoHeal        = 5,
  idleTime            = 1800,
  immunetoparalyzer   = "1",
  maneuverleashlength = "1380",
  mass                = 288.849,
  maxangledif3        = "180",
  maxDamage           = 1130,
  maxVelocity         = 12.28,
  minCloakDistance    = 75,
  noAutoFire          = false,
  noChaseCategory     = "VTOL HOVER FLOAT SINK",
  objectName          = "armstiletto2.s3o",
  seismicSignature    = 0,
  selfDestructAs      = "ESTOR_BUILDINGEX",
  side                = "ARM",
  sightDistance       = 660,
  smoothAnim          = true,
  stealth             = true,
  steeringmode        = "1",
  TEDClass            = "VTOL",
  turnRate            = 396,
  weaponmaindir3      = "0 -1 0",
  workerTime          = 0,

  weapons             = {

    {
      def                = "BOGUS_BOMB",
      badTargetCategory  = "MOBILE",
      onlyTargetCategory = "SINK HOVER FLOAT",
    },


    {
      def               = "ARMBOMBLIGHTNING",
      badTargetCategory = "VTOL",
      mainDir           = "0 -1 0",
      maxAngleDif       = 180,
    },

  },


  weaponDefs          = {

    ARMBOMBLIGHTNING = {
      name                    = "BombLightning",
      areaOfEffect            = 32,
      avoidFeature            = false,
      avoidFriendly           = false,
      beamlaser               = 1,
      beamTime                = 0.01,
      burst                   = 0,
      collideFriendly         = false,
      coreThickness           = 0.6,
      craterBoost             = 0,
      craterMult              = 0,

      damage                  = {
        default        = 1800,
        commanders     = 180,
        empresistant75 = 450,
        empresistant99 = 18,
        planes         = 18,
      },

      edgeEffectiveness       = 0.4,
      explosionGenerator      = "custom:YELLOW_LIGHTNING_BOMB",
      fireStarter             = 90,
      impulseBoost            = 0,
      impulseFactor           = 0,
      intensity               = 12,
      interceptedByShieldType = 0,
      largeBeamLaser          = true,
      laserFlareSize          = 5,
      lineOfSight             = true,
      minIntensity            = 1,
      noSelfDamage            = true,
      paralyzer               = true,
      paralyzeTime            = 15,
      range                   = 730,
      reloadtime              = 10,
      renderType              = 0,
      rgbColor                = "1 1 0",
      sprayAngle              = 6000,
      texture1                = "lightning",
      texture2                = "flare",
      texture3                = "flare",
      texture4                = "smallflare",
      thickness               = 10,
      tileLength              = 300,
      tolerance               = 32767,
      turret                  = true,
      weaponType              = "BeamLaser",
      weaponVelocity          = 2250,
    },


    BOGUS_BOMB       = {
      name                    = "BogusBomb",
      areaOfEffect            = 80,
      burst                   = 2,
      burstrate               = 5,
      commandfire             = true,
      craterBoost             = 0,
      craterMult              = 0,

      damage                  = {
        default = 0,
      },

      dropped                 = true,
      edgeEffectiveness       = 0,
      explosionGenerator      = "custom:NONE",
      impulseBoost            = 0,
      impulseFactor           = 0,
      interceptedByShieldType = 0,
      manualBombSettings      = true,
      model                   = "bomb",
      myGravity               = 1000,
      noSelfDamage            = true,
      range                   = 10,
      reloadtime              = 10,
      renderType              = 6,
      scale                   = "0",
      weaponType              = "AircraftBomb",
    },

  },


  featureDefs         = {

    DEAD  = {
      description      = "Wreckage - Stiletto II",
      blocking         = true,
      category         = "corpses",
      damage           = 2260,
      energy           = 0,
      featureDead      = "DEAD2",
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      height           = "40",
      hitdensity       = "100",
      metal            = 346.6188,
      object           = "ARMHAM_DEAD",
      reclaimable      = true,
      reclaimTime      = 1386.4752,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },


    DEAD2 = {
      description      = "Debris - Hammer",
      blocking         = false,
      category         = "heaps",
      damage           = 2260,
      energy           = 0,
      featureDead      = "HEAP",
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      height           = "4",
      hitdensity       = "100",
      metal            = 346.6188,
      object           = "2X2E",
      reclaimable      = true,
      reclaimTime      = 1386.4752,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },


    HEAP  = {
      description      = "Debris - Stiletto II",
      blocking         = false,
      category         = "heaps",
      damage           = 2260,
      energy           = 0,
      featurereclamate = "SMUDGE01",
      footprintX       = 2,
      footprintZ       = 2,
      height           = "4",
      hitdensity       = "100",
      metal            = 173.3094,
      object           = "2X2E",
      reclaimable      = true,
      reclaimTime      = 693.2376,
      seqnamereclamate = "TREE1RECLAMATE",
      world            = "All Worlds",
    },

  },

}

return lowerkeys({ armstiletto_laser = unitDef })
