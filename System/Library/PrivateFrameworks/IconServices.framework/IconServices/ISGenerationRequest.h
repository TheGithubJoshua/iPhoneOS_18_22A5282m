@class ISImageDescriptor, ISConcreteIcon, NSUUID;

@interface ISGenerationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ISConcreteIcon *icon;
@property (retain) ISImageDescriptor *imageDescriptor;
@property (retain) NSUUID *lsDatabaseUUID;
@property unsigned long long lsDatabaseSequenceNumber;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)_decorationRecipeKeyFromTypeIdentifier:(id)a0 position:(long long)a1;
- (void).cxx_destruct;
- (id)generateImageReturningRecordIdentifiers:(id *)a0;
- (id)generateImage;

@end
