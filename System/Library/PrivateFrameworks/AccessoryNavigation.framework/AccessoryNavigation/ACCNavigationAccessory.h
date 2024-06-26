@class NSString, NSMutableDictionary, NSDictionary, ACCNavigationProvider;

@interface ACCNavigationAccessory : NSObject

@property (retain) NSMutableDictionary *componentListInternal;
@property (retain) NSMutableDictionary *objectDetectionComponentListInternal;
@property (readonly, weak, nonatomic) ACCNavigationProvider *provider;
@property (retain, nonatomic) NSString *accessoryUID;
@property (readonly) NSDictionary *componentList;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
- (id)componentListForIdList:(id)a0;
- (void)updateManeuverInfo:(id)a0 componentList:(id)a1;
- (void)updateRouteGuidanceInfo:(id)a0 componentList:(id)a1;
- (BOOL)supportsExitInfoForAnyComponent;
- (BOOL)componentIdListIsEnabled:(id)a0;
- (id)initWithAccessoryUID:(id)a0 provider:(id)a1;
- (void)iterateComponentIdList:(id)a0 block:(id /* block */)a1;
- (BOOL)objectDetectionComponentIdListIsEnabled:(id)a0;
- (id)objectDetectionComponentList;
- (id)objectDetectionComponentListForIdList:(id)a0;
- (BOOL)supportsLaneGuidanceForAnyComponent;
- (BOOL)supportsTimeZoneOffsetForAnyComponent;
- (void)updateLaneGuidanceInfo:(id)a0 componentList:(id)a1;

@end
