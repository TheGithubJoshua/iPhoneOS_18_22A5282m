@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingRuleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ruleIDToRule;
@property (retain, nonatomic) NSRegularExpression *regex;

+ (id)rulesPath;
+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)decryptData:(id)a0 withKey:(id)a1;
+ (id)firstLineWithFile:(id)a0;
+ (id)storedHashDefaults;

- (id)init;
- (void)indexRule:(id)a0;
- (void).cxx_destruct;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (void)loadRules;
- (id)ruleForRuleID:(id)a0;
- (id)rulesFromFileWithForceLoad:(BOOL)a0;

@end
