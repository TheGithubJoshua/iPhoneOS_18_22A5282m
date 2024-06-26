@class NSString, NSSet, EKPersistentSource;

@interface EKPersistentCalendar : EKPersistentObject

@property (retain, nonatomic) EKPersistentSource *source;
@property (retain, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *unlocalizedTitle;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) int displayOrder;
@property (copy, nonatomic) NSString *colorStringRaw;
@property (nonatomic, getter=isColorDisplayOnly) BOOL colorDisplayOnly;
@property (copy, nonatomic) NSString *symbolicColorName;
@property (nonatomic) int flags;
@property (nonatomic) unsigned long long sharingStatus;
@property (nonatomic) unsigned long long invitationStatus;
@property (copy, nonatomic) NSString *sharedOwnerName;
@property (copy, nonatomic) NSString *sharedOwnerURLString;
@property (nonatomic) unsigned long long sharingInvitationResponse;
@property (copy, nonatomic) NSSet *sharees;
@property (copy, nonatomic) NSString *publishedURL;
@property (nonatomic, getter=isPublished) BOOL published;
@property (copy, nonatomic) NSString *selfIdentityDisplayName;
@property (copy, nonatomic) NSString *selfIdentityEmail;
@property (copy, nonatomic) NSString *selfIdentityPhoneNumber;
@property (copy, nonatomic) NSString *selfIdentityAddressString;
@property (copy, nonatomic) NSString *selfIdentityFirstName;
@property (copy, nonatomic) NSString *selfIdentityLastName;
@property (copy, nonatomic) NSString *ownerIdentityDisplayName;
@property (copy, nonatomic) NSString *ownerIdentityEmail;
@property (copy, nonatomic) NSString *ownerIdentityPhoneNumber;
@property (copy, nonatomic) NSString *ownerIdentityAddress;
@property (copy, nonatomic) NSString *ownerIdentityFirstName;
@property (copy, nonatomic) NSString *ownerIdentityLastName;
@property (copy, nonatomic) NSString *subcalAccountID;
@property (copy, nonatomic) NSString *pushKey;

+ (id)relations;
+ (Class)meltedClass;
+ (id)calendarWithRandomUUID;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (void)setSharees:(id)a0;
- (id)pushKey;
- (id)sharees;
- (long long)maxAttendees;
- (void)setNotifications:(id)a0;
- (void)setMaxAttendees:(long long)a0;
- (id)notifications;
- (void)setSyncToken:(id)a0;
- (int)entityType;
- (id)notes;
- (id)syncToken;
- (id)subcalAccountID;
- (id)subscriptionID;
- (void)setNotes:(id)a0;
- (void)setPubcalAccountID:(id)a0;
- (id)externalIDTag;
- (void)setSymbolicColorName:(id)a0;
- (void)setOwnerIdentityPhoneNumber:(id)a0;
- (void)setSubcalAccountID:(id)a0;
- (id)ownerIdentityFirstName;
- (id)locale;
- (void)setLocale:(id)a0;
- (id)ownerIdentityAddressString;
- (void)setPublishURLString:(id)a0;
- (int)flags;
- (int)refreshInterval;
- (void)setSharedOwnerURLString:(id)a0;
- (void)setPushKey:(id)a0;
- (id)lastSyncTitle;
- (void)setSource:(id)a0;
- (id)syncError;
- (void)setOwnerIdentityFirstName:(id)a0;
- (void)setUUID:(id)a0;
- (id)digest;
- (void)setDisplayOrder:(int)a0;
- (id)source;
- (id)unlocalizedTitle;
- (void)setOwnerIdentityEmail:(id)a0;
- (unsigned long long)sharingStatus;
- (void)setExternalIDTag:(id)a0;
- (id)UUID;
- (unsigned long long)sharingInvitationResponse;
- (void)setAllAlarms:(id)a0;
- (int)ownerIdentityId;
- (id)sharedOwnerName;
- (int)displayOrder;
- (int)allowedEntities;
- (void)setSelfIdentityDisplayName:(id)a0;
- (void)setFlags:(int)a0;
- (id)ownerIdentityEmail;
- (void)setRefreshDate:(id)a0;
- (void)setLastSyncEndDate:(id)a0;
- (unsigned long long)invitationStatus;
- (void)setExternalID:(id)a0;
- (void)setOwnerIdentityId:(int)a0;
- (void)setColorStringRaw:(id)a0;
- (id)ownerIdentityLastName;
- (void)setExternalModificationTag:(id)a0;
- (void)setLastSyncTitle:(id)a0;
- (id)description;
- (id)selfIdentityLastName;
- (void)setOwnerIdentityDisplayName:(id)a0;
- (void)setSharingStatus:(unsigned long long)a0;
- (id)selfIdentityFirstName;
- (void)setInvitationStatus:(unsigned long long)a0;
- (id)lastSyncEndDate;
- (void)setSelfIdentityFirstName:(id)a0;
- (id)ownerIdentityDisplayName;
- (id)externalRepresentation;
- (id)ownerIdentityPhoneNumber;
- (void)setOwnerIdentityLastName:(id)a0;
- (void)setSubcalURL:(id)a0;
- (id)selfIdentityEmail;
- (id)selfIdentityDisplayName;
- (id)symbolicColorName;
- (id)externalModificationTag;
- (void)setLastSyncStartDate:(id)a0;
- (void)setSubscriptionID:(id)a0;
- (id)sharedOwnerURLString;
- (void)setExternalRepresentation:(id)a0;
- (id)pubcalAccountID;
- (id)refreshDate;
- (void)setSelfIdentityAddressString:(id)a0;
- (void)setSelfIdentityEmail:(id)a0;
- (id)colorStringRaw;
- (void)setIsPublished:(BOOL)a0;
- (void)setSharingInvitationResponse:(unsigned long long)a0;
- (id)selfIdentityAddressString;
- (void)setSelfIdentityPhoneNumber:(id)a0;
- (id)selfIdentityPhoneNumber;
- (id)externalID;
- (void)setPublished:(BOOL)a0;
- (void)setOwnerIdentityAddressString:(id)a0;
- (void)setSharedOwnerName:(id)a0;
- (void)setColorDisplayOnly:(BOOL)a0;
- (void)setRefreshInterval:(int)a0;
- (id)publishURLString;
- (id)lastSyncStartDate;
- (void)setSyncError:(id)a0;
- (void)setAllowedEntities:(int)a0;
- (void)setUnlocalizedTitle:(id)a0;
- (void)setDigest:(id)a0;
- (id)allAlarms;
- (id)subcalURL;
- (void)setSelfIdentityLastName:(id)a0;

@end
