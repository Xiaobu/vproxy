// VProxy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define VPROXY_VER_MAJOR 0
#define VPROXY_VER_MINOR 1
#define VPROXY_BUILD_NO  19
#define VPROXY_BUILD_DATE "Mon Dec 10 09:59:41 2012"

#ifdef _DEBUG
#define DBG printf
#else
#define DBG
#endif

#ifdef NOCONSOLE
#define SYSLOG
#else
#define SYSLOG fprintf
#endif


int _tmain(int argc, _TCHAR* argv[])
{
	printf("Video Proxy %d.%d.%d - Your P2P Video Flatform.\n", VPROXY_VER_MAJOR,VPROXY_VER_MINOR,VPROXY_BUILD_NO);

	return 0;
}

