@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState, HMFLogging, HAPSystemKeychainStore, HAPSystemKeyCountProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *activeControllerIdentifier;
@property int keychainStoreUpdatedNotificationToken;
@property (nonatomic) BOOL unitTest_enable_hh2;
@property (readonly, nonatomic) NSString *activeControllerPairingIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemStore;
+ (id)logCategory;
+ (id)viewHintForType:(id)a0;
+ (id)updateAccessoryPairingGenericData:(id)a0 updatedControllerKeyIdentifier:(id)a1;
+ (id)serializeDictionary:(id)a0;
+ (id)getDictionaryFromGenericData:(id)a0;

- (void)configure;
- (int)createHH2ControllerKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3;
- (int)createHH2ControllerKeyWithUsername:(id)a0 publicKey:(id *)a1 secretKey:(id *)a2 keyPair:(id *)a3 username:(id *)a4;
- (id)init;
- (BOOL)deserializeKeyPair:(id)a0 publicKey:(id *)a1 secretKey:(id *)a2 error:(id *)a3;
- (id)getPeripherialIdentifiersAndAccessoryNames;
- (BOOL)updateCurrentiCloudIdentifier:(id)a0 controllerPairingIdentifier:(id)a1 error:(id *)a2;
- (int)_getControllerPublicKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3;
- (BOOL)saveKeyPair:(id)a0 username:(id)a1 syncable:(BOOL)a2 error:(id *)a3;
- (void)ensureControllerKeyExistsForAllViews;
- (BOOL)isAccessoryAssociatedWithControllerKey:(id)a0 controllerID:(id *)a1;
- (BOOL)triggerPreferredHH2ControllerKeyRoll;
- (id)allAccessoryPairingKeys;
- (id)pairingIdentityFromKeychainItem:(id)a0;
- (int)_removeControllerKeyPairForKeyType:(id)a0 identifier:(id)a1 leaveTombstone:(BOOL)a2;
- (BOOL)saveLocalPairingIdentity:(id)a0 syncable:(BOOL)a1 error:(id *)a2;
- (id)getAssociatedControllerKeyForAccessory:(id)a0;
- (BOOL)savePublicKey:(id)a0 forAccessoryName:(id)a1 error:(id *)a2;
- (int)_getPublicKey:(id *)a0 registeredWithHomeKit:(BOOL *)a1 forAccessoryName:(id)a2;
- (id)_getLocalPairingIdentityAllowingCreation:(BOOL)a0 error:(id *)a1;
- (id)auditKeysOfManagedAccessories:(id)a0;
- (id)_getKeychainItemsForAccessGroup:(id)a0 type:(id)a1 account:(id)a2 shouldReturnData:(BOOL)a3 error:(int *)a4;
- (BOOL)removeControllerKeyPairForIdentifier:(id)a0 leaveTombstone:(BOOL)a1 error:(id *)a2;
- (BOOL)updateAccessoryPairingKey:(id)a0 error:(id *)a1;
- (id)readControllerPairingKeyForAccessory:(id)a0 error:(id *)a1;
- (BOOL)deletePairingKeysForAccessory:(id)a0 error:(id *)a1;
- (id)countAccessoryPairingKeysForMetrics;
- (id)getLocalPairingIdentity:(id *)a0;
- (int)_getPeripheralIdentifier:(id *)a0 forAccessoryIdentifier:(id)a1 protocolVersion:(unsigned long long *)a2 resumeSessionID:(unsigned long long *)a3;
- (BOOL)saveHH2PairingIdentity:(id)a0 syncable:(BOOL)a1;
- (BOOL)deleteAllPeripheralIdentifiers:(id *)a0;
- (id)readAccessoryPairingKeyForAccessory:(id)a0 error:(id *)a1;
- (id)getHH2ControllerKeyWithIdentifier:(id)a0;
- (BOOL)getControllerPublicKey:(id *)a0 secretKey:(id *)a1 username:(id *)a2 allowCreation:(BOOL)a3 forAccessory:(id)a4 error:(id *)a5;
- (int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)a0;
- (BOOL)updatePeripheralIdentifier:(id)a0 forAccessoryIdentifier:(id)a1 protocolVersion:(unsigned long long)a2 previousVersion:(unsigned long long *)a3 resumeSessionID:(unsigned long long)a4 error:(id *)a5;
- (BOOL)getControllerPublicKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3 allowCreation:(BOOL)a4 forAccessory:(id)a5 error:(id *)a6;
- (void)_updateKeychainItemToInvisible:(id)a0;
- (int)_getAllAvailableControllerPublicKeys:(id *)a0 secretKeys:(id *)a1 userNames:(id *)a2;
- (int)_savePeripheralIdentifier:(id)a0 forAccessoryIdentifier:(id)a1 protocolVersion:(unsigned long long)a2 resumeSessionID:(unsigned long long)a3;
- (void).cxx_destruct;
- (BOOL)updateActiveControllerPairingIdentifier:(id)a0;
- (id)_getControllerKeychainItemForKeyType:(id)a0 error:(int *)a1;
- (int)_saveKeyPair:(id)a0 username:(id)a1 syncable:(BOOL)a2 keyType:(id)a3;
- (BOOL)createAccessoryPairingKey:(id)a0 error:(id *)a1;
- (BOOL)savePeripheralIdentifier:(id)a0 forAccessoryIdentifier:(id)a1 protocolVersion:(unsigned long long)a2 resumeSessionID:(unsigned long long)a3 error:(id *)a4;
- (BOOL)getOrCreateHH2ControllerKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3;
- (id)dumpState;
- (BOOL)updateKeychainItem:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;
- (int)_removeKeychainItem:(id)a0 leaveTombstone:(BOOL)a1;
- (BOOL)removeControllerKeyPairWithError:(id *)a0;
- (BOOL)establishRelationshipBetweenAccessoryAndControllerKey:(id)a0 error:(id *)a1;
- (id)_chooseHH2KeyFromMultipleHH2Keys:(id)a0;
- (id)_auditKeychainItems:(id)a0 managedAccessories:(id)a1;
- (id)getPreferredHH2ControllerKey;
- (BOOL)getControllerPublicKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3 allowCreation:(BOOL)a4 error:(id *)a5;
- (BOOL)getAllAvailableControllerPublicKeys:(id *)a0 secretKeys:(id *)a1 userNames:(id *)a2 error:(id *)a3;
- (void)dealloc;
- (BOOL)deleteKeychainItem:(id)a0 error:(id *)a1;
- (BOOL)_updateKeychainItemWithPlatformIdentifier:(void *)a0 keychainItem:(id)a1 error:(id *)a2;
- (id)readPublicKeyForAccessoryName:(id)a0 registeredWithHomeKit:(BOOL *)a1 error:(id *)a2;
- (id)allKeychainItemsForType:(id)a0 identifier:(id)a1 syncable:(id)a2 error:(id *)a3;
- (BOOL)getCurrentiCloudIdentifier:(id *)a0 controllerPairingIdentifier:(id *)a1 error:(id *)a2;
- (id)getOrCreateLocalPairingIdentity:(id *)a0;
- (BOOL)removeControllerKeyPairLeaveTombstone:(BOOL)a0 error:(id *)a1;
- (BOOL)registerAccessoryWithHomeKit:(id)a0 error:(id *)a1;
- (BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(id)a0 error:(id *)a1;
- (int)_removeAccessoryKeyForName:(id)a0;
- (int)_createControllerPublicKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3;
- (id)allLegacyAccessoryPairingKeys;
- (id)readPeripheralIdentifierForAccessoryIdentifier:(id)a0 protocolVersion:(unsigned long long *)a1 resumeSessionID:(unsigned long long *)a2 error:(id *)a3;
- (int)_removeControllerKeyPairForIdentifier:(id)a0 leaveTombstone:(BOOL)a1;
- (BOOL)removeAccessoryKeyForName:(id)a0 error:(id *)a1;
- (BOOL)removeAllAccessoryKeys:(id *)a0;
- (int)_deleteAllPeripheralIdentifiers;
- (int)_addKeychainItem:(id)a0 logDuplicateItemError:(BOOL)a1;
- (BOOL)isHH2KeyType:(id)a0;
- (BOOL)isHH2Enabled;
- (int)_savePublicKey:(id)a0 forAccessoryName:(id)a1;
- (BOOL)saveAppleMediaAccessoryPairingIdentity:(id)a0;
- (id)_allAccessoryPairingKeysIncludingHH2Key:(BOOL)a0;
- (int)_updateCurrentiCloudIdentifier:(id)a0 controllerPairingIdentifier:(id)a1;
- (BOOL)_getControllerPublicKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3 allowCreation:(BOOL)a4 forAccessory:(id)a5 error:(id *)a6;
- (BOOL)getControllerPublicKey:(id *)a0 secretKey:(id *)a1 username:(id *)a2 allowCreation:(BOOL)a3 error:(id *)a4;
- (BOOL)_getFirstAvailableControllerKeyChainItemForAccount:(id)a0 publicKey:(id *)a1 secretKey:(id *)a2 userName:(id *)a3 keyPair:(id *)a4 error:(id *)a5;
- (id)_getControllerKeychainItemError:(int *)a0;
- (id)allKeysForType:(id)a0 error:(id *)a1;
- (id)pairingIdentityForAppleMediaAccessoryWithUUID:(id)a0;

@end