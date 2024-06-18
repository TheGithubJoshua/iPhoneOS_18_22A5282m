@class NSString;

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;

+ (id)addMediaEntityToWishListWithDictionary:(id)a0 context:(id)a1;
+ (id)addMediaEntityToWishList;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
