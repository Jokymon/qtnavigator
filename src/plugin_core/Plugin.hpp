#ifndef __PLUGIN__PLUGIN__HPP__
#define __PLUGIN__PLUGIN__HPP__

#include <QtCore/QString>
#include <QtCore/QObject>

namespace plugin {

class Renderer;

class Plugin
{
public:
	virtual ~Plugin();

	virtual QString name() const = 0;
	virtual void setup() = 0;
	virtual void cleanup() = 0;

	virtual void terminate();

	void register_renderer(const Renderer*);
};

void test_dump();

}

Q_DECLARE_INTERFACE(plugin::Plugin, "qtnavigator.PluginInterface/1.0")

#endif
