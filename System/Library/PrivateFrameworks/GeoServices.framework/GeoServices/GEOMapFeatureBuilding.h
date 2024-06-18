@class NSArray, GEOVectorTile, GEOBuildingFootprintFeature;

@interface GEOMapFeatureBuilding : NSObject {
    GEOVectorTile *_tile;
    GEOBuildingFootprintFeature *_feature;
}

@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) unsigned long long buildingID;
@property (readonly, nonatomic) int tileSetStyle;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDaVinciTile:(id)a0 buildingOffset:(unsigned long long)a1;
- (id)initWithFeature:(id)a0;

@end
