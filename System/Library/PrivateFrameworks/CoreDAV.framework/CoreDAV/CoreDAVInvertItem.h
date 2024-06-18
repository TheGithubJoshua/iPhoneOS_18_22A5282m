@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (id)init;
- (void)write:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
