@class NSString, DCSandboxExtension;

@interface DCDocumentCameraViewServiceSessionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) DCSandboxExtension *cachesDirectorySandboxExtension;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
