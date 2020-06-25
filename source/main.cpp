// Include the most common headers from the C standard library
#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Include the main libnx system header, for Switch development
#include <switch.h>

// Main program entrypoint
int main(int argc, char* argv[])
{
    // This example uses a text console, as a simple way to output text to the screen.
    // If you want to write a software-rendered graphics application,
    //   take a look at the graphics/simplegfx example, which uses the libnx Framebuffer API instead.
    // If on the other hand you want to write an OpenGL based application,
    //   take a look at the graphics/opengl set of examples, which uses EGL instead.
    consoleInit(NULL);
	cout << "Warning!  This is for Atmosphère versions\nwith a \"contents\" folder!\nAnd also, this software was written by\na person with ANGER ISSUES!\nI'm not responsible for any damage!\n\nPress A to continue.\n";
	
    // Main loop
    while (appletMainLoop())
    {
        // Scan all the inputs. This should be done once for each frame
        hidScanInput();

        // hidKeysDown returns information about which buttons have been
        // just pressed in this frame compared to the previous one
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if (kDown & KEY_PLUS)
            break; // break in order to return to hbmenu
if (kDown & KEY_A)
{
	srand(time(0));
	ifstream themecount("sdmc:/themecount.txt");
	string themecountstr;
	if (!themecount.is_open())
	{
		cerr << "Error!  You need to put your number of themes\nin sdmc:/themecount.txt\n";
	}
	if (themecount.is_open())
	{
		getline(themecount, themecountstr, '\n');
		int themecountint = stoi(themecountstr);
    // Other initialization goes here. As a demonstration, we print hello world.
    	string currentindex = to_string(1 + (rand() % (themecountint)));
    	cout << "deleting\nsdmc:/atmosphere/contents/0100000000001000/romfs/lyt/common.szs...\n";
    	filesystem::remove("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/common.szs");
    	cout << "deleting\nsdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Entrance.szs...\n";
    	filesystem::remove("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Entrance.szs");
    	cout << "deleting\nsdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Flaunch.szs...\n";
    	filesystem::remove("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Flaunch.szs");
    	cout << "deleting\nsdmc:/atmosphere/contents/0100000000001000/romfs/lyt/ResidentMenu.szs...\n";
    	filesystem::remove("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/ResidentMenu.szs");
    	cout << "deleting\nsdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Set.szs...\n";
    	filesystem::remove("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Set.szs");
    	cout << "deleting\nsdmc:/atmosphere/contents/0100000000001007/romfs/lyt/Psl.szs...\n";
    	filesystem::remove("sdmc:/atmosphere/contents/0100000000001007/romfs/lyt/Psl.szs");
    	cout << "deleting\nsdmc:/atmosphere/contents/0100000000001013/romfs/lyt/MyPage.szs...\n";
    	filesystem::remove("sdmc:/atmosphere/contents/0100000000001013/romfs/lyt/MyPage.szs");
    	cout << "Copying common.szs...\n";
    	ifstream commonszsin("sdmc:/themes/shuffle/" + currentindex + "/common.szs", ios::binary);
    	if (commonszsin.is_open())
    	{
    	ofstream commonszsout("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/common.szs", ios::binary);
    	commonszsout << commonszsin.rdbuf();
    	commonszsin.close();
    	commonszsout.close();
    	}
    	cout << "Copying Entrance.szs...\n";
    	ifstream Entranceszsin("sdmc:/themes/shuffle/" + currentindex + "/Entrance.szs", ios::binary);
    	if (Entranceszsin.is_open())
    	{
    	ofstream Entranceszsout("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Entrance.szs", ios::binary);
    	Entranceszsout << Entranceszsin.rdbuf();
    	Entranceszsin.close();
    	Entranceszsout.close();
    	}
    	cout << "Copying Flaunch.szs...\n";
    	ifstream Flaunchszsin("sdmc:/themes/shuffle/" + currentindex + "/Flaunch.szs", ios::binary);
    	if (Flaunchszsin.is_open())
    	{
    	ofstream Flaunchszsout("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Flaunch.szs", ios::binary);
    	Flaunchszsout << Flaunchszsin.rdbuf();
    	Flaunchszsin.close();
    	Flaunchszsout.close();
    	}
    	cout << "Copying ResidentMenu.szs...\n";
    	ifstream ResidentMenuszsin("sdmc:/themes/shuffle/" + currentindex + "/ResidentMenu.szs", ios::binary);
    	if (ResidentMenuszsin.is_open())
    	{
    	ofstream ResidentMenuszsout("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/ResidentMenu.szs", ios::binary);
    	ResidentMenuszsout << ResidentMenuszsin.rdbuf();
    	ResidentMenuszsin.close();
    	ResidentMenuszsout.close();
    	}
    	cout << "Copying Set.szs...\n";
    	ifstream Setszsin("sdmc:/themes/shuffle/" + currentindex + "/Set.szs", ios::binary);
    	if (Setszsin.is_open())
    	{
    	ofstream Setszsout("sdmc:/atmosphere/contents/0100000000001000/romfs/lyt/Set.szs", ios::binary);
    	Setszsout << Setszsin.rdbuf();
    	Setszsin.close();
    	Setszsout.close();
    	}
    	cout << "Copying Psl.szs...\n";
    	ifstream Pslszsin("sdmc:/themes/shuffle/" + currentindex + "/Psl.szs", ios::binary);
    	if (Pslszsin.is_open())
    	{
    	ofstream Pslszsout("sdmc:/atmosphere/contents/0100000000001007/romfs/lyt/Psl.szs", ios::binary);
    	Pslszsout << Pslszsin.rdbuf();
    	Pslszsin.close();
    	Pslszsout.close();
    	}
    	cout << "Copying MyPage.szs...\n";
    	ifstream MyPageszsin("sdmc:/themes/shuffle/" + currentindex + "/MyPage.szs", ios::binary);
    	if (MyPageszsin.is_open())
    	{
    	ofstream MyPageszsout("sdmc:/atmosphere/contents/0100000000001013/romfs/lyt/MyPage.szs", ios::binary);
    	MyPageszsout << MyPageszsin.rdbuf();
    	MyPageszsin.close();
    	MyPageszsout.close();
    	}
    	cout << "Done!\n";
    	consoleUpdate(NULL);
	}
	}
        // Your code goes here

        // Update the console, sending a new frame to the display
        consoleUpdate(NULL);
    }

    // Deinitialize and clean up resources used by the console (important!)
    consoleExit(NULL);
    return 0;
}
