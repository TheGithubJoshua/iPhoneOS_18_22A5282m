@interface JDCloudColorCalibrationResultOutcome : NSObject

@property (readonly, nonatomic) float rotationX;
@property (readonly, nonatomic) float rotationY;
@property (readonly, nonatomic) float rotationZ;
@property (readonly, nonatomic) float stdX;
@property (readonly, nonatomic) float stdY;
@property (readonly, nonatomic) float stdZ;

- (void)applyFactorToResults:(float)a0;
- (id)initWithRotX:(float)a0 rotY:(float)a1 rotZ:(float)a2 stdX:(float)a3 stdY:(float)a4 stdZ:(float)a5;

@end
