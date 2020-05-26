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
  @brief 前の履歴情報を取得示する
*/
//-------------------------------------------------------------------------
std::vector<std::shared_ptr<CalcNode>> HistoryManager::Previous()
{
  if (m_UndoStack.empty()) {
    return std::vector<std::shared_ptr<CalcNode>>();
  }

  m_RedoStack.push(std::move(m_UndoStack.top())); // topではなくmoveを使う
  m_UndoStack.pop(); //moveを使うと不要な処理になる。

  return m_RedoStack.top()->GetCalcNodes();
}

//-------------------------------------------------------------------------
/*!
  @brief 履歴情報を追加する
*/
//-------------------------------------------------------------------------
void HistoryManager::Add(const std::vector<std::shared_ptr<CalcNode>>& calcNodes)
{
  auto history = std::make_shared<History>(calcNodes);
  m_UndoStack.push(history);
}



