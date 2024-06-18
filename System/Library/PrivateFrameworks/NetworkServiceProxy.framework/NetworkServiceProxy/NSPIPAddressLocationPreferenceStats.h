@class NSString;

@interface NSPIPAddressLocationPreferenceStats : NSPProxyAnalytics

@property (nonatomic) unsigned long long locationPreference;
@property (retain, nonatomic) NSString *tierType;

- (id)eventName;
- (void).cxx_destruct;
- (id)analyticsDict;

@end
