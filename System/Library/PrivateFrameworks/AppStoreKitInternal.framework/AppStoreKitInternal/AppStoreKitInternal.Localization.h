@class NSString;

@interface AppStoreKitInternal.Localization : NSObject <AppStoreKitInternal.LocalizationProtocol> {
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ extendedLocale;
    void /* unknown type, empty encoding */ localizedStringTables;
    void /* unknown type, empty encoding */ dateFormatters;
    void /* unknown type, empty encoding */ dynamicDateFormatters;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relativeDateFormatter;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *arcadeWordmarkAssetName;

- (id)init;
- (id)relativeDate:(id)a0;
- (id)decimal:(id)a0 :(long long)a1;
- (id)string:(id)a0;
- (id)timeAgo:(id)a0;
- (id)formatDate:(id)a0 :(id)a1;
- (void).cxx_destruct;
- (id)formattedCountForPreferredLocale:(id)a0 :(id)a1;
- (id)formatDateInSentence:(id)a0 :(id)a1 :(id)a2;
- (id)stringWithCounts:(id)a0 :(id)a1;
- (id)formattedCount:(id)a0;
- (id)stringWithCount:(id)a0 :(long long)a1;
- (id)formatDateWithContext:(id)a0 :(id)a1 :(id)a2;
- (id)stringForPreferredLocale:(id)a0 :(id)a1;
- (id)timeAgoWithContext:(id)a0 :(id)a1;
- (id)formatDuration:(long long)a0 :(id)a1;
- (id)fileSize:(id)a0;

@end
