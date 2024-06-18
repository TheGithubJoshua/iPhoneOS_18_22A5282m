@class MPModelStaticResponse;

@interface MPModelStaticRequest : MPModelRequest

@property (retain, nonatomic) MPModelStaticResponse *staticResponse;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
