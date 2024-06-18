@interface TSCH3DGLExportSharegroupToken : TSCH3DCachedSharegroupToken

+ (id)token;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)forceGL;
- (BOOL)canBeCreatedFromOtherThread;
- (BOOL)hasInterestForDiscreteGraphics;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)shouldGarbageCollect;

@end
