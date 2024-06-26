@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)init;
- (id)initWithName:(id)a0 andDelegate:(id)a1;
- (void)unlockWithCondition:(long long)a0;
- (BOOL)isLockedByMe;
- (void)unlock;
- (BOOL)lockBeforeDate:(id)a0;
- (id)description;
- (BOOL)lockWhenCondition:(long long)a0 beforeDate:(id)a1;
- (void)dealloc;
- (id)initWithName:(id)a0 condition:(long long)a1 andDelegate:(id)a2;

@end
