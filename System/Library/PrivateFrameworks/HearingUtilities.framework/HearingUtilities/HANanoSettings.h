@class NPSDomainAccessor;

@interface HANanoSettings : HUHearingAidSettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (id)_valueForPreferenceKey:(id)a0;
- (id)init;
- (BOOL)shouldUseiCloud;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)pairedWatchDidChange:(id)a0;
- (id)currentLocale;
- (void).cxx_destruct;
- (void)dealloc;
- (id)nanoDomainAccessor;

@end
