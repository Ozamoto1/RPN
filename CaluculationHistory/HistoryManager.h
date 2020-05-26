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

  // Ÿ‚Ì—š—ğî•ñ‚ğæ“¾‚·‚é
  std::vector<std::shared_ptr<CalcNode>> Next();
  
  // ‘O‚Ì—š—ğî•ñ‚ğæ“¾
  std::vector<std::shared_ptr<CalcNode>> Previous();
  
  // —š—ğî•ñ‚ğ’Ç‰Á‚·‚é
  void Add(const std::vector<std::shared_ptr<CalcNode>>& calcNodes);

private:
  std::stack<std::shared_ptr<History>> m_UndoStack;
  std::stack<std::shared_ptr<History>> m_RedoStack;
};