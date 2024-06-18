@class NSArray, NSString, WBSStartPageSectionManager;

@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess> {
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;
}

@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updatePerSiteSettingsWithRecord:(id)a0 completionHandler:(id /* block */)a1;
- (id)_startPageSectionOrder;
- (id)_perSitePreferencesStore;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)a0;
- (id)startPageSectionsManager;
- (void).cxx_destruct;
- (BOOL)syncEnabled;
- (void)_updateStartPageSectionOrder:(id)a0;
- (void)didDeleteRemoteRecordWithID:(id)a0;
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)a0 record:(id)a1;
- (BOOL)_isShowBackgroundImageEnabled;
- (long long)_settingForValue:(id)a0;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (id)_deviceClass;
- (void)deleteBackgroundImageDirectory;
- (void)_updatePerSiteSettingsWithRecord:(id)a0;
- (BOOL)_isKnownPerSiteSetting:(id)a0;

@end
