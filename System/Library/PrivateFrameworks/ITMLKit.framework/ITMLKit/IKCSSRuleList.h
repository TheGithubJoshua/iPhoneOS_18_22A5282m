@class NSMutableArray;

@interface IKCSSRuleList : NSObject {
    NSMutableArray *rules;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addRule:(id)a0;
- (unsigned long long)count;
- (id)firstRule;
- (id)lastRule;
- (id)ruleAtIndex:(unsigned long long)a0;

@end
