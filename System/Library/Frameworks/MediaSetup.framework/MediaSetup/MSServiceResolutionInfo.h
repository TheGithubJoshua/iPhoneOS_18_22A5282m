@class MSServiceAppInfo, MSUserAccountInfo;

@interface MSServiceResolutionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MSServiceAppInfo *serviceAppInfo;
@property (readonly, nonatomic) MSUserAccountInfo *userAccountInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceAppInfo:(id)a0 userAccountInfo:(id)a1;

@end
