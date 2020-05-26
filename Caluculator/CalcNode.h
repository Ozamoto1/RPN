#pragma once
#include "CaluculatorDef.h"

//-------------------------------------------------------------------------
/*!
  @brief 計算用データ
*/
//-------------------------------------------------------------------------

class CALUCULATOR_API CalcNode
{
public:

  enum class Operation
  {
    None = -1,          // 演算子なし(数値)
    Addition,           // 足し算
    Subtraction,        // 引き算
    Multiplication,     // 掛け算
    Division,           // 割り算
  };

  CalcNode();
  CalcNode(double value, Operation operation);
  ~CalcNode();

  // 数値を取得
  double GetValue() const;

  // 演算子を取得
  Operation GetOperation() const;

  // 演算子かどうか取得
  bool GetIsOperation() const;

  // 数値を設定
  void SetValue(double value);

  // 演算子を設定
  void SetOperation(Operation operation);

private:
  // 数値
  double m_Value;
  // 演算子
  Operation m_Operation;
  // 演算子かどうか
  bool m_IsOperation;
};

