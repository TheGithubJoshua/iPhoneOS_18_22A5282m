@class NSString;

@interface DEPDeviceUploadRequestType : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *code;
@property (readonly, nonatomic) NSString *name;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCode:(id)a0 name:(id)a1;

@end