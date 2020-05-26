#pragma once

//-------------------------------------------------------------------------
/*!
  @brief �������
*/
//-------------------------------------------------------------------------

class CalcNode;

class History
{

public:
  History();
  History(const std::vector<std::shared_ptr<CalcNode>>& calcNodes);
  ~History();

  // ��������ݒ肷��
  void SetCalcNodes(const std::vector<std::shared_ptr<CalcNode>>& calcNodes);
  // ���������擾����
  std::vector<std::shared_ptr<CalcNode>> GetCalcNodes() const;

private:
  std::vector<std::shared_ptr<CalcNode>> m_CalcNodes;

};