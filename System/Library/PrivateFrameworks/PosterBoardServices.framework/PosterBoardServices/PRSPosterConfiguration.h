@class PRSPosterPath, NSURL, NSString;
@protocol BSInvalidatable;

@interface PRSPosterConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)assetDirectory;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)loadUserInfoWithError:(out id *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)providerBundleIdentifier;
- (id)serverUUID;

@end
