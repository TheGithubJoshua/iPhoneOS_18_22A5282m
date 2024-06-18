@protocol PSCloudSyncPopoverDelegate;

@interface PSCloudSyncController : PSListController

@property (weak, nonatomic) id<PSCloudSyncPopoverDelegate> delegate;

- (id)specifiers;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setCloudSyncEnabled:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)cloudSyncEnabled;

@end
