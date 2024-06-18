@class NSError;

@interface CKResult : NSObject

@property (readonly, nonatomic) id successValue;
@property (readonly, nonatomic) NSError *error;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSuccess:(id)a0;
- (id)initWithFailure:(id)a0;

@end
