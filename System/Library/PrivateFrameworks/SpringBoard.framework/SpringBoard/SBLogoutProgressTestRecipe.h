@class NSArray, NSDictionary, SBLogoutProgressTransientOverlayViewController, NSString, NSMutableArray;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe> {
    NSMutableArray *_tasks;
}

@property (retain, nonatomic) SBLogoutProgressTransientOverlayViewController *logoutProgressTransientOverlayViewController;
@property (copy, nonatomic) NSArray *remainingApplications;
@property (retain, nonatomic) NSDictionary *remainingBlockingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)a0;
- (void)handleVolumeIncrease;
- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)a0;
- (id)title;
- (id)_defaultBlockingTasks;
- (id)_defaultPendingApplications;

@end
