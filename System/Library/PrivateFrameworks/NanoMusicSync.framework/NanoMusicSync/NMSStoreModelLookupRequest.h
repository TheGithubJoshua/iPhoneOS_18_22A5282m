@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest

@property (copy, nonatomic) NSArray *containerIDs;

- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
