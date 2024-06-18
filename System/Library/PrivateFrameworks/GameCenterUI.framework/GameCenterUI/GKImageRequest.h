@class NSArray, NSURLRequest;
@protocol GKImageRequestDelegate, GKResourceDataConsumer;

@interface GKImageRequest : GKResourceRequest

@property (class, copy, nonatomic) NSArray *searchBundles;

@property (readonly, nonatomic) id<GKResourceDataConsumer> dataConsumer;
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) BOOL isResourceRequest;
@property (readonly, weak, nonatomic) id<GKImageRequestDelegate> delegate;

- (id)init;
- (id)makeLoadOperation;
- (unsigned long long)cacheOptions;
- (void).cxx_destruct;
- (id)description;
- (void)didLoadResource:(id)a0 error:(id)a1;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1 delegate:(id)a2;
- (BOOL)isAvatarImageRequest;
- (BOOL)isContactImageRequest;
- (BOOL)isSystemImageRequest;

@end