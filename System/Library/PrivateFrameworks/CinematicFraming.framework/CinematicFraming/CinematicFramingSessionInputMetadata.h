@class NSArray, NSDictionary;

@interface CinematicFramingSessionInputMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *bodyDetections;
@property (readonly, nonatomic) NSArray *faceDetections;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (readonly, nonatomic) float aspectRatio;
@property (readonly, nonatomic) BOOL hasGravity;
@property (readonly, nonatomic) float gravityX;
@property (readonly, nonatomic) float gravityY;
@property (readonly, nonatomic) float gravityZ;
@property (nonatomic) float additionalCameraRotation;
@property (readonly, nonatomic) NSDictionary *calibrationDataDictionary;
@property (readonly, nonatomic) int sensorID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDetectedObjectsInfo:(id)a0 calibrationData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 aspectRatio:(float)a3 sensorID:(int)a4;
- (void)setGravityX:(float)a0 y:(float)a1 z:(float)a2;
- (id)_createCalibrationDataDictionary:(id)a0;
- (void)_parseDetectedObjectsInfo:(id)a0;
- (id)initWithDetectedObjectsInfo:(id)a0 calibrationData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 aspectRatio:(float)a3;

@end
