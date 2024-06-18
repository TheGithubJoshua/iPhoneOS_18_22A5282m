@class PHFetchResult, NSString, NSDate, PXUbiquitousKeyValueStoreValueAccessor, PHPhotoLibrary;

@interface PXForYouBadgeManager : PXObservable <PXMutableForYouBadgeManager, PXPhotoLibraryUIChangeObserver>

@property (class, readonly, nonatomic) PXUbiquitousKeyValueStoreValueAccessor *lastSeenBadgeDateAccessor;
@property (class, retain, nonatomic) NSDate *lastSeenBadgeDate;

@property (retain, nonatomic) PHFetchResult *memories;
@property (nonatomic) unsigned long long unreadSharedAlbumCount;
@property (nonatomic) unsigned long long unreadMemoriesCount;
@property (readonly, nonatomic) unsigned long long unreadBadgeCount;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhotoLibrary:(id)a0;
- (void)_updateUnreadSharedAlbumsCount;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)_updateUnreadBadgeCount;
- (void)_didFinishPostingNotifications:(id)a0;
- (void).cxx_destruct;
- (void)startListeningForChanges;
- (void)_stopListeningForChanges;
- (void)dealloc;
- (void)setUnreadBadgeCount:(unsigned long long)a0;

@end
