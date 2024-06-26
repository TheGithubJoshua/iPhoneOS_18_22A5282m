@class NSString;

@interface CNMockContactsLogger : NSObject <CNContactsLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchingChangeHistory:(id /* block */)a0;
- (void)saving:(id /* block */)a0;
- (void)internalError:(id)a0;
- (void)setContactImageData:(id)a0 format:(const char *)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)fetchingContainers:(id /* block */)a0;
- (void)requestingAccessForContacts:(id /* block */)a0;
- (void)failedToApplyContactUpdateOfKind:(const char *)a0 value:(id)a1 property:(id)a2 error:(id)a3;
- (void)clearingChangeHistory:(id /* block */)a0;
- (void)deletingContact:(id)a0;
- (void)setContactImageDataZeroCropRect:(id)a0 format:(const char *)a1;
- (void)fetchingGroups:(id /* block */)a0;
- (void)accessAuthorizationStatusWasDenied;
- (void)updatingContact:(id)a0;
- (void)didFetchEncodedContacts:(id)a0 error:(id)a1;
- (void)fetchingContactWithUserActivity:(id /* block */)a0;
- (void)contactsAccessWasDeniedWithError:(id)a0;
- (void)changingMeContact:(id /* block */)a0;
- (void)changedMeContact:(id)a0;
- (void)requestAuthorizationWasDenied;
- (void)setContactImageData:(id)a0;
- (void)fetchContactsMatchingPredicate:(id)a0 unifyResults:(BOOL)a1 keysToFetch:(id)a2;
- (void)fetchingContactsBatch:(id /* block */)a0;
- (void)errorWhenQueryingTetheredSyncData:(id)a0;
- (void)unregisteringForChangeHistory:(id /* block */)a0;
- (void)postingNotification:(id /* block */)a0;
- (void)addingContacts:(id)a0 toContainerWithIdentifier:(id)a1;
- (void)contactsAccessWasGranted;
- (void)postingNotificationWithName:(id)a0;
- (void)servicingContactsRequest:(id /* block */)a0;
- (void)didFetchContacts:(id)a0 error:(id)a1;
- (void)registeringForChangeHistory:(id /* block */)a0;
- (void)resettingSortDataIfNeeded:(id /* block */)a0;
- (void)saveRequestInvalid:(id)a0;
- (void)fetchingContactIdentifierWithMatchingDictionary:(id /* block */)a0;
- (void)saveRequestFailed:(id)a0;
- (void)XPCConnectionWasInvalidated;
- (void)fetchContactsProgressivelyMatchingPredicate:(id)a0 unifyResults:(BOOL)a1 keysToFetch:(id)a2;
- (void)applyContactUpdateOfKind:(const char *)a0 value:(id)a1 property:(id)a2;
- (void)fetchingContactCount:(id /* block */)a0;
- (void)fetchEncodedContactsMatchingPredicate:(id)a0 unifyResults:(BOOL)a1 keysToFetch:(id)a2;
- (void)settingDefaultAccount:(id /* block */)a0;
- (void)fetchingMeContactIdentifier:(id /* block */)a0;
- (void)serviceError:(id)a0;
- (void)fetchingContacts:(id /* block */)a0;
- (void)deleteImageRecentsMetadataRequestFailed:(id)a0;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)a0;
- (void)XPCConnectionWasInterrupted;
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)a0;
- (void)fetchingContactSectionCounts:(id /* block */)a0;
- (void)fetchingDefaultContainerIdentifier:(id /* block */)a0;
- (void)removeContactImageData;

@end
