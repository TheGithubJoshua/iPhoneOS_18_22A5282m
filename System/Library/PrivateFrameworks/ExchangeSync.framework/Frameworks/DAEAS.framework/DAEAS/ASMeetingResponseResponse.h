@class NSArray, NSMutableArray;

@interface ASMeetingResponseResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mSingularResponses;
@property (readonly, nonatomic) NSArray *singularResponses;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)_addSingularResponse:(id)a0;

@end
