@class NSString, NSMutableDictionary;

@interface MOXPCContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_configuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *xpcProcessName;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)encodeDictionary:(id)a0;
- (id)decodeToDictionary:(id)a0;

@end
