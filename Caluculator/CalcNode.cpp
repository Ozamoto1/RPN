#include "pch.h"
#include "CalcNode.h"


//-------------------------------------------------------------------------
/*!
  @brief コンストラクタ
*/
//-------------------------------------------------------------------------
CalcNode::CalcNode() :
  m_Value(0), m_Operation(CalcNode::Operation::None), m_IsOperation(false)
{
}

CalcNode::CalcNode(double value, CalcNode::Operation operation) :
  m_Value(value), m_Operation(operation), m_IsOperation(false)
{
}

//-------------------------------------------------------------------------
/*!
  @brief デストラクタ
*/
//-------------------------------------------------------------------------
CalcNode::~CalcNode()
{
}

//-------------------------------------------------------------------------
/*!
  @brief 数値を取得

  @return 数値
*/
//-------------------------------------------------------------------------
double CalcNode::GetValue() const
{
  return m_Value;
}

//-------------------------------------------------------------------------
/*!
  @brief 演算子を取得

  @return 演算子
*/
//-------------------------------------------------------------------------
CalcNode::Operation CalcNode::GetOperation() const
{
  return m_Operation;
}

//-------------------------------------------------------------------------
/*!
  @brief 演算子かどうかを取得

  @return 演算子かどうか
*/
//-------------------------------------------------------------------------
bool CalcNode::GetIsOperation() const
{
  return m_IsOperation;
}

//-------------------------------------------------------------------------
/*!
  @brief 数値を設定

  @param [in] value 数値
*/
//-------------------------------------------------------------------------
void CalcNode::SetValue(double value)
{
  m_Value = value;
  m_IsOperation = false;
}

//-------------------------------------------------------------------------
/*!
  @brief 演算子を設定

  @param [in] operatin 演算子
*/
//-------------------------------------------------------------------------
void CalcNode::SetOperation(Operation operation)
{
  m_Operation = operation;
  m_IsOperation = true;
}