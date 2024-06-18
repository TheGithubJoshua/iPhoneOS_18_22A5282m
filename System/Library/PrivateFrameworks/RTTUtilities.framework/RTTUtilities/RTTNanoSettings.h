@class NPSDomainAccessor;

@interface RTTNanoSettings : RTTSettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (id)init;
- (id)valueForPreferenceKey:(id)a0 andContext:(id)a1;
- (id)currentLocale;
- (id)uuidFromContext:(id)a0;
- (void).cxx_destruct;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;

@end
