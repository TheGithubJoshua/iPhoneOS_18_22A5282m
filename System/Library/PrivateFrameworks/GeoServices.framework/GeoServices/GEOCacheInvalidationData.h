@class NSArray;

@interface GEOCacheInvalidationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double ttl;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSArray *versionDomains;

- (id)initWithCoder:(id)a0;
- (BOOL)_isKey:(id)a0 subsetOf:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 ttl:(double)a1 version:(unsigned int)a2 domains:(id)a3;
- (BOOL)isInvalidatedByServiceVersion:(unsigned int)a0 domains:(id)a1;

@end
