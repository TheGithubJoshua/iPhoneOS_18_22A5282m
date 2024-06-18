@class SISchemaAggregatedMetrics, NSString, NSArray, SISchemaMultiUserState, SISchemaMultiUserSetup, SISchemaActiveStatus, NSData, SISchemaPersonalization, SISchemaEnabledStatus;

@interface SISchemaDailyDeviceStatus : SISchemaTopLevelUnionType {
    struct { unsigned char clientDeviceSamplingTimestampMs : 1; unsigned char assistantRecordPublishTimestampMs : 1; unsigned char spokenNotificationsproxCardSeen : 1; unsigned char spokenNotificationsControlCenterModuleEnabled : 1; unsigned char spokenNotificationsWhitelistSettings : 1; unsigned char siriInputLocale : 1; unsigned char queuedAtTimestampHourInMs : 1; unsigned char storeCountryCode : 1; unsigned char deviceCapacityInGB : 1; unsigned char availableDeviceStorageInMB : 1; } _has;
}

@property (copy, nonatomic) NSString *siriDeviceID;
@property (nonatomic) BOOL hasSiriDeviceID;
@property (copy, nonatomic) NSString *siriSpeechID;
@property (nonatomic) BOOL hasSiriSpeechID;
@property (copy, nonatomic) NSString *sharedUserId;
@property (nonatomic) BOOL hasSharedUserId;
@property (nonatomic) long long clientDeviceSamplingTimestampMs;
@property (nonatomic) BOOL hasClientDeviceSamplingTimestampMs;
@property (nonatomic) long long assistantRecordPublishTimestampMs;
@property (nonatomic) BOOL hasAssistantRecordPublishTimestampMs;
@property (copy, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasLocale;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *deviceOs;
@property (nonatomic) BOOL hasDeviceOs;
@property (copy, nonatomic) NSString *deviceBuild;
@property (nonatomic) BOOL hasDeviceBuild;
@property (retain, nonatomic) SISchemaEnabledStatus *enabledStatus;
@property (nonatomic) BOOL hasEnabledStatus;
@property (retain, nonatomic) SISchemaActiveStatus *activeStatus;
@property (nonatomic) BOOL hasActiveStatus;
@property (retain, nonatomic) SISchemaPersonalization *personalization;
@property (nonatomic) BOOL hasPersonalization;
@property (retain, nonatomic) SISchemaMultiUserState *multiUserState;
@property (nonatomic) BOOL hasMultiUserState;
@property (nonatomic) BOOL spokenNotificationsproxCardSeen;
@property (nonatomic) BOOL hasSpokenNotificationsproxCardSeen;
@property (nonatomic) BOOL spokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) BOOL hasSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) int spokenNotificationsWhitelistSettings;
@property (nonatomic) BOOL hasSpokenNotificationsWhitelistSettings;
@property (retain, nonatomic) SISchemaAggregatedMetrics *aggregatedMetrics;
@property (nonatomic) BOOL hasAggregatedMetrics;
@property (copy, nonatomic) NSArray *linkedAccessoryStates;
@property (nonatomic) int siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (retain, nonatomic) SISchemaMultiUserSetup *multiUserSetup;
@property (nonatomic) BOOL hasMultiUserSetup;
@property (nonatomic) unsigned long long queuedAtTimestampHourInMs;
@property (nonatomic) BOOL hasQueuedAtTimestampHourInMs;
@property (nonatomic) int storeCountryCode;
@property (nonatomic) BOOL hasStoreCountryCode;
@property (copy, nonatomic) NSArray *enabledDictationLocales;
@property (nonatomic) unsigned int deviceCapacityInGB;
@property (nonatomic) BOOL hasDeviceCapacityInGB;
@property (nonatomic) double availableDeviceStorageInMB;
@property (nonatomic) BOOL hasAvailableDeviceStorageInMB;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) BOOL hasModelNumber;
@property (copy, nonatomic) NSString *regionInfo;
@property (nonatomic) BOOL hasRegionInfo;
@property (copy, nonatomic) NSString *storefrontId;
@property (nonatomic) BOOL hasStorefrontId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)qualifiedMessageName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteQueuedAtTimestampHourInMs;
- (id)enabledDictationLocalesAtIndex:(unsigned long long)a0;
- (void)addEnabledDictationLocales:(id)a0;
- (void)addLinkedAccessoryState:(id)a0;
- (void)clearEnabledDictationLocales;
- (void)clearLinkedAccessoryState;
- (void)deleteActiveStatus;
- (void)deleteAggregatedMetrics;
- (void)deleteAssistantRecordPublishTimestampMs;
- (void)deleteAvailableDeviceStorageInMB;
- (void)deleteClientDeviceSamplingTimestampMs;
- (void)deleteDeviceBuild;
- (void)deleteDeviceCapacityInGB;
- (void)deleteDeviceOs;
- (void)deleteDeviceType;
- (void)deleteEnabledDictationLocales;
- (void)deleteEnabledStatus;
- (void)deleteLinkedAccessoryState;
- (void)deleteLocale;
- (void)deleteModelNumber;
- (void)deleteMultiUserSetup;
- (void)deleteMultiUserState;
- (void)deletePersonalization;
- (void)deleteRegionInfo;
- (void)deleteSharedUserId;
- (void)deleteSiriDeviceID;
- (void)deleteSiriInputLocale;
- (void)deleteSiriSpeechID;
- (void)deleteSpokenNotificationsControlCenterModuleEnabled;
- (void)deleteSpokenNotificationsWhitelistSettings;
- (void)deleteSpokenNotificationsproxCardSeen;
- (void)deleteStoreCountryCode;
- (void)deleteStorefrontId;
- (unsigned long long)enabledDictationLocalesCount;
- (id)linkedAccessoryStateAtIndex:(unsigned long long)a0;
- (unsigned long long)linkedAccessoryStateCount;

@end