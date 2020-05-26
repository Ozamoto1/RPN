#pragma once
#include "CaluculatorDef.h"

//-------------------------------------------------------------------------
/*!
  @brief 計算用データ
*/
//-------------------------------------------------------------------------

class CALUCULATOR_API CalcNode
{
enum class Operation
  {
    None = -1,          // 演算子なし(数値)
    Addition,           // 足し算
    Subtraction,        // 引き算
    Multiplication,     // 掛け算
    Division,           // 割り算
  };

private:
  // 数値
  double m_Value;
  // 演算子
  Operation m_Operation;

public:
  CalcNode();
  ~CalcNode();
};

