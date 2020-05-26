#include "pch.h"
#include "History.h"


//-------------------------------------------------------------------------
/*!
  @brief コンストラクタ
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
  @brief デストラクタ
*/
//-------------------------------------------------------------------------
History::~History()
{
}

//-------------------------------------------------------------------------
/*!
  @brief 履歴情報を設定する

  @param [in] calcNodes 履歴情報
*/
//-------------------------------------------------------------------------
void History::SetCalcNodes(const std::vector<std::shared_ptr<CalcNode>>& calcNodes) 
{
  m_CalcNodes = calcNodes;
}

//-------------------------------------------------------------------------
/*!
  @brief 履歴情報を取得する

  @return 履歴情報
*/
//-------------------------------------------------------------------------
std::vector<std::shared_ptr<CalcNode>> History::GetCalcNodes() const
{
  return m_CalcNodes;
}