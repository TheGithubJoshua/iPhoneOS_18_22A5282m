@class NSArray, NSString;

@interface TUCallGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *calls;
@property (readonly, nonatomic) int status;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithCalls:(id)a0;
- (id)initWithCall:(id)a0;
- (BOOL)isEqualToCallGroup:(id)a0;

@end
