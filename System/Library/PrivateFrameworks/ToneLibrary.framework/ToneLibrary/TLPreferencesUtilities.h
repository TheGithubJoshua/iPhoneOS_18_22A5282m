@interface TLPreferencesUtilities : NSObject

+ (id)perWatchPreferencesDomain;
+ (void)_setValue:(void *)a0 forKey:(struct __CFString { } *)a1 inDomain:(struct __CFString { } *)a2 usingPreferencesScope:(int)a3;
+ (BOOL)canAccessNanoRegistry;
+ (void)_synchronizeDomain:(struct __CFString { } *)a0 usingPreferencesScope:(int)a1;
+ (BOOL)_valueForEntitlement:(id)a0 task:(struct __SecTask { } *)a1;
+ (struct __CFDictionary { } *)_copyAllKeysAndValuesFromDomain:(struct __CFString { } *)a0 usingPreferencesScope:(int)a1;
+ (id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id *)a0 regularPreferenceKeysCount:(unsigned long long)a1;
+ (struct __CFString { } *)preferencesDomain;
+ (void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)a0 inDomain:(struct __CFString { } *)a1 usingPreferencesScope:(int)a2 withBlock:(id /* block */)a3;
+ (struct __CFString { } *)copySharedResourcesPreferencesDomainForDomain:(struct __CFString { } *)a0;
+ (struct __CFString { } *)copySharedResourcesPreferencesDomain;
+ (void)migratePerTopicPreferencesInDomain:(struct __CFString { } *)a0 withRegularPreferenceKeys:(const id *)a1 regularPreferenceKeysCount:(unsigned long long)a2 intoSinglePerTopicPreferenceWithSuffix:(id)a3 usingPreferencesScope:(int)a4;

@end
