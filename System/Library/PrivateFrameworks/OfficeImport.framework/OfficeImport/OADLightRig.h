@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (id)init;
- (void)setType:(int)a0;
- (id)rotation;
- (unsigned long long)hash;
- (int)direction;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRotation:(id)a0;
- (void)setDirection:(int)a0;
- (int)type;

@end
