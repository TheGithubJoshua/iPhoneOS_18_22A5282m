@interface TSKChangeCollector : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)threadCollector;

- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (id)peekCollectedChanges;
- (void)registerChange:(int)a0 details:(id)a1 forChangeSource:(id)a2;

@end
