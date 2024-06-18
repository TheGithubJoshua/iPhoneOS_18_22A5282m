@class CRRecentContact;

@interface CNRecentComposeRecipient : CNComposeRecipient {
    CRRecentContact *_recent;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isGroup;
- (id)placeholderName;
- (id)recentContact;
- (id)initWithRecentContact:(id)a0;
- (id)preferredSendingAddress;

@end
