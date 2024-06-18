@protocol WLDataMigrationDelegate;

@interface WLMigrationKitController : WLDaemonConnection

@property (weak, nonatomic) id<WLDataMigrationDelegate> delegate;

- (void)run:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)daemonDidGetInterrupted;

@end
