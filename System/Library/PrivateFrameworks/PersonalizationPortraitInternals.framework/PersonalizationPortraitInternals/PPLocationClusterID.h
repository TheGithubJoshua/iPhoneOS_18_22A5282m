@class NSString;

@interface PPLocationClusterID : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (retain, nonatomic) NSString *thoroughfare;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *administrativeArea;

+ (id)broadenClusterId:(id)a0;
+ (id)lookupTableWithRecords:(id)a0;
+ (id)latLongTableWithClusters:(id)a0;
+ (id)clustersWithRecords:(id)a0;
+ (BOOL)asClusterIDPlacemark:(id)a0 isEqualToPlacemark:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlacemark:(id)a0;
- (id)initWithName:(id)a0 subThoroughfare:(id)a1 thoroughfare:(id)a2 subLocality:(id)a3 locality:(id)a4 administrativeArea:(id)a5;

@end