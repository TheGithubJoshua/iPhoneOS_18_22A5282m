@class VNRequest, NSError;

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) NSError *error;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithRequest:(id)a0 error:(id)a1;

@end
