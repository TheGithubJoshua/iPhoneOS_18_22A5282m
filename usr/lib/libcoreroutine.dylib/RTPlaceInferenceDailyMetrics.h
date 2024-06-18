@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)initWithDefaultsManager:(id)a0;
- (id)init;
- (void)increaseCountForClientMappingIndex:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)getClientKeyForDailyMetrics:(int)a0;
- (BOOL)shouldSubmit;
- (void)submit;
- (void)reset;
- (void)create;
- (id)getClientKeyForDefaultManager:(int)a0;

@end
