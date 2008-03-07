#include <QApplication>
#include "colormapbox.h" 
#include "datasourcewidget.h"
#include "configfileparser.h"

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	
	ColorMapBox* cmb = new ColorMapBox();

	QWidget* w = new QWidget();
	QHBoxLayout* z = new QHBoxLayout;
	DataSourceWidget* ds = new DataSourceWidget();
	z->addWidget(ds); z->addWidget(cmb);
	QPushButton* save_button = new QPushButton("Save");
	QObject::connect(save_button, SIGNAL(clicked()), cmb->colorMap(), SLOT(save()));
	//save_button->show();
	ConfigFileParser* cfp = new ConfigFileParser;
	cfp->readFile("test_res.xml");
	cfp->parseResolutions(ds->resolutionMapWidget());
	cfp->parseColorMap(cmb->colorMap());
	w->setLayout(z);
	w->show();
	return app.exec();
}