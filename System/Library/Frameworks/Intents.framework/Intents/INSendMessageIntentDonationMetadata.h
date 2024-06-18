@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata

@property (nonatomic, getter=isBusinessChat) BOOL businessChat;
@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic) unsigned long long recipientCount;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
