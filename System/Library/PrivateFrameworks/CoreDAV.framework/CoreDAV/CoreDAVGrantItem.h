@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)init;
- (void)write:(id)a0;
- (void)addPrivilege:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
