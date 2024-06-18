@class HMHomeManager;

@interface __HMHomeDataSyncOperation : HMFOperation

@property (readonly, weak) HMHomeManager *manager;
@property (getter=isRefresh) BOOL refresh;

- (void)main;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 timeout:(double)a1;

@end
