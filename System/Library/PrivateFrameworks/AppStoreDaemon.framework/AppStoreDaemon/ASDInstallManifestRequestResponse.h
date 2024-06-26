@class NSArray;

@interface ASDInstallManifestRequestResponse : ASDRequestResponse

@property (readonly, nonatomic) NSArray *results;
@property BOOL success;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithResults:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
