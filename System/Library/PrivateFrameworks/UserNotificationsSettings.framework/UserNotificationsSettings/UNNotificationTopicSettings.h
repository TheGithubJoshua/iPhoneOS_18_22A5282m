@class UNNotificationSettings, UNNotificationTopic;

@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) UNNotificationTopic *topic;
@property (readonly, copy, nonatomic) UNNotificationSettings *topicSettings;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTopic:(id)a0 settings:(id)a1;

@end
