@class NSString;

@interface NSPTokenServerStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *tokenServerAddress;

- (id)eventName;
- (void).cxx_destruct;
- (id)analyticsDict;

@end
