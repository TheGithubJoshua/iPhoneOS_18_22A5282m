@class NSString, CNContact;

@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider>

@property (readonly, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)initWithContact:(id)a0;
- (id)nickname;
- (id)familyName;
- (id)givenName;
- (void).cxx_destruct;
- (id)middleName;

@end
