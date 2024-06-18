@class NSArray, NSString, NSDate, NSObject;
@protocol OS_os_log;

@interface EDWidgetUpdateController : NSObject <EFLoggable, EDMessageChangeHookResponder>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSArray *timelineControllers;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (nonatomic) long long numberOfUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_writeUserDefaults;
- (void)_refreshTimelinesWithReason:(id)a0;
- (long long)_activityDelay;
- (void)_restoreFromUserDefaults;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void).cxx_destruct;
- (id)initWithWidgetBundleIdentifier:(id)a0 widgetKindIdentifiers:(id)a1 hookRegistry:(id)a2;
- (void)_scheduleActivityWithReason:(id)a0;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)dealloc;
- (void)_updateLastUpdateInformation;
- (void)_runActivity;

@end
