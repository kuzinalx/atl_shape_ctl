
// shape_ctl_cli.h : main header file for the shape_ctl_cli application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// Cshape_ctl_cliApp:
// See shape_ctl_cli.cpp for the implementation of this class
//

class Cshape_ctl_cliApp : public CWinApp
{
public:
	Cshape_ctl_cliApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cshape_ctl_cliApp theApp;
