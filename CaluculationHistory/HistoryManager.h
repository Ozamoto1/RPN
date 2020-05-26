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

  // 次の問題を表示する
  std::vector<std::shared_ptr<CalcNode>> Next();
  // 前の問題を表示する
  std::vector<std::shared_ptr<CalcNode>> Previous();
  // 問題を追加する
  void Add(std::vector<std::shared_ptr<CalcNode>> vectorCalcNode);

private:
  std::stack<std::shared_ptr<History>> m_UndoStack;
  std::stack<std::shared_ptr<History>> m_RedoStack;
};