@class TPSLocalNotificationController, NSMutableDictionary, NSBundle, NSObject, TPSNotificationCache;
@protocol OS_dispatch_queue, TPSNotificationControllerDelegate;

@interface TPSNotificationController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) TPSNotificationCache *notificationCache;
@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap;
@property (retain, nonatomic) TPSLocalNotificationController *localNotificationController;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (nonatomic) long long notificationCount;
@property (readonly, nonatomic, getter=isNotificationSettingValid) BOOL notificationSettingValid;
@property (weak, nonatomic) id<TPSNotificationControllerDelegate> delegate;

+ (double)standardNotificationInterval;
+ (BOOL)supportsNotification;
+ (BOOL)alwaysDisplayCollectionIcon;
+ (id)cacheDirectoryCreateIfEmpty:(BOOL)a0;
+ (id)displayDarwinNotificationKey;
+ (BOOL)isValidNotificationInterval;
+ (long long)remainingCountOfNotificationsUntilOptOut;
+ (void)removeAssetCacheDirectory;
+ (void)removeNotificationCache;
+ (BOOL)respectsOptout;
+ (BOOL)supportsExtension;
+ (BOOL)supportsRemoteIcon;
+ (BOOL)supportsWelcomeNotification;

- (void)removeAllNotifications;
- (void)fetchNotificationAssetIfNeededCompletionHandler:(id /* block */)a0;
- (id)init;
- (BOOL)updateHintEligibleForTip:(id)a0 isValid:(BOOL)a1;
- (void)updateArchiveCache;
- (id)notificationDeliveryInfoForIdentifier:(id)a0 documentDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2;
- (void)clearNotificationCache;
- (BOOL)preconditionValidForIdentifier:(id)a0 documentDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overridedOptOutContentOnly:(BOOL)a3 ignoreSuppressContent:(BOOL)a4;
- (void)showNotificationWithCompletionHandler:(id /* block */)a0;
- (void)clearNotificationCount;
- (void).cxx_destruct;
- (void)removeNotificationWithIdentifier:(id)a0;
- (BOOL)canUpdateHintEligibilityForIdentifier:(id)a0;
- (BOOL)collectionEligibleForNotification:(id)a0;
- (id)documentToNotifyForCollection:(id)a0 collectionDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 overridedOptOutContentOnly:(BOOL)a3;
- (void)updateDocumentToNotifyWithPreferredIdentifiers:(id)a0 collectionOrder:(id)a1 collectionMap:(id)a2 collectionDeliveryInfoMap:(id)a3 tipMap:(id)a4 tipsDeliveryInfoMap:(id)a5 deliveryInfoMap:(id)a6 documentDictionaryMap:(id)a7 metadataDictionary:(id)a8 completionHandler:(id /* block */)a9;
- (id)cacheFilePathForFile:(id)a0;
- (void)increaseUserNotificationCount;
- (id)tipDocumentToNotifyWithIdentifier:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overridedOptOutContentOnly:(BOOL)a4;
- (BOOL)isDocumentHintDisplayedOnOtherDevices:(id)a0;
- (id)assetsConfigurationForDocument:(id)a0;
- (id)cacheAssetFileURLForDocument:(id)a0;
- (void)updateNotificationCount;
- (id)updateNotificationCacheWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2 extensionPayload:(id)a3;
- (id)documentToNotifyForTipsInCollection:(id)a0 tipMap:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3 overridedOptOutContentOnly:(BOOL)a4;
- (void)updateLastNotificationDate;
- (BOOL)isNotificationDeliveryInfoValid:(id)a0 identifier:(id)a1 overridedOptOutContentOnly:(BOOL)a2 ignoreSuppressContent:(BOOL)a3;
- (BOOL)shouldDisplayCollectionIcon;
- (id)copyFileURL:(id)a0 cachePath:(id)a1;

@end
