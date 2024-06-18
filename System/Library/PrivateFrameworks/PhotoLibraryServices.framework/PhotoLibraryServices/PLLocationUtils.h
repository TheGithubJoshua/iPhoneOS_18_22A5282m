@interface PLLocationUtils : NSObject

+ (BOOL)canUseCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)predicateForMomentWithLocation;
+ (BOOL)locationIsCoarse:(id)a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })defaultLocationCoordinate2D;
+ (id)predicateForAssetWithLocation;
+ (BOOL)horizontalAccuracyIsCoarse:(double)a0;
+ (struct PLCartesianCoordinate3D { float x0; float x1; float x2; })cartesianCoordinateFromLatitude:(float)a0 longitude:(float)a1;

@end