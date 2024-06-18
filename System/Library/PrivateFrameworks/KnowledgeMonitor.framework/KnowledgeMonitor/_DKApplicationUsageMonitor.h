@class FBSDisplayLayoutMonitor, NSSet, NSDictionary, NSString, FBSDisplayMonitor;

@interface _DKApplicationUsageMonitor : _DKMonitor <FBSDisplayObserving>

@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (retain, nonatomic) NSSet *activeApplications;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *carPlayMonitor;
@property (retain, nonatomic) NSSet *activeCarPlayApplications;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *externalMonitor;
@property (retain, nonatomic) NSSet *activeExternalApplications;
@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)_eventWithBundleIdentifier:(id)a0 startDate:(id)a1 usageType:(long long)a2 usageTrusted:(BOOL)a3;
+ (BOOL)shouldMergeUnchangedEvents;

- (id)init;
- (void)platformSpecificStart;
- (void)stop;
- (void)start;
- (void)updateInUseApplications:(id)a0 activeApplications:(id)a1;
- (void)updateActiveApplicationsWithLayout:(id)a0 displayType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)invalidateInstantState;
- (void)updateAppDataInContextStore;
- (void)obtainCurrentValue;
- (void)platformSpecificStop;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)synchronouslyReflectCurrentValue;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)a0 clearAll:(BOOL)a1;

@end
