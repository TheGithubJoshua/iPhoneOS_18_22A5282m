@class NSArray, NWNetworkAdviceUpdate, NSDate, NSPredicate;

@interface NWNetworkOfInterest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long version;
@property (readonly) long long scopedToLOI;
@property (readonly) long long flags;
@property (readonly) unsigned char interfaceType;
@property BOOL isTrafficEligible;
@property BOOL willGetDiscretionaryTrafficInvites;
@property BOOL discretionaryTrafficInvited;
@property long long interfaceClass;
@property long long considerAlternate;
@property (retain) NWNetworkAdviceUpdate *considerAlternateUpdate;
@property long long linkQuality;
@property long long powerCostDL;
@property long long powerCostUL;
@property (retain) NSDate *predictionsGeneratedAt;
@property (retain) NSArray *predictions;
@property (readonly) long long interface;
@property (readonly) long long interfaceSubtype;
@property (readonly) BOOL isAny;
@property (readonly) BOOL isBuiltin;
@property (readonly) NSPredicate *customSignature;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)atHomeScopedNOI;
- (id)typePrettyPrint;
- (BOOL)atWorkScopedNOI;
- (id)_descriptionFull:(BOOL)a0;
- (BOOL)_isEqualToNOI:(id)a0;
- (void)addObserverForAllKeyPaths:(id)a0;
- (id)identityAttrsOnly;
- (id)initWithSpec:(unsigned char)a0 isAny:(BOOL)a1 isBuiltin:(BOOL)a2 scopedToLOI:(long long)a3 flags:(long long)a4 hasCustomSignature:(id)a5;
- (void)removeObserverForAllKeyPaths:(id)a0;

@end