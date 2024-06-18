@class NSDictionary;

@interface AXPhoenixAnalyticsEvent : NSObject

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSDictionary *eventInfo;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_jsonData;
- (id)initWithEventType:(long long)a0 eventInfo:(id)a1;

@end
