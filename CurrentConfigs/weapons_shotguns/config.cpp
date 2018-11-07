////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:53:58 2018 : 'file' last modified on Wed Aug 22 22:07:25 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_shotguns\config.bin{
class CfgPatches
{
	class DZ_Weapons_Shotguns
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class cfgRecoils
{
	pistolBase[] = {0,0,0,0.08,0.003,0.02,0.05,-0.003,-0.033,0.05,0,0};
	subMachineGunBase[] = {0,0,0,0.06,0.005,0.005,0.05,0,-0.02,0.06,-0.005,0.005,0.05,0,0};
	assaultRifleBase[] = {0,0,0,0.06,0.01,0.01,0.1,0,-0.02,0.1,-0.01,0.01,0.05,0,0};
	machinegunBase[] = {0,0,0,0.08,0.01,0.04,0.05,-0.003,-0.01,0.2,0,0};
	launcherBase[] = {0,0,0,0.01,0,0.05,0.025,0,0};
	AK74Recoil[] = {0,0,0,0.06,0.01,0.012,0.1,0,-0.02,0.1,-0.01,0.01,0.05,0,0};
	M249Recoil[] = {0,0,0,0.07,0.002,0.01,0.035,-0.002,-0.02,0.05,0,0};
	M249RecoilProne[] = {0,0,0,0.1,0.003,0.004,0.05,-0.003,-0.008,0.05,0,0};
	M4Recoil[] = {0,0,0,2.06,2.01,2.01,2.1,0,-2.018,2.1,-2.01,2.01,2.05,0,0};
	PKMRecoil[] = {0,0,0,0.1,0.03,0.04,0.05,-0.03,-0.08,0.05,0,0};
	PKMRecoilProne[] = {0,0,0,0.1,0.003,0.005,0.05,-0.003,-0.01,0.05,0,0};
	recoil_single_primary_1outof10[] = {0.04,"0.006*(  (1/7))","0.05*.5*(  (1/7))",0.01,"0.009*(  (1/7))",0,0.045,0,"-0.025*.5*(  (1/7))"};
	recoil_single_primary_2outof10[] = {0.04,"0.006*(  (2/7))","0.05*.5*(  (2/7))",0.01,"0.009*(  (2/7))",0,0.045,0,"-0.025*.5*(  (2/7))"};
	recoil_single_primary_3outof10[] = {0.04,"0.006*(  (3/7))","0.05*.5*(  (3/7))",0.01,"0.009*(  (3/7))",0,0.045,0,"-0.025*.5*(  (3/7))"};
	recoil_single_primary_4outof10[] = {0.04,"0.006*(  (4/7))","0.05*.5*(  (4/7))",0.01,"0.009*(  (4/7))",0,0.045,0,"-0.025*.5*(  (4/7))"};
	recoil_single_primary_5outof10[] = {0.04,"0.006*(  (5/7))","0.05*.5*(  (5/7))",0.01,"0.009*(  (5/7))",0,0.045,0,"-0.025*.5*(  (5/7))"};
	recoil_single_primary_6outof10[] = {0.04,"0.006*(  (6/7))","0.05*.5*(  (6/7))",0.01,"0.009*(  (6/7))",0,0.045,0,"-0.025*.5*(  (6/7))"};
	recoil_single_primary_7outof10[] = {0.04,"0.006*(  (7/7))","0.05*.5*(  (7/7))",0.01,"0.009*(  (7/7))",0,0.045,0,"-0.025*.5*(  (7/7))"};
	recoil_single_primary_8outof10[] = {0.04,"0.006*(  (8/7))","0.05*.5*(  (8/7))",0.01,"0.009*(  (8/7))",0,0.045,0,"-0.025*.5*(  (8/7))"};
	recoil_single_primary_9outof10[] = {0.04,"0.006*(  (9/7))","0.05*.5*(  (9/7))",0.01,"0.009*(  (9/7))",0,0.045,0,"-0.025*.5*(  (9/7))"};
	recoil_single_primary_10outof10[] = {0.04,"0.006*( (10/7))","0.05*.5*( (10/7))",0.01,"0.009*( (10/7))",0,0.045,0,"-0.025*.5*( (10/7))"};
	recoil_single_primary_prone_1outof10[] = {0.035,"0.004*(  (1/7))","0.035*.5*(  (1/7))",0.01,"0.006*(  (1/7))",0,0.045,0,"-0.025*.25*(  (1/7))",0.01,0,"-0.025*.25*(  (1/7))"};
	recoil_single_primary_prone_2outof10[] = {0.035,"0.004*(  (2/7))","0.035*.5*(  (2/7))",0.01,"0.006*(  (2/7))",0,0.045,0,"-0.025*.25*(  (2/7))",0.01,0,"-0.025*.25*(  (2/7))"};
	recoil_single_primary_prone_3outof10[] = {0.035,"0.004*(  (3/7))","0.035*.5*(  (3/7))",0.01,"0.006*(  (3/7))",0,0.045,0,"-0.025*.25*(  (3/7))",0.01,0,"-0.025*.25*(  (3/7))"};
	recoil_single_primary_prone_4outof10[] = {0.035,"0.004*(  (4/7))","0.035*.5*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.045,0,"-0.025*.25*(  (4/7))",0.01,0,"-0.025*.25*(  (4/7))"};
	recoil_single_primary_prone_5outof10[] = {0.035,"0.004*(  (5/7))","0.035*.5*(  (5/7))",0.01,"0.006*(  (5/7))",0,0.045,0,"-0.025*.25*(  (5/7))",0.01,0,"-0.025*.25*(  (5/7))"};
	recoil_single_primary_prone_6outof10[] = {0.035,"0.004*(  (6/7))","0.035*.5*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.045,0,"-0.025*.25*(  (6/7))",0.01,0,"-0.025*.25*(  (6/7))"};
	recoil_single_primary_prone_7outof10[] = {0.035,"0.004*(  (7/7))","0.035*.5*(  (7/7))",0.01,"0.006*(  (7/7))",0,0.045,0,"-0.025*.25*(  (7/7))",0.01,0,"-0.025*.25*(  (7/7))"};
	recoil_single_primary_prone_8outof10[] = {0.035,"0.004*(  (8/7))","0.035*.5*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.045,0,"-0.025*.25*(  (8/7))",0.01,0,"-0.025*.25*(  (8/7))"};
	recoil_single_primary_prone_9outof10[] = {0.035,"0.004*(  (9/7))","0.035*.5*(  (9/7))",0.01,"0.006*(  (9/7))",0,0.045,0,"-0.025*.25*(  (9/7))",0.01,0,"-0.025*.25*(  (9/7))"};
	recoil_single_primary_prone_10outof10[] = {0.035,"0.004*( (10/7))","0.035*.5*( (10/7))",0.01,"0.006*( (10/7))",0,0.045,0,"-0.025*.25*( (10/7))",0.01,0,"-0.025*.25*( (10/7))"};
	recoil_auto_primary_1outof10[] = {0,"0.006*(  (1/7))","0.035*.5*(  (1/7))",0.04,"0.009*(  (1/7))","0.015*(  (1/7))",0.025,0,"0.0125*(  (1/7))"};
	recoil_auto_primary_2outof10[] = {0,"0.006*(  (2/7))","0.035*.5*(  (2/7))",0.04,"0.009*(  (2/7))","0.015*(  (2/7))",0.025,0,"0.0125*(  (2/7))"};
	recoil_auto_primary_3outof10[] = {0,"0.006*(  (3/7))","0.035*.5*(  (3/7))",0.04,"0.009*(  (3/7))","0.015*(  (3/7))",0.025,0,"0.0125*(  (3/7))"};
	recoil_auto_primary_4outof10[] = {0,"0.006*(  (4/7))","0.035*.5*(  (4/7))",0.04,"0.009*(  (4/7))","0.015*(  (4/7))",0.025,0,"0.0125*(  (4/7))"};
	recoil_auto_primary_5outof10[] = {0,"0.006*(  (5/7))","0.035*.5*(  (5/7))",0.04,"0.009*(  (5/7))","0.015*(  (5/7))",0.025,0,"0.0125*(  (5/7))"};
	recoil_auto_primary_6outof10[] = {0,"0.006*(  (6/7))","0.035*.5*(  (6/7))",0.04,"0.009*(  (6/7))","0.015*(  (6/7))",0.025,0,"0.0125*(  (6/7))"};
	recoil_auto_primary_7outof10[] = {0,"0.006*(  (7/7))","0.035*.5*(  (7/7))",0.04,"0.009*(  (7/7))","0.015*(  (7/7))",0.025,0,"0.0125*(  (7/7))"};
	recoil_auto_primary_8outof10[] = {0,"0.006*(  (8/7))","0.035*.5*(  (8/7))",0.04,"0.009*(  (8/7))","0.015*(  (8/7))",0.025,0,"0.0125*(  (8/7))"};
	recoil_auto_primary_9outof10[] = {0,"0.006*(  (9/7))","0.035*.5*(  (9/7))",0.04,"0.009*(  (9/7))","0.015*(  (9/7))",0.025,0,"0.0125*(  (9/7))"};
	recoil_auto_primary_10outof10[] = {0,"0.006*( (10/7))","0.035*.5*( (10/7))",0.04,"0.009*( (10/7))","0.015*( (10/7))",0.025,0,"0.0125*( (10/7))"};
	recoil_auto_primary_prone_1outof10[] = {0,"0.004*(  (1/7))","0.035*.25*(  (1/7))",0.035,"0.006*(  (1/7))","0.035*(  (1/7))",0.01,"0.006*(  (1/7))",0,0.012,0,"-0.0125*(  (1/7))",0.01,0,"-0.0025*(  (1/7))"};
	recoil_auto_primary_prone_2outof10[] = {0,"0.004*(  (2/7))","0.035*.25*(  (2/7))",0.035,"0.006*(  (2/7))","0.035*(  (2/7))",0.01,"0.006*(  (2/7))",0,0.012,0,"-0.0125*(  (2/7))",0.01,0,"-0.0025*(  (2/7))"};
	recoil_auto_primary_prone_3outof10[] = {0,"0.004*(  (3/7))","0.035*.25*(  (3/7))",0.035,"0.006*(  (3/7))","0.035*(  (3/7))",0.01,"0.006*(  (3/7))",0,0.012,0,"-0.0125*(  (3/7))",0.01,0,"-0.0025*(  (3/7))"};
	recoil_auto_primary_prone_4outof10[] = {0,"0.004*(  (4/7))","0.035*.25*(  (4/7))",0.035,"0.006*(  (4/7))","0.035*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.012,0,"-0.0125*(  (4/7))",0.01,0,"-0.0025*(  (4/7))"};
	recoil_auto_primary_prone_5outof10[] = {0,"0.004*(  (5/7))","0.035*.25*(  (5/7))",0.035,"0.006*(  (5/7))","0.035*(  (5/7))",0.01,"0.006*(  (5/7))",0,0.012,0,"-0.0125*(  (5/7))",0.01,0,"-0.0025*(  (5/7))"};
	recoil_auto_primary_prone_6outof10[] = {0,"0.004*(  (6/7))","0.035*.25*(  (6/7))",0.035,"0.006*(  (6/7))","0.035*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.012,0,"-0.0125*(  (6/7))",0.01,0,"-0.0025*(  (6/7))"};
	recoil_auto_primary_prone_7outof10[] = {0,"0.004*(  (7/7))","0.035*.25*(  (7/7))",0.035,"0.006*(  (7/7))","0.035*(  (7/7))",0.01,"0.006*(  (7/7))",0,0.012,0,"-0.0125*(  (7/7))",0.01,0,"-0.0025*(  (7/7))"};
	recoil_auto_primary_prone_8outof10[] = {0,"0.004*(  (8/7))","0.035*.25*(  (8/7))",0.035,"0.006*(  (8/7))","0.035*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.012,0,"-0.0125*(  (8/7))",0.01,0,"-0.0025*(  (8/7))"};
	recoil_auto_primary_prone_9outof10[] = {0,"0.004*(  (9/7))","0.035*.25*(  (9/7))",0.035,"0.006*(  (9/7))","0.035*(  (9/7))",0.01,"0.006*(  (9/7))",0,0.012,0,"-0.0125*(  (9/7))",0.01,0,"-0.0025*(  (9/7))"};
	recoil_auto_primary_prone_10outof10[] = {0,"0.004*( (10/7))","0.035*.25*( (10/7))",0.035,"0.006*( (10/7))","0.035*( (10/7))",0.01,"0.006*( (10/7))",0,0.012,0,"-0.0125*( (10/7))",0.01,0,"-0.0025*( (10/7))"};
	recoil_auto_machinegun_1outof10[] = {0,"0.006*.5*(  (1/7))","0.0005*2*(  (1/7))",0.03,"0.009*.5*(  (1/7))","0.001*2*(  (1/7))",0.04,0,"0.01*2*(  (1/7))"};
	recoil_auto_machinegun_2outof10[] = {0,"0.006*.5*(  (2/7))","0.0005*2*(  (2/7))",0.03,"0.009*.5*(  (2/7))","0.001*2*(  (2/7))",0.04,0,"0.01*2*(  (2/7))"};
	recoil_auto_machinegun_3outof10[] = {0,"0.006*.5*(  (3/7))","0.0005*2*(  (3/7))",0.03,"0.009*.5*(  (3/7))","0.001*2*(  (3/7))",0.04,0,"0.01*2*(  (3/7))"};
	recoil_auto_machinegun_4outof10[] = {0,"0.006*.5*(  (4/7))","0.0005*2*(  (4/7))",0.03,"0.009*.5*(  (4/7))","0.001*2*(  (4/7))",0.04,0,"0.01*2*(  (4/7))"};
	recoil_auto_machinegun_5outof10[] = {0,"0.006*.5*(  (5/7))","0.0005*2*(  (5/7))",0.03,"0.009*.5*(  (5/7))","0.001*2*(  (5/7))",0.04,0,"0.01*2*(  (5/7))"};
	recoil_auto_machinegun_6outof10[] = {0,"0.006*.5*(  (6/7))","0.0005*2*(  (6/7))",0.03,"0.009*.5*(  (6/7))","0.001*2*(  (6/7))",0.04,0,"0.01*2*(  (6/7))"};
	recoil_auto_machinegun_7outof10[] = {0,"0.006*.5*(  (7/7))","0.0005*2*(  (7/7))",0.03,"0.009*.5*(  (7/7))","0.001*2*(  (7/7))",0.04,0,"0.01*2*(  (7/7))"};
	recoil_auto_machinegun_8outof10[] = {0,"0.006*.5*(  (8/7))","0.0005*2*(  (8/7))",0.03,"0.009*.5*(  (8/7))","0.001*2*(  (8/7))",0.04,0,"0.01*2*(  (8/7))"};
	recoil_auto_machinegun_9outof10[] = {0,"0.006*.5*(  (9/7))","0.0005*2*(  (9/7))",0.03,"0.009*.5*(  (9/7))","0.001*2*(  (9/7))",0.04,0,"0.01*2*(  (9/7))"};
	recoil_auto_machinegun_10outof10[] = {0,"0.006*.5*( (10/7))","0.0005*2*( (10/7))",0.03,"0.009*.5*( (10/7))","0.001*2*( (10/7))",0.04,0,"0.01*2*( (10/7))"};
	recoil_auto_machinegun_prone_1outof10[] = {0,"0.004*.5*(  (1/7))","0.0035*.25*(  (1/7))",0.03,"0.006*.5*(  (1/7))","0.007*(  (1/7))",0.01,"0.006*.5*(  (1/7))",0,0.084,0,"-0.0025*(  (1/7))",0.084,0,"-0.0025*(  (1/7))"};
	recoil_auto_machinegun_prone_2outof10[] = {0,"0.004*.5*(  (2/7))","0.0035*.25*(  (2/7))",0.03,"0.006*.5*(  (2/7))","0.007*(  (2/7))",0.01,"0.006*.5*(  (2/7))",0,0.084,0,"-0.0025*(  (2/7))",0.084,0,"-0.0025*(  (2/7))"};
	recoil_auto_machinegun_prone_3outof10[] = {0,"0.004*.5*(  (3/7))","0.0035*.25*(  (3/7))",0.03,"0.006*.5*(  (3/7))","0.007*(  (3/7))",0.01,"0.006*.5*(  (3/7))",0,0.084,0,"-0.0025*(  (3/7))",0.084,0,"-0.0025*(  (3/7))"};
	recoil_auto_machinegun_prone_4outof10[] = {0,"0.004*.5*(  (4/7))","0.0035*.25*(  (4/7))",0.03,"0.006*.5*(  (4/7))","0.007*(  (4/7))",0.01,"0.006*.5*(  (4/7))",0,0.084,0,"-0.0025*(  (4/7))",0.084,0,"-0.0025*(  (4/7))"};
	recoil_auto_machinegun_prone_5outof10[] = {0,"0.004*.5*(  (5/7))","0.0035*.25*(  (5/7))",0.03,"0.006*.5*(  (5/7))","0.007*(  (5/7))",0.01,"0.006*.5*(  (5/7))",0,0.084,0,"-0.0025*(  (5/7))",0.084,0,"-0.0025*(  (5/7))"};
	recoil_auto_machinegun_prone_6outof10[] = {0,"0.004*.5*(  (6/7))","0.0035*.25*(  (6/7))",0.03,"0.006*.5*(  (6/7))","0.007*(  (6/7))",0.01,"0.006*.5*(  (6/7))",0,0.084,0,"-0.0025*(  (6/7))",0.084,0,"-0.0025*(  (6/7))"};
	recoil_auto_machinegun_prone_7outof10[] = {0,"0.004*.5*(  (7/7))","0.0035*.25*(  (7/7))",0.03,"0.006*.5*(  (7/7))","0.007*(  (7/7))",0.01,"0.006*.5*(  (7/7))",0,0.084,0,"-0.0025*(  (7/7))",0.084,0,"-0.0025*(  (7/7))"};
	recoil_auto_machinegun_prone_8outof10[] = {0,"0.004*.5*(  (8/7))","0.0035*.25*(  (8/7))",0.03,"0.006*.5*(  (8/7))","0.007*(  (8/7))",0.01,"0.006*.5*(  (8/7))",0,0.084,0,"-0.0025*(  (8/7))",0.084,0,"-0.0025*(  (8/7))"};
	recoil_auto_machinegun_prone_9outof10[] = {0,"0.004*.5*(  (9/7))","0.0035*.25*(  (9/7))",0.03,"0.006*.5*(  (9/7))","0.007*(  (9/7))",0.01,"0.006*.5*(  (9/7))",0,0.084,0,"-0.0025*(  (9/7))",0.084,0,"-0.0025*(  (9/7))"};
	recoil_auto_machinegun_prone_10outof10[] = {0,"0.004*.5*( (10/7))","0.0035*.25*( (10/7))",0.03,"0.006*.5*( (10/7))","0.007*( (10/7))",0.01,"0.006*.5*( (10/7))",0,0.084,0,"-0.0025*( (10/7))",0.084,0,"-0.0025*( (10/7))"};
	recoil_single_pistol_1outof3[] = {0.04,"0.006*(  (3/7))","0.05*.5*(  (3/7))",0.01,"0.009*(  (3/7))",0,0.045,0,"-0.025*.5*(  (3/7))"};
	recoil_single_pistol_2outof3[] = {0.04,"0.006*(  (5/7))","0.05*.5*(  (5/7))",0.01,"0.009*(  (5/7))",0,0.045,0,"-0.025*.5*(  (5/7))"};
	recoil_single_pistol_3outof3[] = {0.04,"0.006*(  (7/7))","0.05*.5*(  (7/7))",0.01,"0.009*(  (7/7))",0,0.045,0,"-0.025*.5*(  (7/7))"};
	recoil_single_pistol_prone_1outof3[] = {0.035,"0.004*(  (4/7))","0.035*.5*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.045,0,"-0.025*.25*(  (4/7))",0.01,0,"-0.025*.25*(  (4/7))"};
	recoil_single_pistol_prone_2outof3[] = {0.035,"0.004*(  (6/7))","0.035*.5*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.045,0,"-0.025*.25*(  (6/7))",0.01,0,"-0.025*.25*(  (6/7))"};
	recoil_single_pistol_prone_3outof3[] = {0.035,"0.004*(  (8/7))","0.035*.5*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.045,0,"-0.025*.25*(  (8/7))",0.01,0,"-0.025*.25*(  (8/7))"};
	recoil_recoiless_weapon[] = {0.5,0,0.04};
	recoil_empty[] = {0,0,0};
};
class DefaultAction;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Safe: Mode_SemiAuto
{
	magazines[] = {};
};
class cfgWeapons
{
	class Shotgun_Base;
};
//};
