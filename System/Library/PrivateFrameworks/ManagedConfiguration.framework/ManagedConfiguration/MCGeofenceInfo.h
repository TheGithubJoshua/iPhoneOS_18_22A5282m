@class NSNumber, NSString;

@interface MCGeofenceInfo : NSObject

@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *radius;
@property (retain, nonatomic) NSString *geofenceId;

- (void).cxx_destruct;
- (id)description;

@end
