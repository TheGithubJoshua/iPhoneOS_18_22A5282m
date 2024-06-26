@class NSURL, NSString;

@interface MUVendorLinkViewModel : NSObject

@property (retain, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSString *providerName;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *appAdamId;
@property (copy, nonatomic) NSString *appShortName;
@property (copy, nonatomic) NSString *linkTypeString;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)description;

@end
