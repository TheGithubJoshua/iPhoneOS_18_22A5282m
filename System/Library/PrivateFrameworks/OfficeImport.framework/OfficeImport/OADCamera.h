@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (id)init;
- (void)setZoom:(float)a0;
- (id)rotation;
- (float)zoom;
- (unsigned long long)hash;
- (int)cameraType;
- (float)fieldOfView;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRotation:(id)a0;
- (void)setFieldOfView:(float)a0;
- (void)setCameraType:(int)a0;

@end
