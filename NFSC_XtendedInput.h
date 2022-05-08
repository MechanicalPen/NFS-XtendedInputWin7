#pragma once
#define GAMEFLOWMANAGER_STATUS_ADDR 0x00A99BBC
#define UTL_ILIST_CONSTRUCTOR_ADDR 0x0060DC60
#define PLAYER_ILISTABLE_ADDR 0x00A9FF2C
#define PLAYER_GETHUD_VTABLE_OFFSET 0x20
#define FENGHUD_ISVISIBLE_VTABLE_OFFSET 0x1C

#define CFENG_INSTANCE_ADDR 0x00A97A78
#define CFENG_FINDPACKAGE_ADDR 0x005983F0
#define CFENG_ISPACKAGEINCONTROL_ADDR 0x00572350

#define GAME_HWND_ADDR 0x00AB0AD8

#define FEMOUSECURSOR_ISHIDDEN_ADDR 0x00A97B38
#define FEMOUSECURSOR_X_ADDR 0x00B1F638
#define FEMOUSECURSOR_Y_ADDR 0x00B1F63C
#define FEMOUSECURSOR_BUTTONPRESS_ADDR 0x00A986F0
#define FEMOUSECURSOR_BUTTONPRESS2_ADDR 0x00A986F1
#define FEMOUSECURSOR_BUTTONPRESS3_ADDR 0x00A986F2

#define FEMOUSECURSOR_BUTTON2PRESS_ADDR 0x00A986CC
#define FEMOUSECURSOR_BUTTON2PRESS2_ADDR 0x00A986CD
#define FEMOUSECURSOR_BUTTON2PRESS3_ADDR 0x00A986CE

#define FEMOUSECURSOR_BUTTON3PRESS_ADDR 0x00A986F8
#define FEMOUSECURSOR_BUTTON3PRESS2_ADDR 0x00A986F9
#define FEMOUSECURSOR_BUTTON3PRESS3_ADDR 0x00A986FA

#define FEMOUSEWHEEL_ADDR 0x00B1F650

#define FEMOUSECURSOR_CARORBIT_X_ADDR 0x00B1F648
#define FEMOUSECURSOR_CARORBIT_Y_ADDR 0x00B1F64C

#define SHOWCURSOR_HOOK_ADDR1 0x00711EE2
#define SHOWCURSOR_HOOK_ADDR2 0x00711EF3

#define FE_SENDKEY_ADDR 0x00711F70

#define GLOBAL_FASTMEM_ADDR 0x00A99720
#define FASTMEM_ALLOC_ADDR 0x0060BA70
#define INIT_LIST_ALLOC_SIZE 0x28

#define WNDPROC_POINTER_ADDR 0x730941

#define CARGUYSCAMERA_ADDR 0x00A9E6C8
#define FE_ANALOGZOOM_JMP_FROM 0x0084FBDA
#define FE_ANALOGZOOM_JMP_TO 0x0084FBE2

#define FENG_FINDOBJECT_ADDR 0x005A0250
// Carbon and Pro Street use a bit of a different FE logic...
#define FENG_SETOBJECTVISIBILITY_ADDR 0x00570460
#define FENG_SETLANGHASH_ADDR 0x005A0830

#define FEPACKAGE_FORALLOBJ_ADDR 0x005EC910
#define FEPACKAGE_FINDOBJBYHASH_ADDR 0x005F3760
#define FENGINE_PROCESSPADSFORPACKAGE_ADDR 0x005FD770
#define FENGINE_PROCESSPADSFORPACKAGE_CALL_ADDR 0x00600D5C
#define CFENG_SERVICE_ADDR 0x00600C90
#define CFENG_SERVICE_CALL_ADDR 0x005BB5B5
#define FE_STRING_PRINTF_ADDRESS 0x005910E0


#define CREATERESOURCEFILE_ADDR 0x006B32C0
#define RESFILE_BEGINLOADING_ADDR 0x006B5910
#define SERVICERESOURCELOADING_ADDR 0x006B68D0

#define FE_MOUSEUPDATER_CALLBACK_ADDR 0x005F7D90
#define FE_MOUSEUPDATER_CALLBACK_VT_ADDR 0x009D7538

#define FENG_HIDEPCOBJ_JMP_FROM 0x00583D70
#define FENG_HIDEPCOBJ_JMP_TO 0x00583D99
#define FENG_HIDEPCOBJ_VT_ADDR 0x009D0680
#define CFENG_RENDEROBJ_NOP_ADDR 0x005B092D
#define CFENG_RENDEROBJ_FLAG_ADDR 0x005B0929
#define CFENG_RENDEOBJ_NOP_AMOUNT 2
#define FENG_SHOWCASECAM_JMP_FROM 0x0084FAE3
#define FENG_SHOWCASECAM_JMP_TO 0x0084FB0C
#define WIN32_MOUSEHIDE_JMP_FROM 0x00730A93
#define WIN32_MOUSEHIDE_JMP_TO 0x00730AA3
#define FEMOUSE_RENDER_JMP_FROM 0x005852AB
#define FEMOUSE_RENDER_JMP_TO 0x0058547B
#define FEMOUSE_WHEEL_UPDATE_ADDR 0x007316A8
#define REGISTERCLASSHOOK_CALL_ADDR 0x00730980
#define FEMOUSE_UPDATE_CALL_ADDR 0x00731580
#define FEWORLDMAPSTATEMANAGER_TICK_VT_ADDR 0x009D2F14
#define FEWORLDMAPSTATEMANAGER_TICK_ADDR 0x005CAED0
#define WORLDMAP_UNFOCUSQUICKLIST_ADDR 0x005C3880
#define WORLDMAP_SETQUICKLISTINFOCUS_ADDR 0x005CDBF0
#define DINPUT_KILL_ADDR 0x006892EB

#define DEADZONE_FLOAT_POINTER_ADDR 0x696071
#define SMALL_FLOAT_ADDR 0x9C1760
#define FE_DEADZONE_POINTER_ADDR 0x59FF6E

#define INPUTMAPPING_CONSTRUCTOR_CALL_ADDR 0x00696A74
#define INPUTDEVICE_FACTORY_INITIALIZER_ADDR 0x9B629D

#define FENGHUD_JOYHANDLER_JMP_FROM 0x005D512D
#define FENGHUD_JOYHANDLER_JMP_TO 0x005D4F85

#define GETLOCALIZEDSTRING_ADDR 0x00578830

#define FE_SHOWCASE_FNG_NAME "FePhotoMode.fng"
#define WORLDMAPMAIN_FNG_NAMEHASH NFS_HASH("WorldMapMain.fng")
#define WORLDMAPQUICKLIST_FNG_NAMEHASH NFS_HASH("FeWorldMapQuickList.fng")
#define WORLDMAPWORLDVIEW_FNG_NAMEHASH NFS_HASH("Fe_WorldMap_World_View.fng")
#define WORLDMAP_INSTANCE_ADDR 0xA977F0
#define WORLDMAP_BUTTONGROUP_CONSOLE 0x17B1F254
#define WORLDMAP_BUTTONGROUP_PC 0xA2601D59

#define SELECTCAR_SETHROTATESPEED_ADDR 0x00488F70
#define SELECTCAR_SETVROTATESPEED_ADDR 0x00488F40
#define SELECTCAR_SETZOOMSPEED_ADDR 0x00488FA0
#define FEGARAGEMAIN_ZOOMCAMERAVIEW_ADDR 0x0083EEF0
#define SELECTCAROBJ_OFFSET 0x28

#define PRESS_START_HOOK_ADDR 0x008577B6

#define FEPHOTOMODE_HANDLESCREENTICK_HOOK_ADDR 0x0057BB69
#define FEPHOTOMODE_HANDLELTRIGGER_HOOK_ADDR 0x009D306C
#define FEPHOTOMODE_HANDLERTRIGGER_HOOK_ADDR 0x009D308C

// REBINDABLE ACTIONS -- these will change textures based on bindings
// all FE action definitions will be changeable
// CROSS
#define FE_ACCEPT_TEX_HASH NFS_HASH("CROSS")
// TRIANGLE
#define FE_CANCEL_TEX_HASH NFS_HASH("TRIANGLE")
// SQUARE
#define FE_BUTTON4_TEX_HASH NFS_HASH("SQUARE")
// CIRCLE
#define FE_BUTTON5_TEX_HASH NFS_HASH("CIRCLE")
// L1
#define FE_LTRIGGER_TEX_HASH NFS_HASH("L1")
// R1
#define FE_RTRIGGER_TEX_HASH NFS_HASH("R1")
// SELECT
#define FE_SELECT_TEX_HASH NFS_HASH("SELECT")
// START
#define FE_START_TEX_HASH NFS_HASH("START")
// R2 -- used as LB in Carbon...
#define FE_BUTTON0_TEX_HASH NFS_HASH("R2")
// L2
#define FE_BUTTON1_TEX_HASH NFS_HASH("L2")
// R3
#define FE_BUTTON2_TEX_HASH NFS_HASH("R3")
// L3
#define FE_BUTTON3_TEX_HASH NFS_HASH("L3")
// all actions below here will only be changeable UNLESS stated otherwise
// RIGHT_ANALOG -- will only read FRONTENDACTION_RUP for its binding
#define FE_RANALOG_TEX_HASH NFS_HASH("RIGHT_ANALOG")
// RIGHT_ANALOG_UP -- will read GAMEACTION_SHIFTUP (but since it's based on PS2 this MIGHT have to be GAMEACTION_GAS)
#define FE_RANALOG_UP_TEX_HASH NFS_HASH("RIGHT_ANALOG_UP")
// RIGHT_ANALOG_UP_SWEDISH
#define FE_RANALOG_UP_SWEDISH_TEX_HASH NFS_HASH("RIGHT_ANALOG_UP_SWEDISH")
// RIGHT_ANALOG_UP_FRENCH
#define FE_RANALOG_UP_FRENCH_TEX_HASH NFS_HASH("RIGHT_ANALOG_UP_FRENCH")
// RIGHT_ANALOG_DOWN -- will read GAMEACTION_SHIFTDOWN (but since it's based on PS2 this MIGHT have to be GAMEACTION_BRAKE)
#define FE_RANALOG_DOWN_TEX_HASH NFS_HASH("RIGHT_ANALOG_DOWN")
// RIGHT_ANALOG_DOWN_SWEDISH
#define FE_RANALOG_DOWN_SWEDISH_TEX_HASH NFS_HASH("RIGHT_ANALOG_DOWN_SWEDISH")
// RIGHT_ANALOG_DOWN_FRENCH
#define FE_RANALOG_DOWN_FRENCH_TEX_HASH NFS_HASH("RIGHT_ANALOG_DOWN_FRENCH")
// LEFT_ANALOG
#define FE_LANALOG_TEX_HASH NFS_HASH("LEFT_ANALOG")
// LEFT_ANALOG_UP
#define FE_LANALOG_UP_TEX_HASH NFS_HASH("LEFT_ANALOG_UP")
// LEFT_ANALOG_UP_SWEDISH
#define FE_LANALOG_UP_SWEDISH_TEX_HASH NFS_HASH("LEFT_ANALOG_UP_SWEDISH")
// LEFT_ANALOG_UP_FRENCH
#define FE_LANALOG_UP_FRENCH_TEX_HASH NFS_HASH("LEFT_ANALOG_UP_FRENCH")
// LEFT_ANALOG_DOWN
#define FE_LANALOG_DOWN_TEX_HASH NFS_HASH("LEFT_ANALOG_DOWN")
// LEFT_ANALOG_DOWN_SWEDISH
#define FE_LANALOG_DOWN_SWEDISH_TEX_HASH NFS_HASH("LEFT_ANALOG_DOWN_SWEDISH")
// LEFT_ANALOG_DOWN_FRENCH
#define FE_LANALOG_DOWN_FRENCH_TEX_HASH NFS_HASH("LEFT_ANALOG_DOWN_FRENCH")
// DPAD -- will only read FRONTENDACTION_UP
#define FE_DPAD_TEX_HASH NFS_HASH("DPAD")
// DPAD_UPDOWN -- will only read FRONTENDACTION_UP
#define FE_DPAD_UPDOWN_TEX_HASH NFS_HASH("DPAD_UPDOWN")
// DPAD_LEFTRIGHT -- will only read FRONTENDACTION_LEFT
#define FE_DPAD_LEFTRIGHT_TEX_HASH NFS_HASH("DPAD_LEFTRIGHT")
// DPAD_UP -- will read FRONTENDACTION_UP
#define FE_DPAD_UP_TEX_HASH NFS_HASH("DPAD_UP")
// DPAD_DOWN -- will read FRONTENDACTION_DOWN
#define FE_DPAD_DOWN_TEX_HASH NFS_HASH("DPAD_DOWN")
// DPAD_LEFT -- will read FRONTENDACTION_LEFT
#define FE_DPAD_LEFT_TEX_HASH NFS_HASH("DPAD_LEFT")
// DPAD_RIGHT -- will read FRONTENDACTION_RIGHT
#define FE_DPAD_RIGHT_TEX_HASH NFS_HASH("DPAD_RIGHT")

enum FEButtonTex
{
	FE_NULL_TEX,
	FE_ACCEPT_TEX,
	FE_CANCEL_TEX,
	FE_BUTTON4_TEX,
	FE_BUTTON5_TEX,
	FE_LTRIGGER_TEX,
	FE_RTRIGGER_TEX,
	FE_BUTTON0_TEX,
	FE_START_TEX,
	FE_SELECT_TEX,
	FE_BUTTON1_TEX,
	FE_BUTTON2_TEX,
	FE_BUTTON3_TEX,
	FE_RANALOG_TEX,
	FE_RANALOG_UP_TEX,
	FE_RANALOG_UP_SWEDISH_TEX,
	FE_RANALOG_UP_FRENCH_TEX,
	FE_RANALOG_DOWN_TEX,
	FE_RANALOG_DOWN_SWEDISH_TEX,
	FE_RANALOG_DOWN_FRENCH_TEX,
	FE_LANALOG_TEX,
	FE_LANALOG_UP_TEX,
	FE_LANALOG_UP_SWEDISH_TEX,
	FE_LANALOG_UP_FRENCH_TEX,
	FE_LANALOG_DOWN_TEX,
	FE_LANALOG_DOWN_SWEDISH_TEX,
	FE_LANALOG_DOWN_FRENCH_TEX,
	FE_DPAD_TEX,
	FE_DPAD_UPDOWN_TEX,
	FE_DPAD_LEFTRIGHT_TEX,
	FE_DPAD_UP_TEX,
	FE_DPAD_DOWN_TEX,
	FE_DPAD_LEFT_TEX,
	FE_DPAD_RIGHT_TEX,
	FE_TEX_HASH_COUNT
};

unsigned int FE_DefaultButtonTexHashes[FE_TEX_HASH_COUNT] =
{
	0,
	FE_ACCEPT_TEX_HASH,
	FE_CANCEL_TEX_HASH,
	FE_BUTTON4_TEX_HASH,
	FE_BUTTON5_TEX_HASH,
	FE_LTRIGGER_TEX_HASH,
	FE_RTRIGGER_TEX_HASH ,
	FE_BUTTON0_TEX_HASH ,
	FE_START_TEX_HASH ,
	FE_SELECT_TEX_HASH ,
	FE_BUTTON1_TEX_HASH ,
	FE_BUTTON2_TEX_HASH ,
	FE_BUTTON3_TEX_HASH ,
	FE_RANALOG_TEX_HASH ,
	FE_RANALOG_UP_TEX_HASH ,
	FE_RANALOG_UP_SWEDISH_TEX_HASH ,
	FE_RANALOG_UP_FRENCH_TEX_HASH ,
	FE_RANALOG_DOWN_TEX_HASH ,
	FE_RANALOG_DOWN_SWEDISH_TEX_HASH ,
	FE_RANALOG_DOWN_FRENCH_TEX_HASH ,
	FE_LANALOG_TEX_HASH ,
	FE_LANALOG_UP_TEX_HASH ,
	FE_LANALOG_UP_SWEDISH_TEX_HASH ,
	FE_LANALOG_UP_FRENCH_TEX_HASH ,
	FE_LANALOG_DOWN_TEX_HASH ,
	FE_LANALOG_DOWN_SWEDISH_TEX_HASH ,
	FE_LANALOG_DOWN_FRENCH_TEX_HASH ,
	FE_DPAD_TEX_HASH ,
	FE_DPAD_UPDOWN_TEX_HASH ,
	FE_DPAD_LEFTRIGHT_TEX_HASH ,
	FE_DPAD_UP_TEX_HASH ,
	FE_DPAD_DOWN_TEX_HASH ,
	FE_DPAD_LEFT_TEX_HASH ,
	FE_DPAD_RIGHT_TEX_HASH,
};

bool cFEng_IsPackageInControl_Fast(unsigned int pkg_name_hash);
int(*FE_String_Printf)(void* FEObject, const char* fmt, ...) = (int(*)(void*, const char*, ...))FE_STRING_PRINTF_ADDRESS;
void* (*FEngFindObject_Title)(char* pkg_name, unsigned int obj_hash) = (void* (*)(char*, unsigned int))FENG_FINDOBJECT_ADDR;

char* SplashPkgName = "DEMO_SPLASH.fng";

void SetTitleScreenText()
{
	int obj_hash = 0xC4DF3FF2;
	char* pkg_name = SplashPkgName;
	char* splash_txt = FE_SPLASH_TEXT_PC;

	if (LastControlledDevice == LASTCONTROLLED_CONTROLLER)
	{
		switch (ControllerIconMode)
		{
		case CONTROLLERICON_PS3:
			splash_txt = FE_SPLASH_TEXT_PS3;
			break;
		case CONTROLLERICON_XBOX360:
			splash_txt = FE_SPLASH_TEXT_XBOX360;
			break;
		case CONTROLLERICON_PS4:
			splash_txt = FE_SPLASH_TEXT_PS4;
			break;
		case CONTROLLERICON_XBOXONE:
		default:
			splash_txt = FE_SPLASH_TEXT_XBOX;
			break;
		}
	}
	
	FE_String_Printf(FEngFindObject_Title(pkg_name, obj_hash), splash_txt);
}

void(* InitProfileSettings)() = (void(*)())0x00679BF0;

