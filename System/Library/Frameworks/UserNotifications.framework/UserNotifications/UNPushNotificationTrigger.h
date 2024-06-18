@interface UNPushNotificationTrigger : UNNotificationTrigger

@property (readonly, nonatomic) BOOL isContentAvailable;
@property (readonly, nonatomic) BOOL isMutableContent;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(BOOL)a0 mutableContent:(BOOL)a1;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)_initWithContentAvailable:(BOOL)a0 mutableContent:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end