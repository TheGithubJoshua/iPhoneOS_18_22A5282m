@class BLSHEnvironmentDateSpecifier;
@protocol BLSHBacklightSceneHostEnvironment;

@interface BLSHPresentationEntry : NSObject

@property (readonly, nonatomic) BLSHEnvironmentDateSpecifier *currentSpecifier;
@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;
@property (retain, nonatomic) id userObject;

- (id)initWithEnvironment:(id)a0 userObject:(id)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;

@end
