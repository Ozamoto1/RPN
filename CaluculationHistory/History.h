#pragma once

//-------------------------------------------------------------------------
/*!
  @brief 履歴情報
*/
//-------------------------------------------------------------------------

class CalcNode;

class History
{
private:
  std::vector<std::shared_ptr<CalcNode>> m_CalcNodes;

public:
  History();
  ~History();

  // 設定する
  void SetCalcNodes(std::vector<std::shared_ptr<CalcNode>> calcNodes);
  // 取得する
  std::vector<std::shared_ptr<CalcNode>> GetCalcNodes();

};