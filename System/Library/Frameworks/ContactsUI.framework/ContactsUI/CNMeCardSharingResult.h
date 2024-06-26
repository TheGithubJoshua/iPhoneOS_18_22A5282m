@class NSString, CNContactImage;

@interface CNMeCardSharingResult : NSObject

@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) CNContactImage *contactImage;
@property (readonly, nonatomic) BOOL didSaveImageToMeCard;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGivenName:(id)a0 familyName:(id)a1 contactImage:(id)a2 didSaveImageToMeCard:(BOOL)a3;

@end
