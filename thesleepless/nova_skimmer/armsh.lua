unitDef = {
  unitname            = [[armsh]],
  name                = [[Skimmer]],
  description         = [[Fast Attack Hovercraft]],
  acceleration        = 0.132,
  bmcode              = [[1]],
  brakeRate           = 0.112,
  buildCostEnergy     = 220,
  buildCostMetal      = 220,
  builder             = false,
  buildPic            = [[ARMSH.png]],
  buildTime           = 220,
  canAttack           = true,
  canGuard            = true,
  canHover            = true,
--  canFly				= true,
  cruiseAlt				= 5,
  bankescale			= [[1]],
  canMove             = true,
  canPatrol           = true,
  canstop             = [[1]],
  category            = [[HOVER]],
  corpse              = [[DEAD]],
--  turnInPlace			= false,
--  turnInPlaceDistance	= 10,
--  turnInPlaceSpeedLimit = 1,
  --strafeToAttack		= true,
  hoverAttack			= true,

  customParams        = {
    description_fr = [[Hovercraft d'Attaque ?clair]],
    helptext_fr    = [[Le Skimmer est petit, maniable, rapide et n'a qu'une faible puissance de feu. Id?al pour les attaques surprises depuis la mer, il surprendra bien des ennemis. Son blindage est cependant trop faible pour faire face ? une quelquonque r?sistance.]],
  },

  defaultmissiontype  = [[Standby]],
 --  defaultmissiontype  = [[VTOL_Standby]],
  explodeAs           = [[SMALL_UNITEX]],
  footprintX          = 3,
  footprintZ          = 3,
  iconType            = [[hoverraider]],
  idleAutoHeal        = 5,
  idleTime            = 2000,
  maneuverleashlength = [[640]],
  mass                = 450,
  maxDamage           = 500,
  maxSlope            = 36,
  maxVelocity         = 5.0,
  minCloakDistance    = 75,
  movementClass       = [[HOVER3]],
  noAutoFire          = false,
  noChaseCategory     = [[TERRAFORM FIXEDWING SATELLITE SUB]],
  -- objectName          = [[ARMSH]],
  objectName          = [[nova_skimmer.s3o]],
  seismicSignature    = 0,
  selfDestructAs      = [[SMALL_UNITEX]],
  upright			  = false,

  sfxtypes            = {

    explosiongenerators = {
      [[custom:NOVA_HOVER_THRUSTER]],
      [[custom:NOVA_HOVER_PROPULSOR]],
      [[custom:NOVA_EMG_MUZZLE]],
    },

  },

  side                = [[ARM]],
  sightDistance       = 582,
  smoothAnim          = true,
  -- slideTolerance		= 1.5,

  steeringmode        = [[1]],
  --TEDClass            = [[TANK]],
  TEDClass            = [[VTOL]],
  turnRate            = 700,
  workerTime          = 0,
  crushStrength			= 30,

  weapons             = {

    {
      def                = [[EMG]],
      badTargetCategory  = [[FIXEDWING]],
      onlyTargetCategory = [[FIXEDWING LAND SINK SHIP SWIM FLOAT GUNSHIP HOVER]],
	  maxAngleDif		 = 35,
	  mainDir			 = [[0 0 1]],
    },

  },

  -- flanking
  flankingBonusMode		= 3,
  flankingBonusDir		= [[0 0 1]],
  flankingBonusMax		= 1,
  flankingBonusMin		= 0.5,

  weaponDefs          = {

    EMG = {
      name                    = [[Plasma Cannon]],
      areaOfEffect            = 32,
      burst                   = 2,
      burstrate               = 0.2,
      craterBoost             = 1,
      craterMult              = 2,

      damage                  = {
        default = 10,
        planes  = 10,
        subs    = 0.3,
      },

	  accuracy					= 500,
      endsmoke                = [[0]],
      explosionGenerator      = [[custom:EMG_HIT]],
      fireStarter             = 150,
      impactOnly              = true,
      impulseBoost            = 0,
      impulseFactor           = 0.4,
      intensity               = 0.7,
      interceptedByShieldType = 1,
      lineOfSight             = true,
      noSelfDamage            = true,
      range                   = 420,
	  pitchTolerance		  = 12000,
      reloadtime              = 0.5,
      renderType              = 0,
      rgbColor                = [[0 1.00 1.00]],
      size                    = 10.75,
      soundStart              = [[flashemg]],
      sprayAngle              = 100,
      startsmoke              = [[0]],
      tolerance               = 12000,
      turret                  = true,
      weaponTimer             = 0.1,
      weaponType              = [[EmgCannon]],
      weaponVelocity          = 500,
    },

  },


  featureDefs         = {

    DEAD  = {
      description      = [[Wreckage - Skimmer]],
      blocking         = false,
      category         = [[corpses]],
      damage           = 520,
      energy           = 0,
      featureDead      = [[DEAD2]],
      footprintX       = 3,
      footprintZ       = 3,
      height           = [[20]],
      hitdensity       = [[100]],
      metal            = 66,
      object           = [[ARMSH_DEAD]],
      reclaimable      = true,
      reclaimTime      = 66,
      seqnamereclamate = [[TREE1RECLAMATE]],
      world            = [[All Worlds]],
    },


    DEAD2 = {
      description      = [[Debris - Skimmer]],
      blocking         = false,
      category         = [[heaps]],
      damage           = 520,
      energy           = 0,
      featureDead      = [[HEAP]],
      footprintX       = 3,
      footprintZ       = 3,
      height           = [[4]],
      hitdensity       = [[100]],
      metal            = 66,
      object           = [[3X3D]],
      reclaimable      = true,
      reclaimTime      = 66,
      seqnamereclamate = [[TREE1RECLAMATE]],
      world            = [[All Worlds]],
    },


    HEAP  = {
      description      = [[Debris - Skimmer]],
      blocking         = false,
      category         = [[heaps]],
      damage           = 520,
      energy           = 0,
      footprintX       = 3,
      footprintZ       = 3,
      height           = [[4]],
      hitdensity       = [[100]],
      metal            = 33,
      object           = [[3X3D]],
      reclaimable      = true,
      reclaimTime      = 33,
      seqnamereclamate = [[TREE1RECLAMATE]],
      world            = [[All Worlds]],
    },

  },

}

return lowerkeys({ armsh = unitDef })
