@class NSNumber, NSDictionary, NSArray;

@interface DKDiagnosticResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSArray *files;
@property (readonly, nonatomic) NSArray *fileSandboxTokens;
@property (readonly, nonatomic) NSArray *uploadStatus;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMutableResult:(id)a0;

@end
