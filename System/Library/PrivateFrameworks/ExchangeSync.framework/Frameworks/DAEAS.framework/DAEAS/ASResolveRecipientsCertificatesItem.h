@class NSNumber, NSMutableArray, NSArray;

@interface ASResolveRecipientsCertificatesItem : ASItem

@property (retain, nonatomic) NSMutableArray *mCertificates;
@property (retain, nonatomic) NSNumber *certCount;
@property (retain, nonatomic) NSNumber *recipientCount;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (readonly, nonatomic) NSArray *certificates;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;
- (id)description;
- (void)addCertificateString:(id)a0;

@end
