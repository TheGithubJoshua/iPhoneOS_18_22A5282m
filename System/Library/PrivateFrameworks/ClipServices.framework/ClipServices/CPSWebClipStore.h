@class NSObject;
@protocol OS_dispatch_queue;

@interface CPSWebClipStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedStore;
+ (id)_readWebClipDictionaryRepresentationFromDiskWithWebClipIdentifier:(id)a0;
+ (id)_urlForWebClipWithIdentifier:(id)a0;

- (void)removeWebClipWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_removeWebClipsWithApplicationBundleIdentifier:(id)a0 errors:(id *)a1;
- (void)purgeDuplicateWebClipsWithCompletionHandler:(id /* block */)a0;
- (id)_init;
- (void)removePoweredByWebClipsLastActivatedBefore:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppClipsWithCompletionHandler:(id /* block */)a0;
- (id)_enumerateAndFilterClipsWithBlock:(id /* block */)a0;
- (void)removeWebClipsWithApplicationBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)synchronouslyGetAppClipWithIdentifier:(id)a0;
- (BOOL)_removeWebClipWithIdentifier:(id)a0 error:(id *)a1;
- (void)getWebClipsBackedbyAppClipIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)reloadSpringBoardIconForWebClipWithIdentifier:(id)a0;
- (id)_createOrUpdateExistingWebClipWithClipMetadata:(id)a0 createdNewWebClip:(BOOL *)a1 error:(id *)a2;
- (BOOL)_saveWebClip:(id)a0 error:(id *)a1;
- (void)getWebClipWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeWebClipsWithApplicationBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)a0 toParentApplicationBundleIdentifier:(id)a1 errors:(id *)a2;
- (void)fetchBookmarkWebClipsWithCompletionHandler:(id /* block */)a0;
- (void)removeAppClipIconForWebClipWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)saveWebClip:(id)a0 completionHandler:(id /* block */)a1;
- (void)createOrUpdateExistingWebClipWithMetadata:(id)a0 comletionHandler:(id /* block */)a1;
- (void)getAppClipWithIdentifier:(id)a0 receiveOnQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)_appClips;
- (void)updateWebClipTitle:(id)a0 forAppClipBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeExpiredPoweredByWebClipsWithCompletionHandler:(id /* block */)a0;
- (void)updateAppClipIcon:(id)a0 forWebClipWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAppClipWithURLHash:(id)a0 completionHandler:(id /* block */)a1;
- (id)_copyOrReplaceExistingFileAtPath:(id)a0 withNewFileAtPath:(id)a1;
- (id)_fetchInstalledAppClips;
- (void)redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)a0 toParentApplicationBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_reloadSpringBoardIconForWebClipWithIdentifier:(id)a0;
- (id)_removeFileFromPath:(id)a0;
- (id)_bookmarkWebClips;
- (id)_webClipsBackedbyAppClipIdentifier:(id)a0;

@end
