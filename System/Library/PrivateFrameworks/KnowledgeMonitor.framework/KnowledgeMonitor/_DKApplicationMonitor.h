@class NSString, BKSApplicationStateMonitor, NSMutableDictionary, NSSet, BMAppLaunchStream, NSMutableArray, BMFrontBoardDisplayLayout, FBSDisplayLayoutMonitor, BMSource, BMStream;

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver>

@property (retain, nonatomic) BMStream *layoutStream;
@property (retain, nonatomic) BMSource *layoutSource;
@property (retain, nonatomic) BMFrontBoardDisplayLayout *lastLayoutEvent;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (retain, nonatomic) NSMutableArray *previouslyForegroundServices;
@property (retain, nonatomic) BKSApplicationStateMonitor *bksMonitor;
@property (retain) NSMutableDictionary *activeExtensions;
@property (retain, nonatomic) NSSet *servicesOfInterestForWatchCommunication;
@property (retain, nonatomic) BMAppLaunchStream *appLaunchStream;
@property (retain, nonatomic) NSString *lastIdentifierSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithBundleIdentifier:(id)a0 launchReason:(id)a1 shortVersionString:(id)a2 exactBundleVersion:(id)a3;
+ (id /* block */)_eventFilterBlock;
+ (void)addServicesForeground:(id)a0 andRemoveServices:(id)a1;
+ (id)debugCategory;
+ (void)setFocalApplication:(id)a0 launchReason:(id)a1;
+ (id)_defaultEvent;

- (id)init;
- (void)platformSpecificStart;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)setCurrentActiveComplications;
- (void)stop;
- (void)start;
- (void)registerForActiveComplicationChangeNotifications;
- (void)deactivate;
- (void).cxx_destruct;
- (void)donateDisplayLayout:(id)a0 withContext:(id)a1;
- (BOOL)ignoreAppExtension:(id)a0;
- (void)obtainCurrentValue;
- (void)platformSpecificStop;
- (void)dealloc;
- (id)currentActiveComplications;
- (void)synchronouslyReflectCurrentValue;

@end
