#import "MGLShapeSource.h"
#import "MGLShapeSource_Private.h"

#include <mbgl/style/sources/geojson_source.hpp>

@interface MGLShapeSource (Private)

- (mbgl::style::GeoJSONOptions)geoJSONOptions;

@end
