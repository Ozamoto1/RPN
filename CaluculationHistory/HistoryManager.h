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

  // ���̖���\������
  std::vector<std::shared_ptr<CalcNode>> Next();
  // �O�̖���\������
  std::vector<std::shared_ptr<CalcNode>> Previous();
  // ����ǉ�����
  void Add(std::vector<std::shared_ptr<CalcNode>> vectorCalcNode);

private:
  std::stack<std::shared_ptr<History>> m_UndoStack;
  std::stack<std::shared_ptr<History>> m_RedoStack;
};