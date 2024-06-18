@class BKSAccelerometer;

@interface ARBKSAccelerometer : NSObject {
    BKSAccelerometer *_accelerometer;
    long long _lastValidDeviceOrientation;
}

+ (id)sharedAccelerometerHandle;
+ (id)sharedWeakAccelerometerHandle;

- (id)initPrivate;
- (void).cxx_destruct;
- (long long)rawOrientation;
- (void)dealloc;
- (long long)currentOrientation;

@end
