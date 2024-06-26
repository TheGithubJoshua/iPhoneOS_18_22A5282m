@class BBContact, NSString, NSArray, NSURL;

@interface BBMutableCommunicationContext : BBCommunicationContext

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *associatedObjectUri;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) BBContact *sender;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL systemImage;
@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (nonatomic) unsigned long long recipientCount;
@property (nonatomic) long long capabilities;

- (void)setSender:(id)a0;
- (void)setRecipients:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setCapabilities:(long long)a0;
- (void)setImageName:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMentionsCurrentUser:(BOOL)a0;
- (void)setNotifyRecipientAnyway:(BOOL)a0;
- (void)setRecipientCount:(unsigned long long)a0;
- (void)setReplyToCurrentUser:(BOOL)a0;
- (void)setContentURL:(id)a0;
- (void)setSystemImage:(BOOL)a0;
- (void)setAssociatedObjectUri:(id)a0;

@end
