@class NSString, CLCircularRegion, NSUUID;

@interface PKPaymentMarketCircularGeoFence : NSObject <PKPaymentMarketGeoFence, NSSecureCoding> {
    CLCircularRegion *_circle;
    NSUUID *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (BOOL)containsLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)distanceFromLocation:(id)a0;

@end
