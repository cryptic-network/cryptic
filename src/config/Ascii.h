// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n"
"MMMMMMMMMMMMMMNmhso++////////++oyhmNMMMMMMMMMMMMMM\n"
"MMMMMMMMMMNhs+//oshddmNNNNNNmddyso//+shNMMMMMMMMMM\n"
"MMMMMMMNho/+shmMMMMMMMMMMMMMMMMMMMMmhs+/ohNMMMMMMM\n"
"MMMMMms//sdMMMMMMMMMMMMMMMMMMMMMMMMMMMMds//omMMMMM\n"
"MMMmo/+yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy+/omMMM\n"
"MNy//yNMNh+NMMMMMMMMMmyymNyymMMMMMMMMMN+hNMNy+/sNM\n"
"m+/oNMMd+/yMMMMMMMMd+///hN///+dMMMMMMMMy/+dMMNs/+m\n"
"+/sMMNo///NMMMMMMMd/////hN/////dMMMMMMMN///oNMMy/+\n"
"+yMMd+////NMMMMMMMh/////hN//////////////////+mMMh/\n"
"mMMm//////NMMMMMMMd/////hN////////////////////mMMd\n"
"MMN+//////hMMMMMMMMh+///hN////////////////////+NMM\n"
"MMh///////+mMMMMMMMMNhyodN++///////////////////hMM\n"
"MMo////////+mMMMMMMMMMMMMMMMMNmhs//////////////oMM\n"
"MMo//////////yMMMMMMMMMMMMMMMMMMMNho////////////MM\n"
"MMo///////////+yNMMMMMMMMMMMMMMMMMMMh//////////+MM\n"
"MMs//////////////+ydmNNNMMMMMMMMMMMMMmo////////sMM\n"
"MMd/////////////////////hN+oyNMMMMMMMMN+///////dMM\n"
"MMMo////////////////////hN////yMMMMMMMMh//////oMMM\n"
"mMMN+///////////////////hN/////hMMMMMMMN/////+NMMd\n"
"/sMMm+/////+++++++//////hN/////sMMMMMMMN////+mMMo/\n"
"o/sNMNs///NMMMMMMMm+////hN////+mMMMMMMMm///sNMNo/+\n"
"Ns/+mMMmo/sMMMMMMMMms///hN///smMMMMMMMMs/omMMm+/oN\n"
"MMh+/smMMdoNMMMMMMMMMNdhmNhdNMMMMMMMMMNodMMms//hMM\n"
"MMMNs//smMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMms//sNMMM\n"
"MMMMMNy+/ohNMMMMMMMMMMMMMMMMMMMMMMMMMMNho/+yNMMMMM\n"
"MMMMMMMMds+/+sdNMMMMMMMMMMMMMMMMMMNds+/+sdMMMMMMMM\n"
"MMMMMMMMMMMdyo//+osyhddmmmmddhyso///oymMMMMMMMMMMM\n"
"MMMMMMMMMMMMMMMmdhyso++++++++osyhdNMMMMMMMMMMMMMMM\n";

const std::string nonWindowsAsciiArt = 
"\n"
"MMMMMMMMMMMMMMNmhso++////////++oyhmNMMMMMMMMMMMMMM\n"
"MMMMMMMMMMNhs+//oshddmNNNNNNmddyso//+shNMMMMMMMMMM\n"
"MMMMMMMNho/+shmMMMMMMMMMMMMMMMMMMMMmhs+/ohNMMMMMMM\n"
"MMMMMms//sdMMMMMMMMMMMMMMMMMMMMMMMMMMMMds//omMMMMM\n"
"MMMmo/+yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy+/omMMM\n"
"MNy//yNMNh+NMMMMMMMMMmyymNyymMMMMMMMMMN+hNMNy+/sNM\n"
"m+/oNMMd+/yMMMMMMMMd+///hN///+dMMMMMMMMy/+dMMNs/+m\n"
"+/sMMNo///NMMMMMMMd/////hN/////dMMMMMMMN///oNMMy/+\n"
"+yMMd+////NMMMMMMMh/////hN//////////////////+mMMh/\n"
"mMMm//////NMMMMMMMd/////hN////////////////////mMMd\n"
"MMN+//////hMMMMMMMMh+///hN////////////////////+NMM\n"
"MMh///////+mMMMMMMMMNhyodN++///////////////////hMM\n"
"MMo////////+mMMMMMMMMMMMMMMMMNmhs//////////////oMM\n"
"MMo//////////yMMMMMMMMMMMMMMMMMMMNho////////////MM\n"
"MMo///////////+yNMMMMMMMMMMMMMMMMMMMh//////////+MM\n"
"MMs//////////////+ydmNNNMMMMMMMMMMMMMmo////////sMM\n"
"MMd/////////////////////hN+oyNMMMMMMMMN+///////dMM\n"
"MMMo////////////////////hN////yMMMMMMMMh//////oMMM\n"
"mMMN+///////////////////hN/////hMMMMMMMN/////+NMMd\n"
"/sMMm+/////+++++++//////hN/////sMMMMMMMN////+mMMo/\n"
"o/sNMNs///NMMMMMMMm+////hN////+mMMMMMMMm///sNMNo/+\n"
"Ns/+mMMmo/sMMMMMMMMms///hN///smMMMMMMMMs/omMMm+/oN\n"
"MMh+/smMMdoNMMMMMMMMMNdhmNhdNMMMMMMMMMNodMMms//hMM\n"
"MMMNs//smMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMms//sNMMM\n"
"MMMMMNy+/ohNMMMMMMMMMMMMMMMMMMMMMMMMMMNho/+yNMMMMM\n"
"MMMMMMMMds+/+sdNMMMMMMMMMMMMMMMMMMNds+/+sdMMMMMMMM\n"
"MMMMMMMMMMMdyo//+osyhddmmmmddhyso///oymMMMMMMMMMMM\n"
"MMMMMMMMMMMMMMMmdhyso++++++++osyhdNMMMMMMMMMMMMMMM\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
