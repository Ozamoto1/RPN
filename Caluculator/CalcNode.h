#pragma once
#include "CaluculatorDef.h"

//-------------------------------------------------------------------------
/*!
  @brief �v�Z�p�f�[�^
*/
//-------------------------------------------------------------------------

class CALUCULATOR_API CalcNode
{
public:

  enum class Operation
  {
    None = -1,          // ���Z�q�Ȃ�(���l)
    Addition,           // �����Z
    Subtraction,        // �����Z
    Multiplication,     // �|���Z
    Division,           // ����Z
  };

  CalcNode();
  CalcNode(double value, Operation operation);
  ~CalcNode();

  // ���l���擾
  double GetValue() const;

  // ���Z�q���擾
  Operation GetOperation() const;

  // ���Z�q���ǂ����擾
  bool GetIsOperation() const;

  // ���l��ݒ�
  void SetValue(double value);

  // ���Z�q��ݒ�
  void SetOperation(Operation operation);

private:
  // ���l
  double m_Value;
  // ���Z�q
  Operation m_Operation;
  // ���Z�q���ǂ���
  bool m_IsOperation;
};

