@class NSString;

@interface CNiOSABPhoneNumberContactPredicate : CNPhoneNumberContactPredicate <CNiOSContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)countryCodeForPredicate:(id)a0;
+ (id)stringValueForPredicate:(id)a0;

- (BOOL)cn_supportsNativeSorting;
- (id)cn_ABQSLPredicateForAddressBook:(void *)a0 fetchRequest:(id)a1 error:(id *)a2;
- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;

@end
