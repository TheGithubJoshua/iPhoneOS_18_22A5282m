@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (void)setDisplayNameOrder:(long long)a0;
- (long long)sortOrder;
- (id)filteredGroupAndContainerIDs;
- (id)init;
- (long long)shortNameFormat;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setShortNameFormat:(long long)a0;
- (id)countryCode;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (id)initWithFoundationUserDefaults:(id)a0;
- (void).cxx_destruct;
- (BOOL)isShortNameFormatEnabled;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (long long)newContactDisplayNameOrder;
- (long long)displayNameOrder;

@end
