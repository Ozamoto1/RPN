#pragma once

//-------------------------------------------------------------------------
/*!
  @brief 履歴情報を管理する
*/
//-------------------------------------------------------------------------
class History;
class CalcNode;

class CALUCULATIONHISTORY_API HistoryManager
{
public:
  HistoryManager();
  ~HistoryManager();

  // 次の履歴情報を取得する
  std::vector<std::shared_ptr<CalcNode>> Next();
  
  // 前の履歴情報を取得
  std::vector<std::shared_ptr<CalcNode>> Previous();
  
  // 履歴情報を追加する
  void Add(const std::vector<std::shared_ptr<CalcNode>>& calcNodes);

private:
  std::stack<std::shared_ptr<History>> m_UndoStack;
  std::stack<std::shared_ptr<History>> m_RedoStack;
};