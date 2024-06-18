@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (BOOL)autoreleasePoolExists;
+ (void)showPools;
+ (unsigned long long)poolCountHighWaterResolution;
+ (unsigned long long)poolCountHighWaterMark;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (unsigned long long)topAutoreleasePoolCount;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)releaseAllPools;
+ (void)addObject:(id)a0;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (void)resetTotalAutoreleasedObjects;
+ (void)enableRelease:(BOOL)a0;
+ (unsigned long long)totalAutoreleasedObjects;

- (id)init;
- (void)drain;
- (oneway void)release;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)autorelease;
- (unsigned long long)retainCount;
- (void)addObject:(id)a0;
- (id)retain;
- (void)dealloc;

@end
