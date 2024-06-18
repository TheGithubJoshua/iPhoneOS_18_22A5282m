@class IMNickname, IMHandle, CNContact;

@interface CKNicknameUpdate : NSObject

@property (retain, nonatomic) IMHandle *handle;
@property (retain, nonatomic) IMNickname *nickname;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) unsigned long long updateType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_updatedName;
- (id)contactWithUpdatedInformation;
- (id)listSubtitleText;
- (id)listTitleText;

@end
