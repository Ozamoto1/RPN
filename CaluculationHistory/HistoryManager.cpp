#include "pch.h"
#include "HistoryManager.h"
#include "History.h"
#include "CalcNode.h"

//-------------------------------------------------------------------------
/*!
  @brief コンストラクタ
*/
//-------------------------------------------------------------------------
HistoryManager::HistoryManager()
{
}

//-------------------------------------------------------------------------
/*!
  @brief デストラクタ
*/
//-------------------------------------------------------------------------
HistoryManager::~HistoryManager()
{
}

//-------------------------------------------------------------------------
/*!
  @brief 次の問題を表示する
*/
//-------------------------------------------------------------------------
std::vector<std::shared_ptr<CalcNode>> HistoryManager::Next()
{
  if (m_RedoStack.empty()) {
    return std::vector<std::shared_ptr<CalcNode>>();
  }

  std::vector<std::shared_ptr<CalcNode>> vectorCalcNode = m_RedoStack.top()->GetCalcNodes();
  m_RedoStack.pop();

  return vectorCalcNode;

}

//-------------------------------------------------------------------------
/*!
  @brief 前の問題を表示する
*/
//-------------------------------------------------------------------------
std::vector<std::shared_ptr<CalcNode>> HistoryManager::Previous()
{
  if (m_UndoStack.empty()) {
    return std::vector<std::shared_ptr<CalcNode>>();
  }

  m_RedoStack.push(std::move(m_UndoStack.top())); // topではなくmoveを使う
  //m_UndoStack.pop(); moveを使うと不要な処理になる。

  return m_RedoStack.top()->GetCalcNodes();
}

//-------------------------------------------------------------------------
/*!
  @brief 問題を追加する
*/
//-------------------------------------------------------------------------
void HistoryManager::Add(std::vector<std::shared_ptr<CalcNode>> vectorCalcNode)
{
  auto history = std::make_shared<History>();
  //for (int i = 0; i < vectorCalcNode.size(); i++)
  //{
  //  void HistoryManager::Add(std::vector<CalcNode> vectorCalcNode)
  //}
  history->SetCalcNodes(vectorCalcNode);
  m_UndoStack.push(history);
}



