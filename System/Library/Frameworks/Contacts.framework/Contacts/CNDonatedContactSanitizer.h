@interface CNDonatedContactSanitizer : NSObject

+ (id)sanitizeDonatedContact:(id)a0 matchingPredicate:(id)a1;
+ (id)mutableCopyOfDonatedContact:(id)a0 withCustomIdentifier:(id)a1;
+ (id)storeInfoByMergingStoreInfos:(id)a0;
+ (id)storeInfoFromPredicate:(id)a0;
+ (void)markContactAndMultiValuesAsDonated:(id)a0 usingStoreInfo:(id)a1 andStoreIdentifier:(id)a2;

@end
