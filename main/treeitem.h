#ifndef TREEITEM_H
#define TREEITEM_H

#include <QList>
#include <QVariant>

//! [0]
class TreeItem
{
public:
    TreeItem(const QList<QString> &data, TreeItem *parent = 0);
    ~TreeItem();

    void appendChild(TreeItem *child);

    TreeItem *child(int row);
    int childCount() const;
    int columnCount() const;
    QVariant data(int column) const;
    int row() const;
    TreeItem *parent();

    void addSuffix( int suffix );
private:
    QList<TreeItem*> childItems;
    QList<QVariant> itemData;
    TreeItem *parentItem;
};
//! [0]

#endif
