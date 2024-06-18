@class NSString;

@interface LDAPSearchSettings : NSObject

@property (retain, nonatomic) NSString *searchDescription;
@property (retain, nonatomic) NSString *searchBase;
@property (nonatomic) unsigned long long scope;

- (id)settingsDict;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)hasSameScopeAndBaseAsOther:(id)a0;
- (id)initWithSettingsDict:(id)a0;

@end
