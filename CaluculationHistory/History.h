#pragma once

//-------------------------------------------------------------------------
/*!
  @brief �������
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

  // �ݒ肷��
  void SetCalcNodes(std::vector<std::shared_ptr<CalcNode>> calcNodes);
  // �擾����
  std::vector<std::shared_ptr<CalcNode>> GetCalcNodes();

};