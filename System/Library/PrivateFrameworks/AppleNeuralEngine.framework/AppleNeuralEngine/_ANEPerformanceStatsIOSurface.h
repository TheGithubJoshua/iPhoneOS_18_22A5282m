@class _ANEIOSurfaceObject;

@interface _ANEPerformanceStatsIOSurface : NSObject

@property (readonly, nonatomic) long long statType;
@property (readonly, nonatomic) _ANEIOSurfaceObject *stats;

+ (id)new;
+ (id)objectWithIOSurface:(id)a0 statType:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIOSurface:(id)a0 statType:(long long)a1;

@end
