#pragma once

#include "value.h"

class CCore
{
private:
    CCore();
    ~CCore();

private:
static CCore* m_plnst;

public:
    static CCore* GetInst()
    {
        if (!m_plnst)
            m_plnst = new CCore;
            return m_plnst;
        
    }