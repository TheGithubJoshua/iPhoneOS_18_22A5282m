@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)getRegionVisits;
- (id)getRegions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)removeAllRegionVisits;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRegionVisits:(id)a0;
- (void)removeRegionVisit:(id)a0;
- (void)addRegionVisit:(id)a0;

@end
