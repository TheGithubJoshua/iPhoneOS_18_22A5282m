@class NSMutableDictionary, FCKeyValueStore;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject {
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id<FCTagSettingsDelegate> _delegate;
}

+ (id)commandsToMergeLocalDataToCloud:(id)a0;

- (void)setContentScaleForTagID:(id)a0 contentScale:(id)a1;
- (void)syncForTagID:(id)a0;
- (void)setFontSizeForTagID:(id)a0 fontSize:(id)a1;
- (id)webAccessOptedInTagIDs;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)a0;
- (id)allTagSettingsRecords;
- (id)accessTokenForTagID:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)initWithStore:(id)a0 tagSettingsDelegate:(id)a1;
- (id)contentScaleForTagID:(id)a0;
- (void).cxx_destruct;
- (void)setAccessTokenForTagID:(id)a0 accessToken:(id)a1 userInitiated:(BOOL)a2;
- (id)fontSizeForTagID:(id)a0;
- (id)authenticatedAccessTokensByTagID;
- (void)setWebAccessOptInForTagID:(id)a0 webAccessOptIn:(BOOL)a1;
- (void)handleSyncWithTagSettingsRecord:(id)a0;
- (id)allTagSettingsRecordNames;

@end
