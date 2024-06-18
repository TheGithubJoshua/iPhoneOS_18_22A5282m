@class NSString;

@interface ASEnhancedMailboxSearchResult : ASEmailItem

@property (retain, nonatomic) NSString *className;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isSearchResult;

@end
