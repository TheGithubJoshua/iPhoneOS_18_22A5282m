@class NSString, NSData;

@interface MADVIVisualSearchThirdPartyObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) NSString *thumbnailURL;
@property (readonly, nonatomic) NSData *metadata;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectIdentifier:(id)a0 imageURL:(id)a1 thumbnailURL:(id)a2 metadata:(id)a3;

@end
