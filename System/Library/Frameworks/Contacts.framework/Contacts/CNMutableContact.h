@class NSData, NSString, NSArray, NSDate, NSDictionary, CNContact, CNActivityAlert, CNContactKeyVector, NSDateComponents;

@interface CNMutableContact : CNContact

@property (copy) NSString *nameTitle;
@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSString *maidenName;
@property (copy) NSString *phoneticFirstName;
@property (copy) NSString *phoneticLastName;
@property (copy) NSString *companyName;
@property (copy) NSArray *relatedNames;
@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic) BOOL imageDataAvailable;
@property (copy, nonatomic) NSArray *calendarURIs;
@property (copy, nonatomic) NSString *cardDAVUID;
@property (copy, nonatomic) CNContactKeyVector *availableKeyDescriptor;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSDictionary *storeInfo;
@property (copy, nonatomic) NSString *searchIndex;
@property (copy, nonatomic) NSDictionary *activityAlerts;
@property (copy, nonatomic) NSString *sectionForSortingByGivenName;
@property (copy, nonatomic) NSString *sectionForSortingByFamilyName;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *explicitDisplayName;
@property (copy, nonatomic) CNContact *snapshot;
@property (nonatomic, getter=isPreferredForName) BOOL preferredForName;
@property (nonatomic, getter=isPreferredForImage) BOOL preferredForImage;
@property (copy, nonatomic) NSArray *linkedContacts;
@property (copy, nonatomic) NSString *linkIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSString *cropRectID;
@property (copy, nonatomic) NSData *cropRectHash;
@property (copy, nonatomic) NSData *fullscreenImageData;
@property (copy, nonatomic) NSData *syncImageData;
@property (copy, nonatomic) CNActivityAlert *callAlert;
@property (copy, nonatomic) CNActivityAlert *textAlert;
@property (copy, nonatomic) NSString *phonemeData;
@property (copy, nonatomic) NSString *phoneticCompanyName;
@property (copy, nonatomic) NSString *externalURI;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSData *externalRepresentation;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *externalUUID;
@property (copy, nonatomic) NSString *externalImageURI;
@property (copy, nonatomic) NSString *mapsData;
@property (readonly, nonatomic) BOOL hasChanges;
@property (copy, nonatomic) NSString *pronunciationGivenName;
@property (copy, nonatomic) NSString *pronunciationFamilyName;
@property (copy, nonatomic) NSString *preferredLikenessSource;
@property (copy, nonatomic) NSString *preferredApplePersonaIdentifier;
@property (copy, nonatomic) NSString *preferredChannel;
@property (copy, nonatomic) NSString *downtimeWhitelist;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSData *imageHash;
@property (copy, nonatomic) NSData *memojiMetadata;
@property (nonatomic) long long contactType;
@property (copy, nonatomic) NSString *namePrefix;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *previousFamilyName;
@property (copy, nonatomic) NSString *nameSuffix;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *departmentName;
@property (copy, nonatomic) NSString *jobTitle;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *phoneticOrganizationName;
@property (copy, nonatomic) NSString *note;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *postalAddresses;
@property (copy, nonatomic) NSArray *urlAddresses;
@property (copy, nonatomic) NSArray *contactRelations;
@property (copy, nonatomic) NSArray *socialProfiles;
@property (copy, nonatomic) NSArray *instantMessageAddresses;
@property (copy, nonatomic) NSDateComponents *birthday;
@property (copy, nonatomic) NSDateComponents *nonGregorianBirthday;
@property (copy, nonatomic) NSArray *dates;

+ (void)freezeIfInstancetypeIsImmutable:(id)a0;
+ (id)imageDataDescriptions;
+ (id)unifyContacts:(id)a0;

- (id)modificationDate;
- (id)phonemeData;
- (void)setBirthday:(id)a0;
- (void)setFamilyName:(id)a0;
- (id)emailAddresses;
- (id)initWithContact:(id)a0;
- (void)setFirstName:(id)a0;
- (void)setEmailAddresses:(id)a0;
- (void)setPhonemeData:(id)a0;
- (void)setCreationDate:(id)a0;
- (void)setModificationDate:(id)a0;
- (id)postalAddresses;
- (id)phoneNumbers;
- (id)birthday;
- (void)setPhoneticFamilyName:(id)a0;
- (id)nameSuffix;
- (id)nickname;
- (id)jobTitle;
- (id)creationDate;
- (void)setNamePrefix:(id)a0;
- (id)phoneticGivenName;
- (void)setGivenName:(id)a0;
- (void)setOrganizationName:(id)a0;
- (id)note;
- (void)setPhoneticGivenName:(id)a0;
- (id)freeze;
- (id)familyName;
- (void)setNickname:(id)a0;
- (void)setPhoneticLastName:(id)a0;
- (id)phoneticFamilyName;
- (id)namePrefix;
- (void)setNote:(id)a0;
- (id)givenName;
- (id)phoneticMiddleName;
- (void).cxx_destruct;
- (void)setExternalModificationTag:(id)a0;
- (id)externalIdentifier;
- (id)middleName;
- (void)setNameSuffix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)organizationName;
- (id)externalRepresentation;
- (id)socialProfiles;
- (void)setNilValueForKey:(id)a0;
- (void)setPhoneticMiddleName:(id)a0;
- (void)setSocialProfiles:(id)a0;
- (id)imageType;
- (void)setMiddleName:(id)a0;
- (id)externalModificationTag;
- (void)setImageType:(id)a0;
- (void)_setCreationDate:(id)a0;
- (void)_setImageData:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (void)setPhoneticFirstName:(id)a0;
- (void)setExternalIdentifier:(id)a0;
- (void)setSnapshot:(id)a0;
- (void)setPostalAddresses:(id)a0;
- (void)setLastName:(id)a0;
- (id)nonGregorianBirthday;
- (void)setNonGregorianBirthday:(id)a0;
- (void)setPhoneNumbers:(id)a0;
- (id)phoneticOrganizationName;
- (void)setPhoneticOrganizationName:(id)a0;
- (void)setStoreIdentifier:(id)a0;
- (void)setContactType:(long long)a0;
- (id)contactRelations;
- (long long)contactType;
- (id)dates;
- (id)departmentName;
- (id)freezeWithSelfAsSnapshot;
- (id)fullscreenImageData;
- (BOOL)imageDataAvailable;
- (id)imageHash;
- (id)instantMessageAddresses;
- (id)memojiMetadata;
- (void)overwriteStateFromContact:(id)a0;
- (id)previousFamilyName;
- (void)removeKeys:(id)a0;
- (void)setDates:(id)a0;
- (void)setDowntimeWhitelist:(id)a0;
- (void)setFrozenSelfAsSnapshot;
- (void)setFullscreenImageData:(id)a0;
- (void)setImageHash:(id)a0;
- (void)setLinkedContacts:(id)a0;
- (void)setMemojiMetadata:(id)a0;
- (id)urlAddresses;
- (void)_setPhoneNumbers:(id)a0;
- (void)setUrlAddresses:(id)a0;
- (void)setContactRelations:(id)a0;
- (void)setDepartmentName:(id)a0;
- (void)setInstantMessageAddresses:(id)a0;
- (void)setJobTitle:(id)a0;
- (void)setPreviousFamilyName:(id)a0;
- (void)_setFamilyName:(id)a0;
- (void)_setNamePrefix:(id)a0;
- (void)setCompanyName:(id)a0;
- (void)_setMiddleName:(id)a0;
- (void)_setNameSuffix:(id)a0;
- (void)_setBirthday:(id)a0;
- (void)_setCalendarURIs:(id)a0;
- (void)_setCallAlert:(id)a0;
- (void)_setContactRelations:(id)a0;
- (void)_setDates:(id)a0;
- (void)_setDepartmentName:(id)a0;
- (void)_setDowntimeWhitelist:(id)a0;
- (void)_setEmailAddresses:(id)a0;
- (void)_setExplicitDisplayName:(id)a0;
- (void)_setExternalIdentifier:(id)a0;
- (void)_setExternalImageURI:(id)a0;
- (void)_setExternalModificationTag:(id)a0;
- (void)_setExternalRepresentation:(id)a0;
- (void)_setExternalUUID:(id)a0;
- (void)_setFullscreenImageData:(id)a0;
- (void)_setGivenName:(id)a0;
- (void)_setImageHash:(id)a0;
- (void)_setImageType:(id)a0;
- (void)_setInstantMessageAddresses:(id)a0;
- (void)_setJobTitle:(id)a0;
- (void)_setLinkIdentifier:(id)a0;
- (void)_setMapsData:(id)a0;
- (void)_setMemojiMetadata:(id)a0;
- (void)_setModificationDate:(id)a0;
- (void)_setNickname:(id)a0;
- (void)_setNonGregorianBirthday:(id)a0;
- (void)_setNote:(id)a0;
- (void)_setOrganizationName:(id)a0;
- (void)_setPhonemeData:(id)a0;
- (void)_setPhoneticFamilyName:(id)a0;
- (void)_setPhoneticGivenName:(id)a0;
- (void)_setPhoneticMiddleName:(id)a0;
- (void)_setPhoneticOrganizationName:(id)a0;
- (void)_setPostalAddresses:(id)a0;
- (void)_setPreferredApplePersonaIdentifier:(id)a0;
- (void)_setPreferredChannel:(id)a0;
- (void)_setPreferredLikenessSource:(id)a0;
- (void)_setPreviousFamilyName:(id)a0;
- (void)_setPronunciationFamilyName:(id)a0;
- (void)_setPronunciationGivenName:(id)a0;
- (void)_setSearchIndex:(id)a0;
- (void)_setSectionForSortingByFamilyName:(id)a0;
- (void)_setSectionForSortingByGivenName:(id)a0;
- (void)_setSocialProfiles:(id)a0;
- (void)_setSyncImageData:(id)a0;
- (void)_setTextAlert:(id)a0;
- (void)_setThumbnailImageData:(id)a0;
- (void)_setUrlAddresses:(id)a0;
- (id)calendarURIs;
- (id)callAlert;
- (id)cardDAVUID;
- (id)copyWithSelfAsSnapshot;
- (id)downtimeWhitelist;
- (id)explicitDisplayName;
- (id)externalImageURI;
- (id)externalUUID;
- (id)linkIdentifier;
- (BOOL)preferredForImage;
- (BOOL)preferredForName;
- (id)pronunciationFamilyName;
- (id)pronunciationGivenName;
- (void)resetToNewContact;
- (id)selfOrMutableCopy;
- (void)setActivityAlerts:(id)a0;
- (void)setCalendarURIs:(id)a0;
- (void)setCallAlert:(id)a0;
- (void)setCardDAVUID:(id)a0;
- (void)setExplicitDisplayName:(id)a0;
- (void)setExternalImageURI:(id)a0;
- (void)setExternalUUID:(id)a0;
- (void)setIOSLegacyIdentifier:(int)a0;
- (void)setImageDataAvailable:(BOOL)a0;
- (void)setLinkIdentifier:(id)a0;
- (void)setMaidenName:(id)a0;
- (void)setNameTitle:(id)a0;
- (void)setPhoneticCompanyName:(id)a0;
- (void)setPreferredForImage:(BOOL)a0;
- (void)setPreferredForName:(BOOL)a0;
- (void)setPronunciationFamilyName:(id)a0;
- (void)setPronunciationGivenName:(id)a0;
- (void)setStoreInfo:(id)a0;
- (void)setSyncImageData:(id)a0;
- (void)setTextAlert:(id)a0;
- (id)syncImageData;
- (id)textAlert;
- (void)updateImageDataAvailableFromCurrentState;
- (void)updateStateFromContact:(id)a0;

@end