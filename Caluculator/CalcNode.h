#pragma once
#include "CaluculatorDef.h"

//-------------------------------------------------------------------------
/*!
  @brief �v�Z�p�f�[�^
*/
//-------------------------------------------------------------------------

class CALUCULATOR_API CalcNode
{
enum class Operation
  {
    None = -1,          // ���Z�q�Ȃ�(���l)
    Addition,           // �����Z
    Subtraction,        // �����Z
    Multiplication,     // �|���Z
    Division,           // ����Z
  };

private:
  // ���l
  double m_Value;
  // ���Z�q
  Operation m_Operation;

public:
  CalcNode();
  ~CalcNode();
};

