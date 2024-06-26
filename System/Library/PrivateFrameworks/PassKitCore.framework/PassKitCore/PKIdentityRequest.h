@class NSString, NSData;
@protocol PKIdentityDocumentDescriptor;

@interface PKIdentityRequest : NSObject

@property (copy, nonatomic) NSString *context;
@property (retain, nonatomic) id<PKIdentityDocumentDescriptor> descriptor;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)asDIIdentityRequest;

@end
