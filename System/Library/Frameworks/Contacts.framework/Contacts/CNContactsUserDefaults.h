@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, copy, nonatomic) NSString *countryCode;

+ (id)sharedDefaults;
+ (void)flushSharedInstance;

- (id)filteredGroupAndContainerIDs;
- (id)init;
- (void)setLastIgnoredNewDuplicatesCount:(long long)a0;
- (id)changeNotificationName;
- (long long)lastIgnoredNewDuplicatesCount;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (long long)newContactDisplayNameOrder;

@end
