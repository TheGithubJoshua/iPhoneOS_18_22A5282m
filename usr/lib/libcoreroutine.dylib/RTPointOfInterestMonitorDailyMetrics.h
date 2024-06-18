@class RTDefaultsManager, NSMutableDictionary;

@interface RTPointOfInterestMonitorDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)initWithDefaultsManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldSubmit;
- (void)submit;
- (void)reset;
- (void)create;
- (void)increaseCountForKey:(id)a0;

@end
