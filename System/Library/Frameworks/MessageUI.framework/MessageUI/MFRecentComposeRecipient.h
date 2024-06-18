@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient {
    CRRecentContact *_recent;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isGroup;
- (id)placeholderName;
- (BOOL)isRemovableFromSearchResults;
- (id)recentContact;
- (id)initWithRecentContact:(id)a0;
- (id)preferredSendingAddress;

@end
