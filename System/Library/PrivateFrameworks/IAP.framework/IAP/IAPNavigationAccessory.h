@class NSSet;

@interface IAPNavigationAccessory : NSObject

@property BOOL _wasFoundInLastUpdate;
@property unsigned long long identifier;
@property (retain) NSSet *components;

- (id)initWithDict:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)requestedSourceNameForAnyComponent;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end
