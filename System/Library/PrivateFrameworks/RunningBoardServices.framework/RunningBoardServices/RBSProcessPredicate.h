@class NSString, RBSProcessPredicateImpl, RBSProcessIdentity;

@interface RBSProcessPredicate : NSObject <RBSXPCSecureCoding, RBSProcessMatching>

@property (readonly, nonatomic) unsigned int euid;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionPoint;
@property (readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic) RBSProcessPredicateImpl *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicatePowerLogProcesses;
+ (id)predicateMatchingIdentity:(id)a0;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)predicateMatchingLSApplicationIdentity:(id)a0;
+ (id)predicateMatchingBundleIdentifier:(id)a0;
+ (id)predicateMatchingPlatform:(int)a0;
+ (id)predicateMatchingJobLabel:(id)a0;
+ (id)predicateMatchingServiceName:(id)a0;
+ (id)predicateMatchingDextsBundledWithBundleID:(id)a0;
+ (id)predicateMatchingProcessTypeApplication;
+ (id)predicateMatchingHandle:(id)a0;
+ (id)predicateMatchingIdentifier:(id)a0;
+ (id)predicateMatchingSuspendableProcesses;
+ (id)predicateForMemoryMonitor;
+ (id)predicate;
+ (id)predicateMatchingLaunchServicesProcesses;
+ (id)predicateMatchingPredicates:(id)a0;
+ (id)predicateMatchingAuid:(unsigned int)a0;
+ (id)predicateMatchingTarget:(id)a0;
+ (id)predicateNotMatchingPredicate:(id)a0;
+ (id)predicateMatchingExtensionPoint:(id)a0;
+ (id)predicateMatchingEuid:(unsigned int)a0;
+ (id)predicateMatchingBeforeTranslocationBundlePath:(id)a0;
+ (id)predicateMatchingIdentifiers:(id)a0;
+ (id)predicateMatchingHostIdentifier:(id)a0;
+ (id)predicateMatching:(id)a0;
+ (id)predicateMatchingExecPathStartsWith:(id)a0;
+ (id)predicateForClearTheBoard;
+ (id)predicateMatchingAnyPredicate:(id)a0;
+ (id)predicateMatchingBundleIdentifiers:(id)a0;
+ (id)predicateForSymptomsd;

- (id)processIdentifiers;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned int)auid;
- (id)initWithPredicate:(id)a0;
- (id)processIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
