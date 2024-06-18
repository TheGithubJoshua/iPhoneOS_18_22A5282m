@class NSURLRequest, AKAppleIDServerResourceLoadDelegate, NSArray;

@interface AKServerRequestConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) AKAppleIDServerResourceLoadDelegate *resourceLoadDelegate;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long presentationType;
@property (copy, nonatomic) NSArray *whitelistedPathURLs;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequest:(id)a0 requestType:(unsigned long long)a1;

@end
