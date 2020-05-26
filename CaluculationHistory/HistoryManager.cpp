#include "pch.h"
#include "HistoryManager.h"
#include "History.h"
#include "CalcNode.h"

//-------------------------------------------------------------------------
/*!
  @brief �R���X�g���N�^
*/
//-------------------------------------------------------------------------
HistoryManager::HistoryManager()
{
}

//-------------------------------------------------------------------------
/*!
  @brief �f�X�g���N�^
*/
//-------------------------------------------------------------------------
HistoryManager::~HistoryManager()
{
}

//-------------------------------------------------------------------------
/*!
  @brief ���̖���\������
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
  @brief �O�̗��������擾������
*/
//-------------------------------------------------------------------------
std::vector<std::shared_ptr<CalcNode>> HistoryManager::Previous()
{
  if (m_UndoStack.empty()) {
    return std::vector<std::shared_ptr<CalcNode>>();
  }

  m_RedoStack.push(std::move(m_UndoStack.top())); // top�ł͂Ȃ�move���g��
  m_UndoStack.pop(); //move���g���ƕs�v�ȏ����ɂȂ�B

  return m_RedoStack.top()->GetCalcNodes();
}

//-------------------------------------------------------------------------
/*!
  @brief ��������ǉ�����
*/
//-------------------------------------------------------------------------
void HistoryManager::Add(const std::vector<std::shared_ptr<CalcNode>>& calcNodes)
{
  auto history = std::make_shared<History>(calcNodes);
  m_UndoStack.push(history);
}



