@class TSUNoCopyDictionary;

@interface TSCH3DBarResourceCache : NSObject {
    TSUNoCopyDictionary *_cache;
}

+ (id)instance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)barWithExtrusionSetting:(const struct BarExtrusionSetting { float x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } x5; } *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)p_barWithExtrusionSetting:(const struct BarExtrusionSetting { float x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } x5; } *)a0;

@end
