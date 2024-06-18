@class CRRecentContact;

@interface CNRecentComposeRecipientGroup : CNComposeRecipientGroup

@property (readonly, retain, nonatomic) CRRecentContact *recentContact;

- (void).cxx_destruct;
- (id)label;
- (id)placeholderName;
- (id)unlocalizedLabel;
- (id)initWithChildren:(id)a0 displayString:(id)a1 recentContact:(id)a2;

@end
