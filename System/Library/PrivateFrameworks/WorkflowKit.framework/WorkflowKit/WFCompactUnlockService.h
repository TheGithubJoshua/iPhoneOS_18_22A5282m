@class SBSLockScreenService;

@interface WFCompactUnlockService : NSObject

@property (class, readonly, nonatomic) BOOL isDeviceLocked;

@property (retain, nonatomic) SBSLockScreenService *service;

- (void).cxx_destruct;
- (void)dealloc;
- (void)requestUnlockIfNeeded:(id /* block */)a0;

@end
