@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)init;
- (void)addPrivilege:(id)a0;
- (BOOL)hasPrivilegeWithNameSpace:(id)a0 andName:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
