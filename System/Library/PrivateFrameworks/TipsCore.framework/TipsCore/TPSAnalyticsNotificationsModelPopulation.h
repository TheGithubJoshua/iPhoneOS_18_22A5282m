@interface TPSAnalyticsNotificationsModelPopulation : TPSAnalyticsEvent

@property (readonly, nonatomic) BOOL notificationsModel;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithNotificationsModel:(BOOL)a0;

- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)encodeWithCoder:(id)a0;
- (id)mutableAnalyticsEventRepresentation;
- (id)_initWithNotificationsModel:(BOOL)a0;

@end
