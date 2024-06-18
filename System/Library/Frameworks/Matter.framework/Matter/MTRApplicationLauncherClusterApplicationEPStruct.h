@class MTRApplicationLauncherClusterApplicationStruct, NSNumber;

@interface MTRApplicationLauncherClusterApplicationEPStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRApplicationLauncherClusterApplicationStruct *application;
@property (copy, nonatomic) NSNumber *endpoint;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
