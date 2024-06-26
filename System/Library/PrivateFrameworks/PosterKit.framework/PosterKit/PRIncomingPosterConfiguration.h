@class PRSServerPosterIdentity, NSString, PRSPosterPath, NSURL, PRPosterConfiguredProperties;

@interface PRIncomingPosterConfiguration : NSObject <PRPosterContents>

@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties;
@property (readonly, nonatomic) PRSPosterPath *path;
@property (readonly, nonatomic) PRSServerPosterIdentity *sourceIdentity;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForUserInfoKey:(id)a0;
- (id)assetDirectory;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)loadUserInfoWithError:(out id *)a0;
- (id)initWithPath:(id)a0 sourceIdentity:(id)a1 configuredProperties:(id)a2;

@end
