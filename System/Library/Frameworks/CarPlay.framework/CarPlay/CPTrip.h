@class NSUUID, MKMapItem, NSArray;

@interface CPTrip : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) MKMapItem *origin;
@property (readonly, nonatomic) MKMapItem *destination;
@property (readonly, copy, nonatomic) NSArray *routeChoices;
@property (retain, nonatomic) id userInfo;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOrigin:(id)a0 destination:(id)a1 routeChoices:(id)a2;

@end