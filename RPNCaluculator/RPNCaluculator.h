
// RPNCaluculator.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CRPNCaluculatorApp:
// このクラスの実装については、RPNCaluculator.cpp を参照してください
//

class CRPNCaluculatorApp : public CWinApp
{
public:
	CRPNCaluculatorApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CRPNCaluculatorApp theApp;
