#SingleInstance ignore

Sleep 2000
SetTitleMatchMode, 1
Run C:\scriptor\scriptor.exe

Loop, %A_WorkingDir%\*.bos
{
	WinActivate, Scriptor
	Sleep, 100
	Send, {ALTDOWN}fo{ALTUP}
	Sleep, 200
	Send, %A_LoopFileName%
	Sleep, 350
	Send, {ALTDOWN}o{ALTUP}
	Sleep, 100
	Send, {CTRLDOWN}{F7}{CTRLUP}
	Sleep, 250
}
Send, {ALTUP}
Send, {ALTDOWN}fx{ALTUP}
Send, {ALTUP}