@class NSArray, NSString, GEOBuildingFootprintFeature;

@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding> {
    GEOBuildingFootprintFeature *_buildingFeature;
}

@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBuildingFeature:(id)a0;

@end
