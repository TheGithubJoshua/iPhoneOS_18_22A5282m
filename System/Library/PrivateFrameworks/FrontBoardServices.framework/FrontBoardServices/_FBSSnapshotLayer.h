@interface _FBSSnapshotLayer : NSObject

@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } baseTransform;

- (id)initWithContextID:(unsigned int)a0 baseTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1;

@end
