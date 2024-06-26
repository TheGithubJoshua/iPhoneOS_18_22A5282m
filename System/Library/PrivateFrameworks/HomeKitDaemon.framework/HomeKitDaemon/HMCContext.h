@class HMDBackingStore, NSString, HMDManagedObjectContext, HMCPartition;
@protocol MKFHomeManager;

@interface HMCContext : HMFObject <HMFAsyncContext>

@property (class, readonly, nonatomic) HMCContext *currentContext;

@property BOOL isExecuting;
@property (readonly, nonatomic) HMDManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) HMCPartition *partition;
@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *transactionAuthor;
@property (readonly) id<MKFHomeManager> homeManager;

+ (id)findPhotosPersonWithDatabaseID:(id)a0;
+ (id)findHomeThreadNetworkWithModelID:(id)a0;
+ (id)findBulletinRegistrationWithModelID:(id)a0 error:(id *)a1;
+ (id)findPhotosPersonWithModelID:(id)a0;
+ (id)findAppleMediaAccessoryPowerActionWithDatabaseID:(id)a0;
+ (id)findServiceGroupWithModelID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findFloatCharacteristicWithInstanceID:(id)a0 serviceDatabaseID:(id)a1;
+ (id)findHAPMetadataWithDatabaseID:(id)a0;
+ (id)findHomeMediaSettingWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicBulletinRegistrationWithModelID:(id)a0;
+ (id)findPresenceBulletinConditionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findFloatCharacteristicWithDatabaseID:(id)a0;
+ (id)findNotificationRegistrationCharacteristicWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeWithModelID:(id)a0;
+ (id)findUserAccessCodeWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findAppleMediaAccessoryWithModelID:(id)a0 error:(id *)a1;
+ (id)findNotificationRegistrationMediaPropertyWithModelID:(id)a0 error:(id *)a1;
+ (id)findTimePeriodBulletinConditionWithModelID:(id)a0 error:(id *)a1;
+ (id)findRoomWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findOutgoingInvitationWithModelID:(id)a0;
+ (id)findTimerTriggerWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeManagerWithModelID:(id)a0 error:(id *)a1;
+ (id)findAccountWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findIncomingInvitationWithModelID:(id)a0;
+ (id)findCameraSignificantEventBulletinRegistrationWithDatabaseID:(id)a0;
+ (id)findCharacteristicBulletinRegistrationWithDatabaseID:(id)a0;
+ (id)findAccountWithModelID:(id)a0;
+ (id)findNaturalLightingActionWithDatabaseID:(id)a0;
+ (id)findServiceWithInstanceID:(id)a0 accessoryDatabaseID:(id)a1 error:(id *)a2;
+ (id)findAirPlayAccessoryWithDatabaseID:(id)a0;
+ (id)findCharacteristicWriteActionWithDatabaseID:(id)a0;
+ (id)findStringCharacteristicWithInstanceID:(id)a0 service:(id)a1;
+ (id)findHomeNetworkRouterManagingDeviceSettingWithModelID:(id)a0 error:(id *)a1;
+ (id)findActionWithModelID:(id)a0;
+ (id)findShortcutActionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)synchronizationTokenFromLegacyModelID:(id)a0;
+ (id)findIntegerCharacteristicWithInstanceID:(id)a0 service:(id)a1;
+ (id)findGuestAccessCodeWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findInvitationWithDatabaseID:(id)a0;
+ (id)findFloatCharacteristicWithInstanceID:(id)a0 serviceDatabaseID:(id)a1 error:(id *)a2;
+ (id)findAccessoryWithDatabaseID:(id)a0;
+ (id)findHomePersonWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeSettingWithModelID:(id)a0;
+ (id)findHomeThreadNetworkWithDatabaseID:(id)a0;
+ (id)findGuestAccessCodeWithDatabaseID:(id)a0;
+ (id)findNotificationRegistrationCharacteristicWithDatabaseID:(id)a0;
+ (id)findAppleMediaAccessoryWithDatabaseID:(id)a0;
+ (id)findMediaAccessoryWithDatabaseID:(id)a0;
+ (id)findSignificantTimeEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (BOOL)managedObjectIsMKF:(id)a0;
+ (id)findNaturalLightingActionWithModelID:(id)a0;
+ (id)findCharacteristicEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findAppleMediaAccessoryPowerActionWithModelID:(id)a0;
+ (id)findMediaPlaybackActionWithModelID:(id)a0;
+ (id)findSoftwareUpdateWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findAccountWithDatabaseID:(id)a0;
+ (id)findTimeOfDayTimeSpecificationWithModelID:(id)a0 error:(id *)a1;
+ (id)findCameraReachabilityBulletinRegistrationWithModelID:(id)a0;
+ (id)findAccountHandleWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findServiceWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findTimePeriodBulletinConditionWithDatabaseID:(id)a0;
+ (id)findPresenceEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeNetworkRouterManagingDeviceSettingWithDatabaseID:(id)a0;
+ (id)findCameraReachabilityBulletinRegistrationWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeNetworkRouterManagingDeviceSettingWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeNetworkRouterSettingWithDatabaseID:(id)a0;
+ (id)findTimerTriggerWithDatabaseID:(id)a0;
+ (id)findAnalysisEventBulletinRegistrationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeNetworkRouterManagingDeviceSettingWithModelID:(id)a0;
+ (id)findAppleMediaAccessoryPowerActionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHAPMetadataWithModelID:(id)a0 error:(id *)a1;
+ (id)findMediaAccessoryWithModelID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicWithDatabaseID:(id)a0;
+ (id)findIntegerCharacteristicWithDatabaseID:(id)a0;
+ (id)findLocationEventWithDatabaseID:(id)a0;
+ (id)findUserWithDatabaseID:(id)a0;
+ (Class)managedObjectClassFromProtocol:(id)a0;
+ (id)findFloatCharacteristicWithInstanceID:(id)a0 service:(id)a1 error:(id *)a2;
+ (id)findStringCharacteristicWithInstanceID:(id)a0 serviceDatabaseID:(id)a1;
+ (id)findIncomingInvitationWithDatabaseID:(id)a0;
+ (id)findMediaPlaybackActionWithDatabaseID:(id)a0;
+ (id)findSoftwareUpdateWithDatabaseID:(id)a0;
+ (id)findInvitationWithModelID:(id)a0 error:(id *)a1;
+ (id)findMediaAccessoryWithModelID:(id)a0;
+ (id)findAccountWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeManagerWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findDeviceWithModelID:(id)a0 error:(id *)a1;
+ (id)findNotificationRegistrationCharacteristicWithModelID:(id)a0 error:(id *)a1;
+ (id)findAccessoryNetworkProtectionGroupWithModelID:(id)a0;
+ (id)findActionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findTimeOfDayTimeSpecificationWithDatabaseID:(id)a0;
+ (id)findTimeOfDayTimeSpecificationWithModelID:(id)a0;
+ (id)findBulletinRegistrationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findAccessoryWithModelID:(id)a0;
+ (id)findDeviceWithDeviceIdentifier:(id)a0;
+ (id)findCharacteristicRangeEventWithModelID:(id)a0;
+ (id)findAccessoryNetworkProtectionGroupWithDatabaseID:(id)a0;
+ (id)findSignificantTimeEventWithModelID:(id)a0;
+ (id)findHomeThreadNetworkWithModelID:(id)a0 error:(id *)a1;
+ (id)findTimePeriodBulletinConditionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findServiceWithInstanceID:(id)a0 accessory:(id)a1 error:(id *)a2;
+ (id)findHAPMetadataWithModelID:(id)a0;
+ (id)findHAPAccessoryWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findAnalysisEventBulletinRegistrationWithModelID:(id)a0 error:(id *)a1;
+ (id)findOutgoingInvitationWithModelID:(id)a0 error:(id *)a1;
+ (id)findStringCharacteristicWithDatabaseID:(id)a0;
+ (id)findCharacteristicWithInstanceID:(id)a0 serviceDatabaseID:(id)a1;
+ (id)findBulletinRegistrationWithDatabaseID:(id)a0;
+ (id)findCameraSignificantEventBulletinRegistrationWithModelID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeWithModelID:(id)a0 error:(id *)a1;
+ (id)findModelObjectOfType:(id)a0 databaseID:(id)a1 error:(id *)a2;
+ (id)findBulletinTimeSpecificationWithModelID:(id)a0 error:(id *)a1;
+ (id)findGuestAccessCodeWithModelID:(id)a0 error:(id *)a1;
+ (id)findCalendarEventWithModelID:(id)a0;
+ (id)findHomePersonManagerSettingWithModelID:(id)a0;
+ (id)findHAPAccessoryWithDatabaseID:(id)a0;
+ (id)findBulletinTimeSpecificationWithModelID:(id)a0;
+ (id)findHomeManagerWithModelID:(id)a0;
+ (id)findServiceGroupWithDatabaseID:(id)a0;
+ (id)findCharacteristicBulletinRegistrationWithModelID:(id)a0 error:(id *)a1;
+ (id)findActionWithDatabaseID:(id)a0;
+ (id)findCharacteristicValueEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findTriggerWithDatabaseID:(id)a0;
+ (id)findPresenceBulletinConditionWithDatabaseID:(id)a0;
+ (id)findRoomWithModelID:(id)a0 error:(id *)a1;
+ (id)findSunriseSunsetTimeSpecificationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomePersonManagerSettingWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findRoomWithDatabaseID:(id)a0;
+ (id)findNotificationRegistrationMediaPropertyWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findInvitationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findCameraSignificantEventBulletinRegistrationWithModelID:(id)a0;
+ (id)findHomeThreadNetworkWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomePersonWithDatabaseID:(id)a0;
+ (id)findCameraSignificantEventBulletinRegistrationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findIncomingInvitationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomePersonWithModelID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicWithInstanceID:(id)a0 service:(id)a1;
+ (id)findTriggerWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeManagerHomeWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findCalendarEventWithDatabaseID:(id)a0;
+ (id)findCharacteristicValueEventWithDatabaseID:(id)a0;
+ (id)findNotificationRegistrationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeAccessCodeWithModelID:(id)a0;
+ (id)findUserAccessCodeWithModelID:(id)a0;
+ (id)findFloatCharacteristicWithInstanceID:(id)a0 service:(id)a1;
+ (id)findHomePersonWithModelID:(id)a0;
+ (id)findNaturalLightingActionWithModelID:(id)a0 error:(id *)a1;
+ (id)findStringCharacteristicWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findInvitationWithModelID:(id)a0;
+ (id)findResidentWithDatabaseID:(id)a0;
+ (id)findAnalysisEventBulletinRegistrationWithModelID:(id)a0;
+ (id)findOutgoingInvitationWithDatabaseID:(id)a0;
+ (id)findBulletinTimeSpecificationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findIntegerCharacteristicWithInstanceID:(id)a0 serviceDatabaseID:(id)a1 error:(id *)a2;
+ (id)findEventTriggerWithDatabaseID:(id)a0;
+ (id)findCharacteristicEventWithModelID:(id)a0;
+ (id)findZoneWithDatabaseID:(id)a0;
+ (id)findTimeOfDayTimeSpecificationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeManagerHomeWithModelID:(id)a0 error:(id *)a1;
+ (id)findRemovedUserAccessCodeWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findEventWithDatabaseID:(id)a0;
+ (id)findSoftwareUpdateWithModelID:(id)a0 error:(id *)a1;
+ (id)findCameraAccessModeBulletinRegistrationWithDatabaseID:(id)a0;
+ (id)findAllModelsOfType:(id)a0 error:(id *)a1;
+ (id)findCharacteristicRangeEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findPresenceEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findActionSetWithModelID:(id)a0;
+ (id)findCameraReachabilityBulletinRegistrationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findLocationEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findTimerTriggerWithModelID:(id)a0 error:(id *)a1;
+ (id)findTimePeriodBulletinConditionWithModelID:(id)a0;
+ (id)findServiceWithModelID:(id)a0;
+ (id)findPresenceBulletinConditionWithModelID:(id)a0;
+ (id)findIncomingInvitationWithModelID:(id)a0 error:(id *)a1;
+ (id)findGuestAccessCodeWithModelID:(id)a0;
+ (id)findAnalysisEventBulletinRegistrationWithDatabaseID:(id)a0;
+ (id)findHomeWithDatabaseID:(id)a0;
+ (id)findZoneWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findRemovedUserAccessCodeWithDatabaseID:(id)a0;
+ (id)findHomeNetworkRouterSettingWithModelID:(id)a0;
+ (id)findBulletinConditionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeAccessCodeWithDatabaseID:(id)a0;
+ (id)findHomeNetworkRouterSettingWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findNotificationRegistrationMediaPropertyWithDatabaseID:(id)a0;
+ (id)findHomeSettingWithDatabaseID:(id)a0;
+ (id)findAccessoryWithModelID:(id)a0 error:(id *)a1;
+ (id)findMediaAccessoryWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findSignificantTimeEventWithDatabaseID:(id)a0;
+ (id)findPersonWithDatabaseID:(id)a0;
+ (id)findEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findRemovedUserAccessCodeWithModelID:(id)a0;
+ (id)findMediaPlaybackActionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findPersonWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findCameraAccessModeBulletinRegistrationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findZoneWithModelID:(id)a0;
+ (id)findBulletinRegistrationWithModelID:(id)a0;
+ (id)findHomeMediaSettingWithDatabaseID:(id)a0;
+ (id)findAccessoryNetworkProtectionGroupWithModelID:(id)a0 error:(id *)a1;
+ (id)findUserWithModelID:(id)a0;
+ (id)findCharacteristicWithInstanceID:(id)a0 service:(id)a1 error:(id *)a2;
+ (id)findModelObjectOfType:(id)a0 template:(id)a1 substitutions:(id)a2 error:(id *)a3;
+ (id)findApplicationDataWithDatabaseID:(id)a0;
+ (id)findServiceGroupWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findModelWithModelID:(id)a0 ofType:(id)a1 error:(id *)a2;
+ (id)findShortcutActionWithModelID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicRangeEventWithDatabaseID:(id)a0;
+ (id)findAccessoryWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeManagerHomeWithDatabaseID:(id)a0;
+ (id)findLocationEventWithModelID:(id)a0;
+ (id)findNotificationRegistrationWithModelID:(id)a0;
+ (id)findIntegerCharacteristicWithInstanceID:(id)a0 serviceDatabaseID:(id)a1;
+ (id)findApplicationDataWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findSoftwareUpdateWithModelID:(id)a0;
+ (id)findHomeSoftwareUpdateSettingWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeMediaSettingWithModelID:(id)a0;
+ (id)findPresenceBulletinConditionWithModelID:(id)a0 error:(id *)a1;
+ (id)findDurationEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomePersonManagerSettingWithDatabaseID:(id)a0;
+ (id)findPhotosPersonWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findStringCharacteristicWithInstanceID:(id)a0 service:(id)a1 error:(id *)a2;
+ (id)findPersonWithModelID:(id)a0;
+ (id)findUserWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findCalendarEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findCameraAccessModeBulletinRegistrationWithModelID:(id)a0 error:(id *)a1;
+ (id)findBulletinConditionWithDatabaseID:(id)a0;
+ (id)findHomeNetworkRouterSettingWithModelID:(id)a0 error:(id *)a1;
+ (id)findEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findRoomWithModelID:(id)a0;
+ (id)findDeviceWithModelID:(id)a0;
+ (id)findRemovedUserAccessCodeWithModelID:(id)a0 error:(id *)a1;
+ (id)findApplicationDataWithModelID:(id)a0;
+ (id)findSunriseSunsetTimeSpecificationWithModelID:(id)a0;
+ (id)findNotificationRegistrationMediaPropertyWithModelID:(id)a0;
+ (id)findStringCharacteristicWithInstanceID:(id)a0 serviceDatabaseID:(id)a1 error:(id *)a2;
+ (id)findUserAccessCodeWithModelID:(id)a0 error:(id *)a1;
+ (id)findShortcutActionWithDatabaseID:(id)a0;
+ (id)findNotificationRegistrationCharacteristicWithModelID:(id)a0;
+ (id)findHomeMediaSettingWithModelID:(id)a0 error:(id *)a1;
+ (id)findAppleMediaAccessoryWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findUserWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeSettingWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeSoftwareUpdateSettingWithDatabaseID:(id)a0;
+ (id)findBulletinConditionWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeAccessCodeWithModelID:(id)a0 error:(id *)a1;
+ (id)findHAPAccessoryWithModelID:(id)a0;
+ (id)findAccountHandleWithModelID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicWriteActionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findDurationEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findSignificantTimeEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findNotificationRegistrationWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeManagerWithDatabaseID:(id)a0;
+ (id)findServiceWithInstanceID:(id)a0 accessory:(id)a1;
+ (id)findSunriseSunsetTimeSpecificationWithDatabaseID:(id)a0;
+ (id)findActionSetWithDatabaseID:(id)a0;
+ (id)findAccountHandleWithModelID:(id)a0;
+ (id)findPresenceEventWithDatabaseID:(id)a0;
+ (id)findActionWithModelID:(id)a0 error:(id *)a1;
+ (id)findActionSetWithModelID:(id)a0 error:(id *)a1;
+ (id)findAppleMediaAccessoryWithModelID:(id)a0;
+ (id)findPersonWithModelID:(id)a0 error:(id *)a1;
+ (id)findServiceWithModelID:(id)a0 error:(id *)a1;
+ (id)findAccountHandleWithDatabaseID:(id)a0;
+ (id)findCharacteristicWriteActionWithModelID:(id)a0 error:(id *)a1;
+ (id)findServiceGroupWithModelID:(id)a0;
+ (id)findAppleMediaAccessoryPowerActionWithModelID:(id)a0 error:(id *)a1;
+ (id)findCalendarEventWithModelID:(id)a0 error:(id *)a1;
+ (id)findDurationEventWithDatabaseID:(id)a0;
+ (id)findLocationEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findPhotosPersonWithModelID:(id)a0 error:(id *)a1;
+ (id)findTriggerWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicValueEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findResidentWithModelID:(id)a0;
+ (id)findEventTriggerWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeSoftwareUpdateSettingWithModelID:(id)a0;
+ (id)findCameraAccessModeBulletinRegistrationWithModelID:(id)a0;
+ (id)findHomeManagerHomeWithModelID:(id)a0;
+ (id)findResidentWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findIntegerCharacteristicWithInstanceID:(id)a0 service:(id)a1 error:(id *)a2;
+ (id)findDeviceWithDatabaseID:(id)a0;
+ (id)findAirPlayAccessoryWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicRangeEventWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeSettingWithModelID:(id)a0 error:(id *)a1;
+ (id)findAccessoryNetworkProtectionGroupWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findTimerTriggerWithModelID:(id)a0;
+ (id)findEventWithModelID:(id)a0;
+ (id)findCharacteristicWithInstanceID:(id)a0 serviceDatabaseID:(id)a1 error:(id *)a2;
+ (id)findResidentWithModelID:(id)a0 error:(id *)a1;
+ (id)findAirPlayAccessoryWithModelID:(id)a0;
+ (id)findOutgoingInvitationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findEventTriggerWithModelID:(id)a0;
+ (id)findHomeWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findZoneWithModelID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicWriteActionWithModelID:(id)a0;
+ (id)findCharacteristicValueEventWithModelID:(id)a0;
+ (id)findDeviceWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findIntegerCharacteristicWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findEventTriggerWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomePersonManagerSettingWithModelID:(id)a0 error:(id *)a1;
+ (id)findNaturalLightingActionWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHomeAccessCodeWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findFloatCharacteristicWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findHAPMetadataWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findPresenceEventWithModelID:(id)a0;
+ (id)findCharacteristicEventWithDatabaseID:(id)a0;
+ (id)findNotificationRegistrationWithDatabaseID:(id)a0;
+ (id)findActionSetWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findAirPlayAccessoryWithModelID:(id)a0 error:(id *)a1;
+ (id)findHomeSoftwareUpdateSettingWithModelID:(id)a0 error:(id *)a1;
+ (id)findBulletinConditionWithModelID:(id)a0;
+ (id)findShortcutActionWithModelID:(id)a0;
+ (id)findBulletinTimeSpecificationWithDatabaseID:(id)a0;
+ (id)findServiceWithInstanceID:(id)a0 accessoryDatabaseID:(id)a1;
+ (id)findModelObjectOfType:(id)a0 parentObjectID:(id)a1 template:(id)a2 substitutions:(id)a3 error:(id *)a4;
+ (id)findMediaPlaybackActionWithModelID:(id)a0 error:(id *)a1;
+ (id)findHAPAccessoryWithModelID:(id)a0 error:(id *)a1;
+ (id)findCharacteristicBulletinRegistrationWithDatabaseID:(id)a0 error:(id *)a1;
+ (id)findTriggerWithModelID:(id)a0;
+ (id)findServiceWithDatabaseID:(id)a0;
+ (id)findDurationEventWithModelID:(id)a0;
+ (id)findSunriseSunsetTimeSpecificationWithModelID:(id)a0 error:(id *)a1;
+ (id)findApplicationDataWithModelID:(id)a0 error:(id *)a1;
+ (id)findUserAccessCodeWithDatabaseID:(id)a0;
+ (id)findCameraReachabilityBulletinRegistrationWithDatabaseID:(id)a0;

- (BOOL)save:(id *)a0;
- (id)findHomeManagerWithError:(id *)a0;
- (void)assertIsExecuting;
- (id)createNewModelOfClass:(Class)a0;
- (void)rollback;
- (void)performBlock:(id /* block */)a0;
- (id)initWithContext:(id)a0 partition:(id)a1;
- (void).cxx_destruct;
- (id)findLocalAccountWithError:(id *)a0;
- (BOOL)save;
- (void)deleteObject:(id)a0;
- (void)unsafeSynchronousBlock:(id /* block */)a0;
- (void)reset;
- (id)findRemoteAccountsWithError:(id *)a0;

@end
