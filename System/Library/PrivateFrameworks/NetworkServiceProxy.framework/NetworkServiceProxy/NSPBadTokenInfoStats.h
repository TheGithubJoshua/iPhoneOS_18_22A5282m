@class NSString;

@interface NSPBadTokenInfoStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *tokenProxy;
@property (nonatomic) unsigned long long configAgeHours;
@property (retain, nonatomic) NSString *configTag;

- (id)eventName;
- (void).cxx_destruct;
- (id)analyticsDict;

@end
