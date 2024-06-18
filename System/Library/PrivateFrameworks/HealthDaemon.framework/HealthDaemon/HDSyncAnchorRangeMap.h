@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_anchorRangesByEntityIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (unsigned long long)anchorRangeCount;
- (id)codableSyncAnchorRangeMap;
- (void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(id /* block */)a0;
- (BOOL)getAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; } *)a0 forSyncEntityIdentifier:(id)a1;
- (id)initWithCodableSyncAnchorRangeMap:(id)a0 error:(id *)a1;
- (void)setAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a0 forSyncEntityIdentifier:(id)a1;

@end
