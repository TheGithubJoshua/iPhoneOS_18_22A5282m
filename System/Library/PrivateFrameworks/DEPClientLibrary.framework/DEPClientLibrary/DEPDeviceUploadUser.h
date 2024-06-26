@class NSString;

@interface DEPDeviceUploadUser : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *name;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithApproverDict:(id)a0;
- (id)initWithDsid:(id)a0 name:(id)a1;

@end
