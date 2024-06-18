@class NSArray;

@interface ACActivityPresentationOptions : NSObject <NSCopying>

@property (nonatomic, getter=isUserDismissalAllowedOnLockScreen) BOOL userDismissalAllowedOnLockScreen;
@property (nonatomic) BOOL showsAuthorizationOptions;
@property (retain, nonatomic) NSArray *destinations;
@property (nonatomic) long long authorizationOptionsType;

- (id)initWithDestinations:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromSwift:(BOOL)a0;

@end
