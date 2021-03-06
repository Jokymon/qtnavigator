#ifndef __CHART__GSHHS__READER__HPP__
#define __CHART__GSHHS__READER__HPP__

#include <string>
#include <istream>
#include <stdint.h>

namespace chart {
namespace gshhs {

class Polygon;
class Chart;

/// Reads GSHHS (binary) files.
class Reader
{
public:
	void read(std::string path, Chart& chart) const;

private:
	void read_bigendian(std::istream& is, int32_t& data) const;
	void read_bigendian(std::istream& is, uint32_t& data) const;
	void read_polygon(std::istream& is, Polygon& poly) const;
};

}}

#endif
