
// mg-comm.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CmgcommApp:
// �йش����ʵ�֣������ mg-comm.cpp
//

class CmgcommApp : public CWinApp
{
public:
	CmgcommApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CmgcommApp theApp;