@class NSDictionary, AMSUIWebJSRequest;

@interface AMSUIWebJSResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *body;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) AMSUIWebJSRequest *originalRequest;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 duration:(double)a1;

@end
