#include "widget.h"
#include "AudioFFmpeg.h"
#include "VedioFFmpeg.h"
#include "av_decoder.h"
#include "av_player.h"
#include <QApplication>
#include <thread>
#include "opengl_widget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();

}
