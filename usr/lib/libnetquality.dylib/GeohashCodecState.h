@class CoordinateApproximation;

@interface GeohashCodecState : NSObject

@property (retain) CoordinateApproximation *latitude;
@property (retain) CoordinateApproximation *longitude;

+ (id)new;

- (void).cxx_destruct;
- (id)description;

@end
