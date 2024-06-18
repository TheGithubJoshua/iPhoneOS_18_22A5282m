@class NSArray, NSNumber;

@interface ASPingItem : ASItem

@property (retain, nonatomic) NSArray *folders;
@property (retain, nonatomic) NSNumber *heartBeatInterval;
@property (retain, nonatomic) NSNumber *maxFolders;
@property (retain, nonatomic) NSNumber *status;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;
- (id)description;

@end
