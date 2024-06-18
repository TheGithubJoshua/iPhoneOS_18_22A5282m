@class NSString, NSArray;

@interface CTGeofenceProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *dataSetName;
@property (retain, nonatomic) NSString *versionNumber;
@property (retain, nonatomic) NSArray *geofenceList;
@property (nonatomic) BOOL cellularDataPreferred;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
