#ifndef _CITEMINFO_
#define _CITEMINFO_

#include "CMacro.h"

struct CItemInfo: public CMacro
{
	WORD m_wIndex;
	BYTE m_byClass;
	BYTE m_bySubClass;
	BYTE m_byLevel;
	bool m_bWear;
	BYTE m_byReqClass;
	BYTE m_byReqLevel;
	int m_nRange;
	int m_nBuy;
	int m_nSell;
	BYTE m_byEndurance;
	bool m_bPlural;
	bool m_bUse;
	int m_nCooltime;

	CItemInfo():
		m_wIndex(0),
		m_byClass(0),
		m_bySubClass(0),
	 	m_byLevel(0),
	 	m_bWear(0),
		m_byReqClass(0),
		m_byReqLevel(0),
		m_nRange(0),
		m_nBuy(0),
		m_nSell(0),
		m_byEndurance(0),
		m_bPlural(false),
		m_bUse(false),
		m_nCooltime(0)
	{}
};

#endif