@class NSString, FBSApplicationDataStore, NSDate;
@protocol NSCopying;

@interface SBBookmark : SBHBookmark <UISApplicationStateServiceDataSource> {
    unsigned char _hasBadgeValue : 3;
}

@property (readonly, nonatomic) FBSApplicationDataStore *dataStore;
@property (copy, nonatomic) id<NSCopying> badgeValue;
@property (nonatomic) BOOL usesBackgroundNetwork;
@property (retain, nonatomic) NSDate *nextWakeDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (BOOL)isTimedOutForIcon:(id)a0;
- (void).cxx_destruct;
- (void)_noteIconDataSourceDidChange;
- (id)badgeNumberOrStringForIcon:(id)a0;
- (id)initWithWebClip:(id)a0;

@end
