@class VSUserAccount, NSError;

@interface VSUserAccountUpdateRequest : NSObject

@property (retain, nonatomic) VSUserAccount *userAccount;
@property (retain, nonatomic) VSUserAccount *updatedUserAccount;
@property (retain, nonatomic) NSError *updateError;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUserAccount:(id)a0;

@end
