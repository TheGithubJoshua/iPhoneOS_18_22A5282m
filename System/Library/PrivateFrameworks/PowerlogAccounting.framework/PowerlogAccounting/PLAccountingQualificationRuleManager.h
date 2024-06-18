@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingQualificationRuleManager : PLAccountingRuleManager {
    NSRegularExpression *_regex;
}

@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToQualificationRules;
@property (retain, nonatomic) NSMutableDictionary *qualificationIDToQualificationRules;

+ (id)rulesPath;
+ (id)sharedInstance;
+ (id)rulesEntryKey;

- (void)indexRule:(id)a0;
- (id)qualificationRulesForRootNodeID:(id)a0;
- (void)setRegex:(id)a0;
- (void).cxx_destruct;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (id)regex;
- (id)qualificationRulesForQualificationID:(id)a0;

@end
