@class NSString, ASResolveRecipientsCertificatesItem, ASResolveRecipientsAvailabilityItem;

@interface ASResolveRecipientsSingleRecipientItem : ASItem

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) ASResolveRecipientsCertificatesItem *certificates;
@property (retain, nonatomic) ASResolveRecipientsAvailabilityItem *availability;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;
- (id)description;

@end
