@interface _ICQHelperFunctions : NSObject

+ (id)getStringFromNumber:(id)a0;
+ (void)setUserDefaultsBool:(BOOL)a0 forKey:(id)a1;
+ (id)defaultStringValueForKey:(id)a0;
+ (id)defaultValueForKey:(id)a0;
+ (BOOL)defaultKeyExists:(id)a0;
+ (id)base64EncodeString:(id)a0;
+ (BOOL)_checkOptions:(id)a0 forKey:(id)a1;
+ (id)_remoteBackupSizeOperationQueue;
+ (id)_getOfferDescriptionFromRequestType:(long long)a0;
+ (long long)_offerRequestTypeForStub:(id)a0;
+ (BOOL)isBackupEnabledForAccount:(id)a0 accountStore:(id)a1;
+ (BOOL)_requestedDefaultOfferInOptions:(id)a0;
+ (BOOL)_requestedPremiumOfferInOptions:(id)a0;
+ (id)usedCapacityForVolume:(id)a0;
+ (BOOL)userDefaultsBoolValueForKey:(id)a0;
+ (BOOL)isPhotosLibraryIncludedInBackupForAccount:(id)a0;
+ (id)findPlaceholdersInString:(id)a0;
+ (BOOL)isServerMockingEnabled;
+ (id)parseTemplates:(id)a0;
+ (id)replaceWordsIn:(id)a0 with:(id)a1;
+ (id)stringFromTemplates:(id)a0 key:(id)a1;
+ (BOOL)isICPLEnabledForAccount:(id)a0;
+ (id)_darwinNotificationNameForRequestType:(long long)a0;
+ (id)followUpGroupIdentifierForString:(id)a0;
+ (void)getOriginalPhotosSizeWithCompletion:(id /* block */)a0;
+ (id)numberForKey:(id)a0 from:(id)a1;
+ (void)getPhotosLibrarySizeWithCompletion:(id /* block */)a0;
+ (long long)_getOfferRequestTypeFromOptions:(id)a0 bundleId:(id)a1 isBuddy:(BOOL)a2;
+ (void)remoteBackupSizeForAccount:(id)a0 timeoutInSeconds:(double)a1 completion:(id /* block */)a2;
+ (BOOL)_requestedFetchOffersInOptions:(id)a0;
+ (id)dictionaryForKey:(id)a0 from:(id)a1;

@end
