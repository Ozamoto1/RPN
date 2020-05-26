#pragma once

//-------------------------------------------------------------------------
/*!
  @brief —š—ğî•ñ‚ğŠÇ—‚·‚é
*/
//-------------------------------------------------------------------------
class History;
class CalcNode;

class CALUCULATIONHISTORY_API HistoryManager
{
public:
  HistoryManager();
  ~HistoryManager();

  // Ÿ‚Ì–â‘è‚ğ•\¦‚·‚é
  std::vector<std::shared_ptr<CalcNode>> Next();
  // ‘O‚Ì–â‘è‚ğ•\¦‚·‚é
  std::vector<std::shared_ptr<CalcNode>> Previous();
  // –â‘è‚ğ’Ç‰Á‚·‚é
  void Add(std::vector<std::shared_ptr<CalcNode>> vectorCalcNode);

private:
  std::stack<std::shared_ptr<History>> m_UndoStack;
  std::stack<std::shared_ptr<History>> m_RedoStack;
};