@class NSString, GEOMapRegion, NSDate;

@interface GEOMapDataSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic, getter=_originatingBundleIdentifier) NSString *originatingBundleIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long dataTypes;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) GEOMapRegion *region;

- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0 originatingBundleIdentifier:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 expirationDate:(id)a4 region:(id)a5;

@end
