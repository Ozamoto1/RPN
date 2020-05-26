#pragma once

//-------------------------------------------------------------------------
/*!
  @brief —š—ğî•ñ
*/
//-------------------------------------------------------------------------

class CalcNode;

class History
{

public:
  History();
  History(const std::vector<std::shared_ptr<CalcNode>>& calcNodes);
  ~History();

  // —š—ğî•ñ‚ğİ’è‚·‚é
  void SetCalcNodes(const std::vector<std::shared_ptr<CalcNode>>& calcNodes);
  // —š—ğî•ñ‚ğæ“¾‚·‚é
  std::vector<std::shared_ptr<CalcNode>> GetCalcNodes() const;

private:
  std::vector<std::shared_ptr<CalcNode>> m_CalcNodes;

};