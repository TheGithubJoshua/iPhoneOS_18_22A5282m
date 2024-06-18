@class NSDictionary;

@interface BYSeedProgramManager : NSObject

@property (readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;

- (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1 completion:(id /* block */)a2;
- (long long)currentSeedProgram;

@end
