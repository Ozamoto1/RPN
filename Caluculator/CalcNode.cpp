#include "pch.h"
#include "CalcNode.h"


//-------------------------------------------------------------------------
/*!
  @brief �R���X�g���N�^
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
  @brief �f�X�g���N�^
*/
//-------------------------------------------------------------------------
CalcNode::~CalcNode()
{
}

//-------------------------------------------------------------------------
/*!
  @brief ���l���擾

  @return ���l
*/
//-------------------------------------------------------------------------
double CalcNode::GetValue() const
{
  return m_Value;
}

//-------------------------------------------------------------------------
/*!
  @brief ���Z�q���擾

  @return ���Z�q
*/
//-------------------------------------------------------------------------
CalcNode::Operation CalcNode::GetOperation() const
{
  return m_Operation;
}

//-------------------------------------------------------------------------
/*!
  @brief ���Z�q���ǂ������擾

  @return ���Z�q���ǂ���
*/
//-------------------------------------------------------------------------
bool CalcNode::GetIsOperation() const
{
  return m_IsOperation;
}

//-------------------------------------------------------------------------
/*!
  @brief ���l��ݒ�

  @param [in] value ���l
*/
//-------------------------------------------------------------------------
void CalcNode::SetValue(double value)
{
  m_Value = value;
  m_IsOperation = false;
}

//-------------------------------------------------------------------------
/*!
  @brief ���Z�q��ݒ�

  @param [in] operatin ���Z�q
*/
//-------------------------------------------------------------------------
void CalcNode::SetOperation(Operation operation)
{
  m_Operation = operation;
  m_IsOperation = true;
}