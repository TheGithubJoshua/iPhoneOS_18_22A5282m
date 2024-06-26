@class NSArray;

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction

@property (readonly, nonatomic) long long conversationNotificationLevel;
@property (copy, nonatomic) NSArray *conversationIDs;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)signpostType;
- (id)initWithConversationIDs:(id)a0 conversationNotificationLevel:(long long)a1;

@end
