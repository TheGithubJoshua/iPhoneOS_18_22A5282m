@class NSArray, NSMutableArray;

@interface AXSSDocumentTextRulesetManager : NSObject

@property (retain, nonatomic) NSMutableArray *_rulesets;
@property (readonly, copy, nonatomic) NSArray *rulesets;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)_loadCustomRulesets;
- (void)loadRulesets;

@end
