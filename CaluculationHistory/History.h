#pragma once

//-------------------------------------------------------------------------
/*!
  @brief —š—ğî•ñ
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

  // İ’è‚·‚é
  void SetCalcNodes(std::vector<std::shared_ptr<CalcNode>> calcNodes);
  // æ“¾‚·‚é
  std::vector<std::shared_ptr<CalcNode>> GetCalcNodes();

};