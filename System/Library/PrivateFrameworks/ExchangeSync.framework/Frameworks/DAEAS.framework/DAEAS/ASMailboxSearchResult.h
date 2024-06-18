@class NSArray, NSMutableArray;

@interface ASMailboxSearchResult : ASEmailItem

@property (retain, nonatomic) NSMutableArray *mClasses;
@property (readonly, nonatomic) NSArray *classes;

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
- (void)addClass:(id)a0;

@end
