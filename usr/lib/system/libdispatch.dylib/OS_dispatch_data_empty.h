@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_suspend;
- (void *)_getContext;
- (void)_setContext:(void *)a0;
- (void)_setFinalizer:(void /* function */ *)a0;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)retain;
- (void)_setTargetQueue:(id)a0;
- (void)_resume;
- (void)_activate;

@end
