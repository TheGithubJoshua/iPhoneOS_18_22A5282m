@class NSLock, NSString, NSURL, NSData, NSNumber, NSLocale;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    struct __CTServerConnection { } *_telephonyConnectionRef;
    NSLock *_telephonyLock;
    BOOL _shouldUpdateUniqueDeviceIdentifier;
    BOOL _shouldUpdateServerFriendlyDescription;
    BOOL _shouldUpdateColor;
    BOOL _shouldUpdateEnclosureColor;
    BOOL _shouldUpdateCoverGlassColor;
    BOOL _shouldUpdateHousingColor;
    BOOL _shouldUpdateBackingColor;
    BOOL _shouldUpdateLocale;
    BOOL _shouldUpdateROMAddress;
    BOOL _shouldUpdateMLBSerialNumber;
    BOOL _shouldUpdateModelNumber;
    BOOL _shouldUpdateProvisioningDeviceIdentifier;
}

@property (class, readonly, copy, nonatomic) NSURL *systemContainerURL;
@property (class, readonly, copy, nonatomic) NSURL *systemContainerCacheURL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *userChosenName;
@property (readonly, nonatomic) NSString *userFullName;
@property (readonly, nonatomic) NSString *internationalMobileEquipmentIdentity;
@property (readonly, nonatomic) NSString *internationalMobileEquipmentIdentity2;
@property (readonly, nonatomic) BOOL isBiometricAuthCapable;
@property (readonly, nonatomic) BOOL isFaceIDCapable;
@property (readonly, nonatomic) BOOL isBiometricIDCapable;
@property (readonly, nonatomic) BOOL usesTouchID;
@property (readonly, nonatomic) BOOL isUnlocked;
@property (readonly, nonatomic) BOOL isInCircle;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *mobileEquipmentIdentifier;
@property (readonly, nonatomic) NSString *integratedCircuitCardIdentifier;
@property (readonly, nonatomic) BOOL isInternalBuild;
@property (readonly, nonatomic) BOOL isMultiUserMode;
@property (readonly, nonatomic) BOOL isInRestrictedSharingMode;
@property (readonly, nonatomic) NSData *serializedData;
@property (copy, nonatomic) NSString *serverFriendlyDescription;
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (copy, nonatomic) NSString *provisioningDeviceIdentifier;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSNumber *coverGlassColor;
@property (copy, nonatomic) NSNumber *housingColor;
@property (copy, nonatomic) NSNumber *backingColor;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *MLBSerialNumber;
@property (copy, nonatomic) NSString *ROMAddress;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic, setter=setLinkType:) unsigned long long linkType;
@property (readonly, nonatomic) NSString *localUserUUID;
@property (readonly, nonatomic) BOOL isProtectedWithPasscode;

+ (long long)currentDeviceAuthenticationMode;
+ (id)deviceWithSerializedData:(id)a0;
+ (id)_osName;
+ (id)deviceSpecificLocalizedStringWithKey:(id)a0 inTable:(id)a1;
+ (long long)currentDeviceAuthenticationModeForAuthContext:(id)a0;
+ (BOOL)hasUniqueDeviceIdentifier;
+ (id)_buildNumber;
+ (id)deviceSpecificLocalizedStringWithKey:(id)a0;
+ (id)_generateServerFriendlyDescriptionForPairedDevice:(id)a0;
+ (id)currentDevice;
+ (long long)_currentDeviceAuthenticationMode;
+ (id)activeIDSPeerDevice;
+ (id)_osVersion;
+ (id)_systemVersionDictionary;
+ (id)_hardwareModel;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)_setCurrentSharingMode;
- (id)_volumeGroupUUID;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (struct __CTServerConnection { } *)_telephonyConnection;
- (void)_setShouldUpdateToValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
