@protocol AVTUILogger;

@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority>

@property (readonly, nonatomic) id<AVTUILogger> logger;

- (id)initWithLogger:(id)a0;
- (void).cxx_destruct;
- (void)didReceivePushNotification;
- (void)didResetSync;
- (void)exportDidCompleteSuccessfully;
- (BOOL)exportRequired;
- (void)importDidCompleteSuccessfully;
- (BOOL)importRequired;
- (void)madeLocalChanges;

@end
