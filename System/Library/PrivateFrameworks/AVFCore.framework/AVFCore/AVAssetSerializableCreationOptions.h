@class NSDictionary;

@interface AVAssetSerializableCreationOptions : NSObject <NSSecureCoding> {
    NSDictionary *_creationOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)creationOptions;
- (id)initWithCreationOptions:(id)a0;

@end
