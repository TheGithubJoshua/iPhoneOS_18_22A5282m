@class NSString, CPAnalyticsEventMatcher;

@interface CPAnalyticsEventCounter : NSObject

@property (readonly, nonatomic) CPAnalyticsEventMatcher *matcher;
@property (readonly, nonatomic) NSString *countKey;
@property (nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSString *name;

+ (id)_validateAndParseEventName:(id)a0;

- (void)resetCount;
- (id)initWithEventName:(id)a0;
- (id)initWithName:(id)a0 matcher:(id)a1;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)countEvent:(id)a0;

@end
