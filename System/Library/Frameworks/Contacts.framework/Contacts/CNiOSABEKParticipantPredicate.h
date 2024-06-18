@class NSString, NSURL;

@interface CNiOSABEKParticipantPredicate : CNPredicate <CNiOSContactPredicate>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *customDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)cn_supportsNativeSorting;
- (id)cn_ABQSLPredicateForAddressBook:(void *)a0 fetchRequest:(id)a1 error:(id *)a2;
- (struct __CFArray { } *)cn_copyPeopleInAddressBook:(void *)a0 fetchRequest:(id)a1 matchInfos:(id *)a2 environment:(id)a3 error:(struct __CFError **)a4;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)cn_supportsNativeBatchFetch;
- (BOOL)cn_supportsEncodedFetching;
- (id)initWithName:(id)a0 URL:(id)a1 emailAddress:(id)a2 customDescription:(id)a3;

@end
