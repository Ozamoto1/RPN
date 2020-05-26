#include "pch.h"
#include "History.h"


//-------------------------------------------------------------------------
/*!
  @brief �R���X�g���N�^
*/
//-------------------------------------------------------------------------
History::History()
{
}

History::History(const std::vector<std::shared_ptr<CalcNode>>& calcNodes):
  m_CalcNodes(calcNodes)
{
}

//-------------------------------------------------------------------------
/*!
  @brief �f�X�g���N�^
*/
//-------------------------------------------------------------------------
History::~History()
{
}

//-------------------------------------------------------------------------
/*!
  @brief ��������ݒ肷��

  @param [in] calcNodes �������
*/
//-------------------------------------------------------------------------
void History::SetCalcNodes(const std::vector<std::shared_ptr<CalcNode>>& calcNodes) 
{
  m_CalcNodes = calcNodes;
}

//-------------------------------------------------------------------------
/*!
  @brief ���������擾����

  @return �������
*/
//-------------------------------------------------------------------------
std::vector<std::shared_ptr<CalcNode>> History::GetCalcNodes() const
{
  return m_CalcNodes;
}