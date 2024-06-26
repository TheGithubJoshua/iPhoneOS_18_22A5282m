@class NSString, NSData, NSArray;

@interface NSPPrivateAccessTokenChallenge : NSObject {
    unsigned short _tokenType;
    NSString *_issuerName;
    NSData *_redemptionNonce;
    NSString *_originName;
    NSArray *_originNames;
    NSString *_originInfo;
    NSData *_challengeData;
}

@property (readonly) unsigned short tokenType;
@property (readonly) NSString *issuerName;
@property (readonly) NSData *redemptionNonce;
@property (readonly) NSString *originName;
@property (readonly) NSArray *originNames;
@property (readonly) BOOL isSupportedTokenType;
@property (readonly) BOOL typeRequiresOriginName;
@property (readonly) BOOL typeRequiresRedemptionNonce;
@property (readonly) BOOL typeHasAllowedOriginList;

+ (id)tokenKeyAttributeName;
+ (id)httpAuthenticationScheme;
+ (id)originNameKeyAttributeName;
+ (id)challengeAttributeName;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
