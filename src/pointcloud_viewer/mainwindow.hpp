#ifndef POINTCLOUDVIEWER_MAINWINDOW_HPP_
#define POINTCLOUDVIEWER_MAINWINDOW_HPP_

#include <QMainWindow>
#include <QListView>

#include <pointcloud_viewer/viewport.hpp>
#include <pointcloud_viewer/pointcloud_layers.hpp>
#include <pointcloud_viewer/flythrough/flythrough.hpp>

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
  PointCloudLayers pointCloudLayer;

  MainWindow();
  ~MainWindow();

private:
  Viewport viewport;
  Flythrough flythrough;

  QListView* keypointList;

  void initMenuBar();
  void initDocks();

  void initKeypointListDocks();

  void importPointcloudLayer();
  void openAboutDialog();

  void insertKeypoint();
  void jumpToKeypoint(const QModelIndex& modelIndex);

  void offline_render();
};


#endif // POINTCLOUDVIEWER_MAINWINDOW_HPP_
