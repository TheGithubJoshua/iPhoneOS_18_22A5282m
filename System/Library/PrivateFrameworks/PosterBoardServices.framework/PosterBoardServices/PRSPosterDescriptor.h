@class PRSPosterPath, NSString, NSURL;
@protocol BSInvalidatable;

@interface PRSPosterDescriptor : NSObject {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;

- (id)init;
- (id)_initWithPath:(id)a0;
- (unsigned long long)hash;
- (id)assetDirectory;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)loadUserInfoWithError:(out id *)a0;
- (void)dealloc;
- (id)identifier;
- (id)loadGalleryOptionsWithError:(out id *)a0;

@end
