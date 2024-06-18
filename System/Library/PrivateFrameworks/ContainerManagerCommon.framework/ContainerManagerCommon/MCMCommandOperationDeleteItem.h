@class NSURL;
@protocol MCMMetadata;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMMetadata> metadata;
@property (readonly, nonatomic) BOOL removeCodesignInfo;
@property (retain, nonatomic) NSURL *manifestURL;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithMetadata:(id)a0 removeCodesignInfo:(BOOL)a1 manifestURL:(id)a2;

@end
