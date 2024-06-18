@class HKSPSleepStore, NSArray;
@protocol NAScheduler;

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, weak, nonatomic) HKSPSleepStore *sleepStore;
@property (readonly, nonatomic) NSArray *timelineControllers;
@property (readonly, nonatomic) id<NAScheduler> reloadScheduler;

+ (id)_widgetReloadDescription:(unsigned long long)a0;
+ (BOOL)_shouldForceWidgetReload:(unsigned long long)a0;
+ (id)defaultTimelineControllers;
+ (id)widgetBundleIdentifierForCurrentDevice;

- (id)initWithSleepStore:(id)a0;
- (id)initWithSleepStore:(id)a0 timelineControllers:(id)a1;
- (void).cxx_destruct;
- (void)reloadWidgetsWithReason:(unsigned long long)a0;

@end
