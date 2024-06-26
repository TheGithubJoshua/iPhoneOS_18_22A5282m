@class NSURL;

@interface MSVArtworkServiceColorAnalysisRequest : MSVArtworkServiceRequest

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) float preferredImageWidth;
@property (readonly, nonatomic) float preferredImageHeight;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (Class)operationClass;
- (id)initWithSourceURL:(id)a0 preferredImageSize:(struct CGSize { double x0; double x1; })a1;

@end
