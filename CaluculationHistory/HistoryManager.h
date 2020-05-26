#pragma once

//-------------------------------------------------------------------------
/*!
  @brief ���������Ǘ�����
*/
//-------------------------------------------------------------------------
class History;
class CalcNode;

class CALUCULATIONHISTORY_API HistoryManager
{
public:
  HistoryManager();
  ~HistoryManager();

  // ���̗��������擾����
  std::vector<std::shared_ptr<CalcNode>> Next();
  
  // �O�̗��������擾
  std::vector<std::shared_ptr<CalcNode>> Previous();
  
  // ��������ǉ�����
  void Add(const std::vector<std::shared_ptr<CalcNode>>& calcNodes);

private:
  std::stack<std::shared_ptr<History>> m_UndoStack;
  std::stack<std::shared_ptr<History>> m_RedoStack;
};