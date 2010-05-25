
-- by Chris Mackey

--pieces
local pod = piece "pod"
local lf_leaf = piece "lf_leaf"
local rf_leaf = piece "rf_leaf"
local lb_leaf = piece "lb_leaf"
local rb_leaf = piece "rb_leaf"

local neck_0 = piece "neck_0"
local neck_1 = piece "neck_1"
local neck_2 = piece "neck_2"
local neck_3 = piece "neck_3"
local neck_4 = piece "neck_4"

local body = piece "body"

local lf_thigh = piece "lf_thigh"
local rf_thigh = piece "rf_thigh"
local lb_thigh = piece "lb_thigh"
local rb_thigh = piece "rb_thigh"

local lf_shin = piece "lf_shin"
local rf_shin = piece "rf_shin"
local lb_shin = piece "lb_shin"
local rb_shin = piece "rb_shin"

--constants
local notch = 2.8
local bounce = 1.7
local sp1 = 2.8
local sp2 = 2.5
local sp3 = 2
local sp4 = 1
local sleep = 250

local deg = math.rad(-40)
local lf_angle = deg
local rf_angle = deg
local lb_angle = deg
local rb_angle = deg

local l_angle = math.rad( 40 )
local k_angle = math.rad( 25 )

--signals
local walk = 2
local aim  = 4

--functions
local function Open()
	Turn( lf_leaf, x_axis, l_angle, sp4 )
	Turn( lf_leaf, z_axis, -l_angle, sp4 )
	
	Turn( rf_leaf, x_axis, l_angle, sp4 )
	Turn( rf_leaf, z_axis, l_angle, sp4 )
	
	Turn( lb_leaf, x_axis, -l_angle, sp4 )
	Turn( lb_leaf, z_axis, -l_angle, sp4 )
	
	Turn( rb_leaf, x_axis, -l_angle, sp4 )
	Turn( rb_leaf, z_axis, l_angle, sp4 )
end
----[[
local function Close( speed )
	Turn( lf_leaf, x_axis, 0, speed )
	Turn( lf_leaf, z_axis, 0, speed )
	
	Turn( rf_leaf, x_axis, 0, speed )
	Turn( rf_leaf, z_axis, 0, speed )
	
	Turn( lb_leaf, x_axis, 0, speed )
	Turn( lb_leaf, z_axis, 0, speed )
	
	Turn( rb_leaf, x_axis, 0, speed )
	Turn( rb_leaf, z_axis, 0, speed )
end
--]]
local function Walk()
	SetSignalMask( walk )
	while ( true ) do
	
		Turn( body, y_axis, -.2, .5 )
		Move( body, y_axis, bounce, 5 )
		
		Turn( lf_thigh, y_axis, lf_angle, sp1 ) -- left front leg forward
		Turn( lb_thigh, y_axis, -lf_angle, sp2 ) -- left back leg backward
		Turn( rf_thigh, y_axis, rf_angle, sp1 ) -- right front leg forward
		Turn( rb_thigh, y_axis, -rf_angle, sp2 ) -- right back leg backward
		
		Turn( lf_shin, x_axis, -k_angle, sp3 ) -- extend
		Turn( lf_shin, z_axis, k_angle, sp3 )
		
		Turn( lb_shin, x_axis, k_angle, sp3 ) -- extend
		Turn( lb_shin, z_axis, k_angle, sp3 )
		
		Turn( rf_shin, x_axis, 0, sp3 ) -- contract
		Turn( rf_shin, z_axis, 0, sp3 )
		
		Turn( rb_shin, x_axis, 0, sp3 ) -- contract
		Turn( rb_shin, z_axis, 0, sp3 )
		
		Sleep( sleep )
		--------------------------------------------------------------------
		Move( body, y_axis, -bounce, 4 )
		
		
		Sleep( sleep )
		--------------------------------------------------------------------
		Turn( body, y_axis, .2, .5 )
		Move( body, y_axis, bounce, 5 )
		
		Turn( lf_thigh, y_axis, -lb_angle, sp2 ) -- left front leg backward
		Turn( lb_thigh, y_axis, lb_angle, sp1 ) -- left front leg forward
		Turn( rf_thigh, y_axis, -rb_angle, sp2 ) -- right front leg backward
		Turn( rb_thigh, y_axis, rb_angle, sp1 ) -- right back leg forward
		
		Turn( lf_shin, x_axis, 0, sp3 ) -- contract
		Turn( lf_shin, z_axis, 0, sp3 )
		
		Turn( lb_shin, x_axis, 0, sp3 ) -- contract
		Turn( lb_shin, z_axis, 0, sp3 )
		
		Turn( rf_shin, x_axis, -k_angle, sp3 ) -- extend
		Turn( rf_shin, z_axis, -k_angle, sp3 )
		
		Turn( rb_shin, x_axis, k_angle, sp3 ) -- extend
		Turn( rb_shin, z_axis, -k_angle, sp3 )
		
		Sleep( sleep )
		--------------------------------------------------------------------
		Move( body, y_axis, -bounce, 4 )
		
		
		Sleep( sleep )
		--------------------------------------------------------------------
	end
end

local function Extend( speed )
	Move( neck_1, y_axis, 0, speed )
	Move( neck_2, y_axis, 0, speed )
	Move( neck_3, y_axis, 0, speed )
	Move( neck_4, y_axis, 0, speed )
	
	Turn( neck_0, x_axis, .6, 1 )
	Turn( neck_1, x_axis, .6, 1 )
	Turn( neck_2, x_axis, .6, 1 )
	Turn( neck_3, x_axis, -.5, 1 )
	Turn( neck_4, x_axis, 0, 1 )
end

local function Contract( speed )
	Move( neck_1, y_axis, -notch, speed )
	Move( neck_2, y_axis, -notch, speed )
	Move( neck_3, y_axis, -notch, speed )
	Move( neck_4, y_axis, -notch, speed )
	
	Turn( neck_0, x_axis, 0, 1 )
	Turn( neck_1, x_axis, 0, 1 )
	Turn( neck_2, x_axis, 0, 1 )
	Turn( neck_3, x_axis, 0, 1 )
	Turn( neck_4, x_axis, 0, 1 )
end

function script.Activate()
	StartThread( Open )
	StartThread( Extend, 5 )
end

function script.Deactivate()
	StartThread( Close, 1 )
	StartThread( Contract, 5 )
end

function script.Create()
	Move( neck_1, y_axis, -notch, 10 )
	Move( neck_2, y_axis, -notch, 10 )
	Move( neck_3, y_axis, -notch, 10 )
	Move( neck_4, y_axis, -notch, 10 )
end

function script.StartMoving()
	StartThread( Walk )
end

function script.StopMoving()
	Signal( walk )
	
	Move( body, y_axis, 0, 15 )
	Turn( body, y_axis, 0, 1 )
	
	Turn( lf_thigh, y_axis, 0, 1 )
	Turn( rf_thigh, y_axis, 0, 1 )
	Turn( lb_thigh, y_axis, 0, 1 )
	Turn( rb_thigh, y_axis, 0, 1 )
		
	Turn( lf_shin, x_axis, 0, 1 )
	Turn( lf_shin, z_axis, 0, 1 )
	Turn( rf_shin, x_axis, 0, 1 )
	Turn( rf_shin, z_axis, 0, 1 )
	Turn( lb_shin, x_axis, 0, 1 )
	Turn( lb_shin, z_axis, 0, 1 )
	Turn( rb_shin, x_axis, 0, 1 )
	Turn( rb_shin, z_axis, 0, 1 )
end

function script.Killed(recentDamage, maxHealth)
	local severity = recentDamage / maxHealth

	if (severity <= .25) then
		return 1 -- corpsetype

	elseif (severity <= .5) then
		return 2 -- corpsetype

	else		
		return 3 -- corpsetype
	end
end
