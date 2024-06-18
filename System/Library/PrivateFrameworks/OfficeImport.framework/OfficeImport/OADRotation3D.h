@interface OADRotation3D : NSObject <NSCopying> {
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (float)latitude;
- (float)longitude;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLatitude:(float)a0 longitude:(float)a1 revolution:(float)a2;
- (float)revolution;

@end
