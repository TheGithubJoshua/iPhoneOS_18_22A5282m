@interface CNiOSABContactsUserDefaultsABWrapper : NSObject

- (unsigned int)ABPersonGetSortOrdering;
- (void)setLastIgnoredNewDuplicatesCount:(long long)a0;
- (void)ABPersonSetShortNameFormat:(unsigned int)a0;
- (BOOL)ABPersonGetShortNamePreferNicknames;
- (void)ABPersonSetCompositeNameFormat:(unsigned int)a0;
- (void)setDisplayedContactsFilterRepresentationPref:(id)a0;
- (id)abDefaultCountryCode;
- (long long)lastIgnoredNewDuplicatesCount;
- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)a0;
- (void)ABPersonSetShortNameFormatEnabled:(BOOL)a0;
- (unsigned int)ABPersonGetShortNameFormat;
- (BOOL)ABPersonGetShortNameFormatEnabled;
- (void)ABPersonSetShortNamePreferNicknames:(BOOL)a0;
- (unsigned int)ABPersonGetEditNameFormat;
- (id)displayedContactsFilterRepresentationPref;

@end
