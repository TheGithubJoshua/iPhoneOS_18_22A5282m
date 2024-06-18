@interface TSCH3DSharegroupPoolSharegroupToken : TSCH3DSharegroupToken <NSCopying>

+ (id)token;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tokenSharegroup;
- (void)deleteTokenSharegroup;
- (void)didRemoveAllInterests;
- (void)flushTokenSharegroup;
- (BOOL)isOneShot;
- (void)releaseSharegroup:(id)a0;
- (BOOL)shouldGarbageCollect;

@end
