@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (id)init;
- (BOOL)hasPropertyError;
- (void).cxx_destruct;
- (void)addPropStat:(id)a0;
- (id)description;

@end
